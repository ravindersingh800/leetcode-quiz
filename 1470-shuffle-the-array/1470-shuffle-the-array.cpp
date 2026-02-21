class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int>ans(nums.size());
       int i=0;
       int j=n; 
       int k=0;
       while(j<nums.size()){
        ans[k]= nums[i];
        k++;
        i++;
        ans[k]=nums[j];
        k++;
        j++;
       } 
       return ans;
    }
};