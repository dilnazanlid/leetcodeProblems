class Solution {
public:
    bool isValid(string s) {
        int length = s.length();
        if (length%2==1){
            return false;
        }
        stack<char> list;
       for(char x: s) {
            if (x=='(' || x=='{' || x=='[' || list.empty()){
                list.push(x);
            }else{
                if ((list.top()=='{' && x=='}') ||
                   (list.top()=='[' && x==']') ||
                   (list.top()=='(' && x==')')){
                    list.pop();
                }else{
                    return false;
                }
            }
        }
        if(list.empty())
        return true;
        else 
            return false;
    }
};
