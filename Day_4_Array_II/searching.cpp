#include <iostream>

using namespace std;

bool search(int arr[][4], int row, int column, int target)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    int row = 3;
    int column = 4;

    int arr[3][4];

    cout << "Please enter the elements of the array:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Please enter element for position : " << i << " " << j << " = ";
            cin >> arr[i][j];
        }
    }

    cout << endl;

    cout << "Printing the element of Array : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    int target = 30;

    cout << search(arr, 3, 4, target);

    return 0;
}