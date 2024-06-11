#include "PriorityQueue.h"



PriorityQueue::PriorityQueue(const char x) {
	value[0] = x[0];
	if (x[1]) value[1] = x[1];
	length = 1;
}
PriorityQueue::PriorityQueue(int x)  {
	value[0] = x + '0';
	length = 1;
}

PriorityQueue::~PriorityQueue() {

	delete[] value;
}

void PriorityQueue::operator+=(const char c) {
	v[length] = c;
	length++;
	for(int i=0;<length;i++)
		for(int )

}

void PriorityQueue::operator--() {

	for (int i = 0; i < length; i++)
		value[i] = value[i + 1];
	value[length] = '\0';
	length--;
}

int PriorityQueue::operator()(PriorityQueue) {
	return length;
}

int PriorityQueue::operator()(const char c) {
	
	if( (char*)c=="sum")
		for(int i=0,int sum=0;i<length;i++)
			sum=(int)
	if ((char*)c == "max")
		

	if ((char*)c == "min")
}