class Solution {
public:
    int reverse(int x) {
        int length=0, n=x;
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
    if(reverse<-2147483648 || reverse>2147483647){
        return 0;
    }else{
        return reverse;
    }
   }
};
