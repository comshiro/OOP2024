#include "Number.h"
#include <cstring>
#include <cmath>



Number::Number(int value, int base) : base(base) {
    int length = 1;
    int temp = value;
    while (temp /= base)
        length++;
    
    this->value = new char[length + 1];

    char* ptr = this->value + length; 
    *ptr = '\0';
    do {
        *(--ptr) = '0' + (value % base); 
        value /= base; 
    } while (value != 0);

    this->value = ptr;
}


Number::Number(const char* value, int base = 10) : base(base) {
    this->value = new char[strlen(value) + 1];
    strcpy(this->value, value);
}

Number::Number(char* value, int base =10) : base(base) {
    this->value = value;
}

Number::~Number() {
    delete[] value;
}

//copy
Number::Number(const Number& other) : base(other.base) {
    value = new char[strlen(other.value) + 1];
    strcpy(value, other.value);
}

//move
Number::Number(Number&& other) noexcept : value(other.value), base(other.base) {
    other.~Number();
}

Number& Number::operator=(Number&& other)   {
    if (this != &other) {
        value = other.value;
        base = other.base;
    }
    return *this;
}

Number operator+(const Number& num1, const Number& num2) {
    Number tempNum1 = num1;
    Number tempNum2 = num2;
    

    if (tempNum1.GetBase() != tempNum2.GetBase()) {
        if (tempNum1.GetBase() > tempNum2.GetBase())
            tempNum2.SwitchBase(tempNum1.GetBase());
        else
            tempNum1.SwitchBase(tempNum2.GetBase());
    }

    int k;
    Number tempNum3;
    if (tempNum1.GetDigitsCount() >= tempNum2.GetDigitsCount())
    {
        Number tempNum3 = tempNum1;
        k = tempNum1.GetDigitsCount();
    }
    else 
    {
        Number tempNum3 = tempNum2;
        k = tempNum2.GetDigitsCount();
    }

    int carry = 0,i,j;
    for (i = tempNum1.GetDigitsCount() - 1, j = tempNum2.GetDigitsCount() - 1; i >= 0 && j >= 0; i--, j--) {
        int sum = tempNum1.value[i] - '0' + tempNum2.value[j] - '0' + carry;
        tempNum3.value[k] = sum % tempNum3.GetBase() + '0';
        carry = sum / tempNum3.GetBase();
        k--;
    }
    
    while (carry) {
        int sum = carry;
        if (k >= 0) {
            sum += tempNum3.value[k] - '0';
            tempNum3.value[k] = sum % tempNum3.GetBase() + '0';
        }
        else {
            int newSize = tempNum3.GetDigitsCount() + 1; 
            char* newBuffer = new char[newSize + 1]; 
            strcpy(newBuffer+1, tempNum3.value);
            newBuffer[newSize] = '\0';
            delete[] tempNum3.value;
            tempNum3.value = newBuffer;
            tempNum3.value[0] = carry + '0';
        }
        carry = sum / tempNum3.GetBase();
        k--;
    }

    tempNum1.~Number();
    tempNum2.~Number();

    return tempNum3;
}


