#include <iostream>
#include <vector>

using namespace std;

// 704. Binary Search
int search(vector<int> &nums, int target)
{
    // int n = nums.size() ;

    int lft = 0;
    int rgt = nums.size() - 1;

    while (lft <= rgt)
    {
        // find mid
        int mid = (lft + rgt) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            lft = mid + 1;
        }
        else
        {
            rgt = mid - 1;
        }

        // mid = (lft + rgt) / 2;/
    }
    return -1;
}

// 35. Search Insert Position
int searchInsert(vector<int> &nums, int target)
{
    int n = nums.size();

    int ans = n;

    // for(int i = 0; i < n; i++){
    //     if(nums[i] >= target){
    //         ans = i;
    //         break;
    //     }
    // }

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] >= target)
        {
            ans = mid;

            right = mid - 1;
        }
        else
        {

            left = mid + 1;
        }
    }

    return ans;
}
// 162. Find Peak Element
int findPeakElement(vector<int> &nums)
{
    int n = nums.size();

    int left = 0;
    int right = n - 1;

    while (left < right)
    {

        int mid = (left + right) / 2;

        if (nums[mid] > nums[mid + 1])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left;
}

// 34. Find First and Last Position of Element in Sorted Array
int firstocc(vector<int> &nums, int target)
{

    int n = nums.size();

    int left = 0;
    int right = n - 1;

    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            ans = mid;

            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans;
}

int lastOcc(vector<int> &nums, int target)
{

    int n = nums.size();

    int left = 0;
    int right = n - 1;

    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{

    vector<int> ans(2);

    int firstOccrence = firstocc(nums, target);
    // if(firstOccrence == nums.size() || nums[firstOccrence] != target) return {-1, -1};
    int lastOccrence = lastOcc(nums, target);

    // ans.push_back(firstOccrence);

    // ans.push_back(lastOccrence);
    ans[0] = firstOccrence;
    ans[1] = lastOccrence;

    return ans;
}

int main()
{
    vector<int> nums

    
    return 0;
}