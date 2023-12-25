#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

// Positioning Functions
struct COORD
{
    int X;
    int Y;
};

void SetPos(int x, int y)
{
    COORD c = {x, y};
    cout << "\033[" << c.Y + 1 << ";" << c.X + 1 << "H"; // ANSI escape sequence for setting cursor position
}

// Animation Functions
void Tree(int x, int y)
{
    for (int i = 0; i < 3; i++)
    {
        SetPos(x, y - i);
        cout << "*";
    }
    SetPos(x, y - 3);
    cout << "#";
}

void Stars(const vector<COORD> &stars)
{
    for (const COORD &star : stars)
    {
        SetPos(star.X, star.Y);
        cout << ".";
    }
}

int main()
{
    srand(time(NULL));

    // Generate star positions
    vector<COORD> stars;
    for (int i = 0; i < 50; i++)
    {
        COORD star = {rand() % 80, rand() % 24}; // Adjust the values based on your terminal size
        stars.push_back(star);
    }

    // Draw trees
    for (int i = 0; i < 80 / 3; i++)
    {
        COORD pos = {i * 3, 24 - 3};
        Tree(pos.X, pos.Y);
    }

    // Wish merry Christmas
    SetPos(30, 12);
    cout << "Merry Christmas!";

    // Start animating
    int delay = 500;
    while (true)
    {
        Stars(stars);
        this_thread::sleep_for(chrono::milliseconds(delay));
    }

    return 0;
}
