class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 1 || s.length() == 0)  return false;
        vector<char> v = {};
        int i=0;
        while(i<s.size()){
         switch(s[i]){
             case '(': v.push_back(')'); break; 
             case '[': v.push_back(']'); break; 
             case '{': v.push_back('}'); break; 
             default: if(v.size() == 0 || v.back() != s[i]) return false;
                 else v.pop_back();
         }
            i++;
        }
        return v.empty();
    } 
};