class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hm;
        for(int i=0;i<nums.size();i++){ 
            int y=target-nums[i];
            if(hm.find(y)!=hm.end()){
                return {i,hm[y]};
            }
            hm[nums[i]]=i;
        }
        return {};
    }
};
