class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i =0; i<nums.size(); i++){
            int reminder = target-nums[i];
            auto j = mp.find(reminder);
            if(j != mp.end()){
                res.push_back(j->second);
                res.push_back(i);
                
                return res;
            } else{
                mp.insert({nums[i],i});
            }
        }

        // return res;
        
    }
};
