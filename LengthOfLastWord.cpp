class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int res=0;
        for (int i=0;i<length;i++){
            if ((int(s.at(i))>=65 && int(s.at(i))<=90) || (int(s.at(i))>=97 && int(s.at(i))<=122) ){
                if (i>0 && s.at(i-1)==' '){
                    res=1;
                }else{
                    res++;
                }
            }
        }
        return res;
    }
};
