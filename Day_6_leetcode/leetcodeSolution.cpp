#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &nums, int k)
{

    int n = nums.size();

    int temp[n];

    for (int i = 0; i < n; i++)
    {
        int currIdx = (i + k) % n;

        temp[currIdx] = nums[i];
    }

    // nums.push_back(temp) ;
    // return nums;

    for (int i = 0; i < n; i++)
    {
        nums[i] = temp[i];
    }
}

int missingNumber(vector<int> &nums)
{
    int sum = 0;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int totalSum = (n * (n + 1)) / 2;

    return totalSum - sum;
}

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();

    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[j] != nums[i])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;

    int ans = 0;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        ans = max(count, ans);
    }
    return ans;
}

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    vector<int> ans;

    int n = mat.size();

    int countOne = INT_MIN;

    int rowNo = -1;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }

        if (count > countOne)
        {
            countOne = count;
            rowNo = i;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(countOne);
    return ans;
}


int main()
{

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);

    // int k = 3;

    // rotate(nums, k);

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    cout << findMaxConsecutiveOnes(nums) << endl;

    return 0;
}