#include <graphics.h>

int main()
{
    initwindow(800, 600, "Circle");

    // Draw a circle
    circle(400, 300, 100);

    getch();
    closegraph();

    return 0;
}