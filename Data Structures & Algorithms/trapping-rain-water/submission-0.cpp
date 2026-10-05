class Solution {
public:
    int trap(vector<int>& height) {
        int ml=0;
        int mr=0;
        int l=0;
        int r=height.size()-1;
        int water=0;

        while(l<r){
            if(height[l]<height[r]){
                if(height[l]>ml){
                    ml=height[l];
                }
                else{
                    water+=ml-height[l];
                }
                l++;
            }
            else{
                if(height[r]>mr){
                    mr=height[r];
                }
                else{
                    water+=mr-height[r];
                }
                r--;
            }
        }
        return water;
    }
};
