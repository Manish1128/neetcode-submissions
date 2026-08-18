class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            sum=nums[i];
            if(mp[target - sum] && mp[target - sum] != i){
                return {i,mp[target - sum]};
            }
        }
    
    }
};
