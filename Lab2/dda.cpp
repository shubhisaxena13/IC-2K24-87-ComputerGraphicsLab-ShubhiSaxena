#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    float x1, y1, x2, y2;
    float dx, dy, steps;
    float xIncrement, yIncrement;
    float x, y;

    cout << "Enter starting point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate differences
    dx = x2 - x1;
    dy = y2 - y1;

    // Calculate number of steps
    steps = max(abs(dx), abs(dy));

    // Calculate increments
    xIncrement = dx / steps;
    yIncrement = dy / steps;

    // Initial point
    x = x1;
    y = y1;

    // Draw the line pixel by pixel
    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);

        x = x + xIncrement;
        y = y + yIncrement;
    }

    cout << "\nDDA Line Drawing completed successfully.";
    cout << "\nPress any key on the graphics window to exit.";

    getch();
    closegraph();

    return 0;
}