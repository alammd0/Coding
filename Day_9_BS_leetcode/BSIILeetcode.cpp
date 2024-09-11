int findMin(vector<int>& nums) {
        int n = nums.size();

        int left = 0;

        int right = n - 1;

        int minVal = INT_MAX;

        while (left <= right) {

            int mid = (left + right) / 2;

            if (nums[left] <= nums[mid]) {
                minVal = min(minVal, nums[left]);
                left = mid + 1;
            } else {
                minVal = min(minVal, nums[mid]);
                right = mid - 1;
            }
        }
        return minVal;
    }

// 33. Search in Rotated Sorted Array
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int left = 0;

        int right = n - 1;

        while (left <= right) {

            int mid = (left + right) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // case - I
            if (nums[left] <= nums[mid]) {
                // case - a
                if (nums[left] <= target && target <= nums[mid]) {
                    right = mid - 1;
                }
                // case - b
                else {
                    left = mid + 1;
                }
            } else {
                // case - a
                if (nums[mid] <= target && target <= nums[right]) {
                    left = mid + 1;

                }
                // case - b
                else {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }

// 81. Search in Rotated Sorted Array II
     bool search(vector<int>& nums, int target) {
        int n = nums.size();

        int left = 0;

        int right = n - 1;

        while (left <= right) {

            int mid = (left + right) / 2;

            if (nums[mid] == target) {
                return true;
            }

            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left = left + 1;
                right = right - 1;
                continue;
            }

            // case - I
            if (nums[left] <= nums[mid]) {
                // case - a
                if (nums[left] <= target && target <= nums[mid]) {
                    right = mid - 1;
                }
                // case - b
                else {
                    left = mid + 1;
                }
            } else {
                // case - a
                if (nums[mid] <= target && target <= nums[right]) {
                    left = mid + 1;

                }
                // case - b
                else {
                    right = mid - 1;
                }
            }
        }

        return false;
    }