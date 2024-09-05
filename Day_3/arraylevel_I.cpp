#include <iostream>
#include <limits.h>

using namespace std;


// 1. print the double value
void printDoublevalue(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// 2. sumo all element in given array
int sumOfEntaireArray(int arr[], int size)
{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// 3. linear search
bool searchElementInArray(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }

    return false;
}

// 4. count zero and one
void countZeroandOne(int arr[], int size)
{

    int zero = 0;
    int one = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }

        if (arr[i] == 1)
        {
            one++;
        }
    }

    cout << "Count of one : " << one << endl;

    cout << "Count of zero : " << zero << endl;
}


// 5. minimum number in given array
int minimumNumberofArray(int arr[], int size)
{

    int minAns = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        minAns = min(arr[i], minAns);
    }

    return minAns;
}

// 6. reverse Array
void reverseArray(int array[], int size)
{

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(array[left], array[right]);
        left++;
        right--;
    }
}

// 7. print extreme value 
void printExtremPosition(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }

        left++;
        right--;
    }
}

// 8. find unique element
int findUniqueElement(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

// 9. print all pairs 
void printAllpairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}

//10. print triplate pairs

// sort zero and one

// 11. sort the zero and one
void sortZeroandOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zeroCount++;
    //     }

    //     if (arr[i] == 1)
    //     {
    //         oneCount++;
    //     }
    // }

    int left = 0 ;
    int right = size - 1;

    while (left <= right)
    {
        /* code */

        if (arr[left] == 0  || arr[right] == 0)
        {
            /* code */
            zeroCount++;  
        }

        if (arr[left] == 0  || arr[right] == 0)
        {
            /* code */
            oneCount++;  
        }

        left++;
        right--;
        
    }
    

    int i = 0; 
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0 ;
    // }

    // for (int j = i; j < size; j++)
    // {
    //     arr[j] = 1;
    // }

    while (zeroCount--)
    {
        arr[i] = 0;
        i++;
    }

    while (oneCount--)
    {
        arr[i] = 1;
        i++;
    }
}


// 12. shift element by one place
void shiftbyOne(int arr[], int size){

    int temp = arr[size-1]; 

    for (int i = size - 1; i >= 1; i--)
    {
        /* code */

        arr[i] = arr[i-1];

    }

    arr[0] = temp;
    
}


int main()
{

    // int arr[] = {1, 2, 3};
    // int size = 3;

    // printAllpairs(arr, size);

    // int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    // int size = 10;

    // int ans = findUniqueElement(arr, size);

    // cout << ans << endl;

    // int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100} ;
    // int n = 10;

    // printDoublevalue(arr, n);

    // int arr[] = {1, 2, 3, 4, 5};

    // int size = 5 ;

    // int sum = sumOfEntaireArray(arr, size);

    // cout << "sum off all array element =  " << sum ;

    // int arr[] = {10, 20, 30, 40, 50};
    // int target =  10 ;

    // int size = 5 ;

    // bool search = searchElementInArray(arr, size, target);

    // cout << search << endl;

    // int arr[] = {0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1};
    // int size = 12;

    // sortZeroandOnes(arr, size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // countZeroandOne(arr, size);

    // int arr[] = {20, 4, 15, 2, 6, 8, 11};
    // int size = 7;

    // printExtremPosition(arr, size);

    // reverseArray(arr, size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int size = 7 ;

    // int ans = minimumNumberofArray(arr, size);

    // cout << ans  << endl;


    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8 ;

    shiftbyOne(arr, size);

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    

    return 0;
}