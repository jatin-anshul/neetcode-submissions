class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int preSum = 0;
        for(int i =0; i< nums.size(); i++){
            int num = nums[i];
            int rem = target - num; 
            if(mp.find(rem) != mp.end()){
              return {mp[rem],i};
            }
            mp[num] = i;
    }
  }
};
