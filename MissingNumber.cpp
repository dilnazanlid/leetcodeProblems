class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size(), res=0;
        int arr[size+1]={0};
         for (int i=1;i<=size;i++){
            res+=i;
        }
        for (int i=0;i<size;i++){
             res-=nums.at(i);
        }
       
        return res;
    }
};
