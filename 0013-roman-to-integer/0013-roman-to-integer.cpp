class Solution {
public:
    int getnum(char c){
        if(c=='I'){
            return 1;
        }
        else if(c=='V'){
            return 5;
        }
        else if(c=='X'){
            return 10;
        }
        else if(c=='L'){
            return 50;
        }
        else if(c=='C'){
            return 100;
        }
        else if(c=='D'){
            return 500;
        }
        else{
            return 1000;
        }
    }
    int romanToInt(string s) {
        int num=0;
        for(int i=0;i<s.length();i++){
            int d=getnum(s[i]);
            if(i + 1 < s.length()) {

                int d1 = getnum(s[i + 1]);

                if(d >= d1) {
                    num = num + d;
                }
                else {
                    num = num + (d1 - d);
                    i++;
                }

            }
            else {
                num = num + d;
            }
        }
    return num;
    }
};