class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_map<int, int> pairs;
        for(int x: nums){
            pairs[x]++;
        }
        for(auto iter=pairs.begin();iter!=pairs.end();iter++){
            if (iter->second>=2) return true;
        }
        return false;
    }
};
