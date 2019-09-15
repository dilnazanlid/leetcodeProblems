class Solution {
public:
    int mySqrt(int x) {
        if(x==1){
            return x;
        }
        int first=1, end=x/2;
        while(first<=end){
            int m=first + (end-first)/2;
            if (m==x/m){
                return m;
            }
            if(m<x/m){
                first=m+1;
            }else{
                end=m-1;
            }
        }
        return first-1;
    }
};
