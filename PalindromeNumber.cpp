class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }else{
            int length=0, n=x, initial=x;
	    while(n != 0){
	        n /= 10;
	        ++length;
	    }	
        int i=0;
       long int reverse=0;
	    while (i!=length){			
	        reverse=reverse*10+(x%10); 
	        x/=10;
	        i++;		
        } 
    if(reverse==initial){
        return true;
    }else{
        return false;
    }
        }
        
    }
};
