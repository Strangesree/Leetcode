class Solution {
public:
    string intToRoman(int num) {
        int normal[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans;
        for(int pos = 0; num > 0 ;pos++){
            while(num >= normal[pos]){
                ans += roman[pos];
                num -= normal[pos];
            }
        }
        return ans;            
    }
};