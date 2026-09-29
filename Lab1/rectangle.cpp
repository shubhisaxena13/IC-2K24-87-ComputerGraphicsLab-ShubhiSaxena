#include <graphics.h>

int main()
{
    initwindow(800, 600, "Rectangle");

    // Draw a rectangle
    rectangle(200, 150, 600, 450);

    getch();
    closegraph();

    return 0;
}