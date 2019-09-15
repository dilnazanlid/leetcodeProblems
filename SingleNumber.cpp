class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int x: nums){
            hash[x]++;
        }
        for(auto iter=hash.begin();iter!=hash.end();iter++){
            if (iter->second==1) return iter->first;
        }
        return 0;
    }
};
