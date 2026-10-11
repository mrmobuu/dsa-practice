class Solution {
   private:
    long long merge(vector<int> &nums, int start, int mid, int end) {
        int left = start;
        int right = mid + 1;
        vector<int> temp;
        long long cntr = 0;
        while (left <= mid && right <= end) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                // the elements on the right of left rray can form pair with right arr. 
                cntr += mid - left + 1;
                temp.push_back(nums[right++]);
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left++]);
        }
        while (right <= end) {
            temp.push_back(nums[right++]);
        }

        for (int i = start; i <= end; i++) {
            nums[i] = temp[i - start];
        }
        return cntr;
    }
    long long mergeSort(vector<int> &nums, int start, int end) {
        if (start >= end) return 0;
        int mid = (start + end) / 2;
        long long cntr = 0;
        cntr += mergeSort(nums, start, mid);
        cntr += mergeSort(nums, mid + 1, end);
        cntr += merge(nums, start, mid, end);

        return cntr;
    }

   public:
    long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        long long ans = mergeSort(nums, 0, n - 1);
        return ans;
    }
};
