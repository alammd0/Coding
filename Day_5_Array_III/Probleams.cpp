#include <iostream>
#include <limits.h>

using namespace std;

void shiftNegandPos(int arr[], int n)
{
    int j = 0;

    int idx = 0;

    while (idx < n)
    {
        if (arr[idx] < 0)
        {
            swap(arr[idx], arr[j]);
            j++;
        }

        idx++;
    }
}

void moveZeroes(int nums[], int n)
{

    int j = 0;

    int idx = 0;

    while (idx < n)
    {

        // if(nums[idx] > 0){ // this codition fail for negative numbers

        if (nums[idx] != 0)
        { // this condition works for negative numbers and positive
            swap(nums[j], nums[idx]);
            j++;
        }

        idx++;
    }
}

int countNeg(int nums[], int n)
{
    int count = 0;

    // int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            count++;
        }
    }

    return count;
}

int countPos(int nums[], int n)
{
    int count = 0;

    // int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            count++;
        }
    }

    return count;
}

int maximumCount(int nums[], int n)
{

    int maxCount = INT_MIN;

    int countN = countNeg(nums, n);
    int countP = countPos(nums, n);

    maxCount = max(countP, countN);

    return maxCount;
}

// int findMaxK(int nums[], int n)
// {
//     // step - 1 is sort the Nums
//     sort(nums.begin(), nums.end());

//     int left = 0;
//     int right = n - 1;

//     // step - 2 solve the question using two pointer approch

//     while (left <= right)
//     {
//         if (nums[left] == -nums[right] || nums[right] == -nums[left])
//         {
//             return abs(nums[left]);
//         }

//         if (abs(nums[left]) < abs(nums[right]))
//         {
//             right--;
//         }
//         else
//         {
//             left++;
//         }
//     }

//     return -1;
// }

void sortColors(int nums[], int n)
{
    int idx = 0 ;
    int i = 0 ;
    int j = n - 1 ;

    while(idx <= j){

        if(nums[idx] == 0){
            swap(nums[idx], nums[i]);
            i++;
            idx++;
        }
        else if (nums[idx] == 2){
            swap(nums[idx], nums[j]);
            j--;
        }
        else{
            idx++;
        }
    }

}

int main()
{

    // int arr[] = {23, -7, 12, -10, -11, 40, 60};

    // // int arr[] = {0,1,0,3,-12};

    // int n = 7;

    // // shiftNegandPos(arr, n);

    // int ans = maximumCount(arr, n);

    // cout << ans << endl;

    // moveZeroes(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = 6;

    sortColors(arr, n);
    // cout << ans << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}