class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        
        digits.at(size-1)++;
        if (digits.at(size-1)==10){
            int i=0;
            
            
          do {
            digits.pop_back();
                i++;
                size--;
            } while(size!=0 && digits.at(size-1)==9 );
            
            
            if (size==0){
                digits.push_back(1);
            }else{
                digits.at(size-1)++;
            }
        
          for(int j=0;j<i;j++){
               digits.push_back(0);
           }
        }
        return digits;
    }
};
