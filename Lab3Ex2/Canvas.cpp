#include "Canvas.h"
#include <iostream>
#include <math.h>

#define M_PI 3.1415

Canvas::Canvas(int width, int height) {
    this->width = width;
    this->height = height;

    canvas = new char* [height];
    for (int i = 0; i < height; ++i) {
        canvas[i] = new char[width];
        for (int j = 0; j < width; ++j) {
            canvas[i][j] = ' ';
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        canvas[y][x] = ch;
    }
}


void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    int centerX = x;
    int centerY = y;

    for (int i = 0; i <= 360; i++) {
        double angle = i * M_PI / 180.0;

        int pointX = (int)(centerX + ray * cos(angle));
        int pointY = (int)(centerY + ray * sin(angle));

        if (pointX >= 0 && pointX < width && pointY >= 0 && pointY < height) {
            SetPoint(pointX, pointY, ch);
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int dy = -ray; dy <= ray; ++dy) {
        for (int dx = -ray; dx <= ray; ++dx) {
            if (dx * dx + dy * dy <= ray * ray) {
                SetPoint(x + dx, y + dy, ch);
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    DrawLine(left, top, right, top, ch);
    DrawLine(left, bottom, right, bottom, ch);
    DrawLine(left, top, left, bottom, ch);
    DrawLine(right, top, right, bottom, ch);
}


void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int y = top; y <= bottom; ++y) {
        for (int x = left; x <= right; ++x) {
            SetPoint(x, y, ch);
        }
    }
}



void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;
    int e2;

    while (true) {
        SetPoint(x1, y1, ch);

        if (x1 == x2 && y1 == y2) break;

        e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}


void Canvas::Print() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << canvas[i][j];
        }
        std::cout << std::endl;
    }
}

void Canvas::Clear() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            canvas[i][j] = ' ';
        }
    }
}