Number operator-(const Number& num1, const Number& num2) {
    Number tempNum1 = num1;
    Number tempNum2 = num2;


    if (tempNum1.GetBase() != tempNum2.GetBase()) {
        if (tempNum1.GetBase() > tempNum2.GetBase())
            tempNum2.SwitchBase(tempNum1.GetBase());
        else
            tempNum1.SwitchBase(tempNum2.GetBase());
    }

    int k;
    Number tempNum3;
    if (tempNum1.GetDigitsCount() >= tempNum2.GetDigitsCount())
    {
        Number tempNum3 = tempNum1;
        k = tempNum1.GetDigitsCount();
    }
    else
    {
        Number tempNum3 = tempNum2;
        k = tempNum2.GetDigitsCount();
    }

    int borrow = 0;
    int i, j;
    for (i = tempNum1.GetDigitsCount() - 1, j = tempNum2.GetDigitsCount() - 1; i >= 0 && j >= 0; i--, j--) {
        int diff = tempNum1.value[i] - '0' - (tempNum2.value[j] - '0') - borrow;
        if (diff < 0) {
            tempNum3.value[k] = (diff + tempNum3.GetBase()) % tempNum3.GetBase() + '0';
            borrow = 1;
        }
        else {
            tempNum3.value[k] = diff % tempNum3.GetBase() + '0';
            borrow = 0;
        }
        k--;
    }

    while (borrow) {
        int diff = tempNum1.value[i] - '0' - borrow;
        if (diff < 0) {
            tempNum3.value[k] = (diff + tempNum3.GetBase()) % tempNum3.GetBase() + '0';
            borrow = 1;
        }
        else {
            tempNum3.value[k] = diff % tempNum3.GetBase() + '0';
            borrow = 0;
        }
        i--;
        k--;
    }

    tempNum1.~Number();
    tempNum2.~Number();
    return tempNum3;
}

char Number::operator[](int index) const {
    if (!(index < 0 || index >= strlen(value)))
     return value[index];
}


bool Number::operator<(const Number& other) const {

    Number copy = *this;
    if (base != other.base)
        copy.SwitchBase(other.base);
    
        if (this->GetDigitsCount() != other.GetDigitsCount())
        {
            if (this->GetDigitsCount() < other.GetDigitsCount())
            {
                
                copy.~Number();
                return true;
            }
            else{
                
                copy.~Number();
                return false;
            }
        }   
        else
        {
            int k = 0;
            while (copy.value[k] == other.value[k] && k<copy.GetDigitsCount())
                k++;
            if (copy.value[k] < other.value[k])
            {
                copy.~Number();
                return true;
              
            }
            else
            {
                copy.~Number();
                return false;
               
            }
        }
 }



bool Number::operator==(const Number& other) const {
    Number copy = *this;
    if (base != other.base)
        copy.SwitchBase(other.base);
    int k = 0;
    while (copy.value[k] == other.value[k] && k < copy.GetDigitsCount())
        k++;
    return (k == copy.GetDigitsCount() && k == other.GetDigitsCount());
    
}

Number& Number::operator--() {
    if (strlen(value) > 1) {
        char* newValue = new char[strlen(value)]; 
        strcpy(newValue, value + 1); 
        delete[] value;
        value = newValue; 
    }
    else {
        value[0] = '0'; 
    }
    return *this;
}

Number Number::operator--(int) {
    Number temp(*this); 
    if (strlen(value) > 1) {
        value[strlen(value) - 1] = '\0'; 
    }
    else {
        value[0] = '0'; 
    }
    return temp;
}


void Number::SwitchBase(int newBase) {
    
    this->value = ConvertBase(this->base, this->value, newBase);
    base = newBase;
}

void Number::Print() const {

    std::cout << "Value: " << value << " Base: " << base << std::endl;
}

int Number::GetDigitsCount() const {
    return strlen(value);
}

int Number::GetBase() const {
    return base;
}

char* Number::ConvertBase(int base, char* value, int neededBase) {

    int decimalValue = 0;
    int power = 0;

    for (int i = strlen(value) - 1; i >= 0; --i) {
        int digit = (isdigit(value[i])) ? (value[i] - '0') : (toupper(value[i]) - 'A' + 10);
        decimalValue += digit * pow(base, power);
        ++power;
    }

    int length = 1; 
    int temp = decimalValue;
    while (temp /= neededBase) {
        length++;
    }

    char* newValue = new char[length + 1];

    int index = 0;
    while (decimalValue > 0) {
        int remainder = decimalValue % neededBase;
        char digitChar = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        newValue[index++] = digitChar;
        decimalValue /= neededBase;
    }
    newValue[index] = '\0';

    int i = 0, j = index - 1;
    while (i < j) {
        std::swap(newValue[i], newValue[j]);
        i++;
        j--;
    }

    return newValue;
}