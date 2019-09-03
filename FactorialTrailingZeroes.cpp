class Solution {
public:
    int trailingZeroes(int n) {
        int res=0,i=1;
        while(n>=pow(5,i)){
            res+=(n/pow(5,i));
            i++;
        }
        return res;
    }
};
