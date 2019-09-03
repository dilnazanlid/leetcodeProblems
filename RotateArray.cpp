class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        k=k%size;
        for (int i=0;i<size-k;i++){
            nums.push_back(nums.at(i));
        }
        nums.erase(nums.begin(),nums.begin()+(size-k));
    }
};
