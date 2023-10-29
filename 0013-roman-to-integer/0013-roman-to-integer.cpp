class Solution {
public:
    int romanToInt(string s) {
        int ans=0, prev = 0;
        while(!s.empty()){
            int num = 0;
            switch(s.back()){
                case 'I' : num = 1;break;
                case 'V' : num = 5; break;
                case 'X' : num = 10;break;
                case 'L' : num = 50; break;
                case 'C' : num = 100;break;
                case 'D' : num = 500; break;
                case 'M' : num = 1000; break;
            }
            
            if(num < prev){
                ans -= num;
            }else{
                ans += num;
            }
            prev = num;
            s.pop_back();
        }
        return ans;
        
    }
};