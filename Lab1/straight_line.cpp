#include <graphics.h>

int main()
{
    initwindow(800, 600, "Straight Line");

    // Draw a straight line
    line(200, 300, 600, 300);

    getch();
    closegraph();

    return 0;
}