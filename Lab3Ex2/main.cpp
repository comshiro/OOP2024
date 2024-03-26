#include "Canvas.h"
#include <math.h>
int main() {
    Canvas canvas(20, 10);
    canvas.DrawRect(1, 1, 15, 8, '#');
    canvas.DrawCircle(10, 5, 4, '*');
    canvas.DrawLine(5, 2, 18, 7, '+');
    canvas.FillCircle(10, 5, 4, '5');
    canvas.FillRect(3, 3, 12, 6, '@');
    canvas.Print();
    canvas.Clear();
    canvas.Print();

    return 0;
}
