class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> h;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(h.find(x)!=h.end()){
                return{ h[x],i};
            }
            h[nums[i]]=i;
        }
        return {};
        
        
        
        
        
    }
};