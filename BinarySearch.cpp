class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s =  0;
        int e = nums.size()-1;
        int m;
        while(s<=e){
            m = s + (e-s)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]<target){
                s = m+1;
            }
            else{
                e = m - 1;
            }
        }
        return -1;
    }
};
