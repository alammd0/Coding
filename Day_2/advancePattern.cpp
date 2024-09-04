#include <iostream>

using namespace std;

// 1. pattern - 1 (hallow pattern)

void hallow_pattern(int totalrow, int totalcol)
{

    for (int i = 1; i <= totalrow; i++)
    {
        for (int j = 1; j <= totalcol; j++)
        {
            if (i == 1 || j == 1 || i == totalrow || j == totalcol)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

// 2. pattern - 2 (interted and rotated half piramide)
void interver_pattern(int trow, int tcol)
{

    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= tcol - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// 3. pattern - 3 (Number inverted)

void number_Pattern(int trow, int tcol)
{

    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= tcol - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 4. patter - 4 (floyd triangles)
void number_Pattern2(int trow, int tcol)
{

    int count = 1;

    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// 5. pattern - 5 (zero/one pattern)

void zeroPattern(int trow, int tcol)
{

    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1" << " ";
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}

// 6 - pattern 6 (ButterFly)

void butterFlyPattern(int trow, int tcol)
{

    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }

        for (int j = 1; j <= 2 * (tcol - i); j++)
        {
            cout << " " << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    for (int i = trow; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }

        for (int j = 1; j <= 2 * (tcol - i); j++)
        {
            cout << " " << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

// 7. pattern - 7 (solid Rambus)
void solid_pattern(int trow, int tcol)
{

    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= tcol - i; j++)
        {
            cout << " " << " ";
        }

        for (int j = 1; j <= tcol; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
}

// 8 - pattern (hallow Rhombus)
void hallow_pattern2(int trow, int tcol)
{
    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= tcol - i; j++)
        {
            cout << " " << " ";
        }

        for (int j = 1; j <= tcol; j++)
        {
            if (i == 1 || j == 1 || i == trow || j == tcol)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }

        cout << endl;
    }
}

// 9. Daimond Pattern

void DaimondPattern(int tcol, int trow)
{

    for (int i = 1; i <= trow; i++)
    {
        for (int j = 1; j <= tcol - i; j++)
        {
            cout << " " << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
    for (int i = trow; i >= 1; i--)
    {
        for (int j = 1; j <= tcol - i; j++)
        {
            cout << " " << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
}

int main()
{

    // hallow_pattern(4, 4);

    // interver_pattern(4, 4);

    // number_Pattern(4, 4);

    // number_Pattern2(4, 4);

    // zeroPattern(4, 4);

    // butterFlyPattern(4, 4);

    // solid_pattern(4, 4);

    // hallow_pattern2(4, 4);

    DaimondPattern(4, 4);

    return 0;
}