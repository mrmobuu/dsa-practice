class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<vector<int>> temp;
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i < n;i++){
            int numb = 0;
            int el = nums[i];
            while(el){
                int x = el % 10;
                el = el / 10;
                numb += x;
            }
            temp.push_back({nums[i],numb});
        }
        sort(temp.begin(),temp.end(),[](const vector<int> &a,const vector<int> &b){
            if(a[1] < b[1]) return true;
            else if(a[1] == b[1]){
                return a[0] < b[0]; 
            }else{
                return false;
            }
        });
        // for(auto it : temp){
        //     cout << it[0] << " " << it[1] << endl;
        // }
        unordered_map<int,int> mpp;
        for(int i = 0;i < n;i++){
            mpp[nums[i]] = i;
        }
        for(int i = 0;i < n;i++){
            if(temp[i][0] != nums[i]){
                ans++;
                int idx = mpp[temp[i][0]];
                swap(nums[i],nums[idx]);

                mpp[nums[i]] = i;
                mpp[nums[idx]] = idx;
            }
        }
        return ans;
    }
};
