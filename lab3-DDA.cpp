#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;

void drawLineDDA(int x1, int y1, int x2, int y2, int color) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = max(abs(dx), abs(dy));
    float xIncrement = dx / static_cast<float>(steps);
    float yIncrement = dy / static_cast<float>(steps);

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; ++i) {
        putpixel(round(x), round(y), color);
        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int width = getmaxx();
    int height = getmaxy();
    int centerX = width / 2;
    int centerY = height / 2;

    // Draw X and Y axes
    drawLineDDA(0, centerY, width, centerY, WHITE); // X-axis
    drawLineDDA(centerX, 0, centerX, height, WHITE); // Y-axis

    // Draw lines using DDA algorithm
    drawLineDDA(centerX + 1, centerY - 1, centerX + 500, centerY - 400, GREEN);
    drawLineDDA(centerX + 100, centerY - 100, centerX + 400, centerY - 100, GREEN);

    getch();
    closegraph();
    return 0;
}
