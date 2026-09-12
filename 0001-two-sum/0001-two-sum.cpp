class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int l=0,m=0;
        vector<int> o;
        while(l<nums.size()&&m==0){
            for(int i=l+1;i<nums.size();i++){
                if(nums[i]+nums[l]==target){
                    o.push_back(i);
                    o.push_back(l);
                    m=1;
                }
            }
            l=l+1;
        }
    return o;    
    } 
};