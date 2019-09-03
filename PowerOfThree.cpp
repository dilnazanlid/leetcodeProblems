class Solution {
public:
    bool isPowerOfThree(int n) {
        bool res=true;
        if (n<=0){
            return false;
        }else if (n==1){
            return true;
        }
         do{
           if(n%3!=0){
              res=false;
            }
            n=n/3;
          } while(n>1 && res);
        return res;
        
    }
};
