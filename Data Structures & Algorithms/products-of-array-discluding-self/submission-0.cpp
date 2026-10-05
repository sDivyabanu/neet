class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size());
        left[0]=1;
        
        vector<int>right(nums.size());
        right[nums.size()-1]=1;
        
        int l = 1;
        int r = 1;
        for(int i =1;i<nums.size();i++){
            left[i] = l*(nums[i-1]);
            l=left[i];
        }
        for(int i = nums.size()-2;i>=0;i--){
            right[i] = r*(nums[i+1]);
            r=right[i];
        }
        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            int a = left[i]*right[i];
            ans.push_back(a);
        }
    return ans;
    }
};
