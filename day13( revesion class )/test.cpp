#include <iostream>
#include <graphics.h>
#include <cmath> // for abs()

using namespace std;

// Function to implement DDA Line Drawing Algorithm
void drawLineDDA(int x1, int y1, int x2, int y2)
{
    // Calculate dx and dy
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate steps required for generating pixels
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // Calculate increment in x & y for each step
    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;

    // Set starting point
    float x = x1;
    float y = y1;

    // Draw the pixels
    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE); // Draw pixel at (x, y)
        x += xInc;                           // Increment x
        y += yInc;                           // Increment y
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode

    int x1, y1, x2, y2;

    // Input start and end points of the line
    cout << "Enter x1, y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2, y2: ";
    cin >> x2 >> y2;

    // Call DDA function
    drawLineDDA(x1, y1, x2, y2);

    getch();      // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}
