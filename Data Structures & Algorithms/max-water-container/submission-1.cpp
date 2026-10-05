class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mar=0;

        int l = 0;
        int r = heights.size()-1;

        while(l<r){
            int len = min(heights[l],heights[r]);
            int br = r-l;

            int ar = len*br;

            if(heights[l]>heights[r]){
                r--;
            }
            else{
                l++;
            }
            mar = max(mar,ar);

        }

        return mar;
    }
};
