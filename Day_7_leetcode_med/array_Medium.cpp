#include <iostream>

using namespace std;

// 169. Majority Element (leetcode);
int majorityElement(vector<int> &nums)
{

    int n = nums.size();

    // for (int i = 0; i < n; i++) {
    //     int cnt = 0;
    //     for (int j = i; j < n; j++) {

    //         if (nums[i] == nums[j]) {
    //             cnt++;
    //         }
    //     }
    //     cout << cnt;
    //     if (cnt > n / 2)
    //         return nums[i];
    // }
    // return -1;

    int count = 0;
    int conditate = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            conditate = nums[i];
        }

        if (nums[i] == conditate)
        {
            count++;
        }
        else
        {
            count--;
            cout << count;
        }
    }

    return conditate;
}

int maxSubArray(vector<int> &nums)
{
    // using kadan's algorithm
    int n = nums.size();

    if (n < 0)
        return -1;

    int cs = 0;
    int ms = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cs += nums[i];

        // cout << "Current sum = " << cs ;

        ms = max(cs, ms);

        if (cs < 0)
        {
            cs = 0;
        }
    }

    return ms;
}

int subarraySum(vector<int> &nums, int k)
{
    // int n = nums.size() ;

    // int cnt = 0 ;

    // int cs = 0 ;

    // for(int i = 0; i < n; i++){

    //     cs += nums[i] ;

    //     cout << cs ;

    //     if(cs == k){
    //        cnt =
    //     }
    // }
    // return cnt ;

    int n = nums.size();

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {

            sum += nums[j];

            if (sum == k)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int maxProfit(vector<int> &prices)
{
    int bp = INT_MAX;

    int n = prices.size();
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        if (bp < prices[i])
        {

            int profit = prices[i] - bp;

            maxProfit = max(profit, maxProfit);
        }
        else
        {

            bp = prices[i];
        }
    }

    return maxProfit;
}

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    vector<int> ans;

    // int n = matrix.size();

    int sr = 0;                    // starting row
    int sc = 0;                    // starting col
    int er = matrix.size() - 1;    // ending row
    int ec = matrix[0].size() - 1; // ending col

    while (sr <= er && sc <= ec)
    {
        // top
        for (int i = sc; i <= ec; i++)
        {
            ans.push_back(matrix[sr][i]);
        }

        // right
        for (int i = sr + 1; i <= er; i++)
        {
            ans.push_back(matrix[i][ec]);
        }

        // buttom
        if (sr < er)
        {
            for (int i = ec - 1; i >= sc; i--)
            {
                ans.push_back(matrix[er][i]);
            }
        }

        // left
        if (sc < ec)
        {
            for (int i = er - 1; i >= sr + 1; i--)
            {
                ans.push_back(matrix[i][sc]);
            }
        }

        sr++;
        sc++;
        er--;
        ec--;
    }

    return ans;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5} ;

    return 0;
}