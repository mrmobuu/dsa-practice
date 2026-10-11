class Solution {
   public:
    double median(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        int m = arr2.size();
        if (n > m) {
            return median(arr2, arr1);
        }
        int k = n + m;
        int beechKaCVal = (k + 1) / 2;
        int low = 0, high = n;
        while (low <= high) {
            int mid1 = (low + high) / 2;
            int mid2 = beechKaCVal - mid1;

            int l1 = (mid1 > 0) ? arr1[mid1 - 1] : INT_MIN;
            int l2 = (mid2 > 0) ? arr2[mid2 - 1] : INT_MIN;
            int r1 = (mid1 < n) ? arr1[mid1] : INT_MAX;
            int r2 = (mid2 < m) ? arr2[mid2] : INT_MAX;
            int l = max(l1, l2);
            int r = min(r1, r2);
            if (l2 <= r1 && l1 <= r2) {
                if (k % 2 == 0) return (l + r) / 2.0;
                return l;
            }else if(l1 > r2){
                high = mid1 - 1;
            }else{
                low = mid1 + 1;
            }
        }
        return 0;
    }
};
