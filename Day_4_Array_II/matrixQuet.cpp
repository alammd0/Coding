#include <iostream>

using namespace std;

void rowSum(int arr[][3], int row, int column)
{

    int sumofrow = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sumofrow += arr[i][j];
        }
        cout << sumofrow << endl;
        sumofrow = 0;
    }
}

void daigolanSum(int arr[][3], int column, int row)
{
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            else if (i + j == row - 1)
            {
                sum += arr[i][j];
            }
        }
    }

    // for (int i = 0; i < row; i++)
    // {
    //     sum += arr[i][i];
    // }

    cout << sum << endl;
}

void columnSum(int arr[][3], int row, int column)
{

    int sumofCol = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sumofCol += arr[j][i];
        }
        cout << sumofCol << endl;
        sumofCol = 0;
    }
}

void transpose(int arr[][3], int row, int column)
{

    for (int i = 0; i < row; i++)
    {

        for (int j = i; j < column; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{

    int arr[3][3] = {
        {15, 16, 17},
        {14, 15, 16},
        {12, 13, 14}};

    int row = 3;
    int column = 3;

    // rowSum(arr, row, column);

    // columnSum(arr, row, column);

    // daigolanSum(arr, row, column);

    transpose(arr, row, column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}