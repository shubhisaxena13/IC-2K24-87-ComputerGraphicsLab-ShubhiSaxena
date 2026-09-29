#include <graphics.h>

int main()
{
    initwindow(800, 600, "Triangle");

    // Draw the three sides of the triangle
    line(400, 150, 200, 450);
    line(200, 450, 600, 450);
    line(600, 450, 400, 150);

    getch();
    closegraph();

    return 0;
}