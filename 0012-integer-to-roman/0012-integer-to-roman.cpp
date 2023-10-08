#include<bits/stdc++.h>
class Solution {
public:
    string intToRoman(int num) {
        pair<int,string> pair[] = {{1000,"M"},{900,"CM"},{500,"D"},{400,"DM"},{100,"C"},{90,"LC"},{50,"L"},{40,"LC"},{10,"X"},{9,"VX"},{5,"V"},{4,"IV"},{1,"I"}};
        string ans = "";
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
        
        return ans;
    }
};