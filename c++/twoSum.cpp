// Time : O(N)
// Space : O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int b=target-nums[i];
            if(mp.find(b)!=mp.end()){
                res.push_back(i);
                res.push_back(mp[b]);
                break;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};
