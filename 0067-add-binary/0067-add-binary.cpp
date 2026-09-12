class Solution {
public:
    char sum(char a,char b){
        if(a=='0'&&b=='0'){
            return '0';
        }
        else if(a=='0'&&b=='1'){
            return '1';
        }
        else if(a=='1'&&b=='0'){
            return '1';
        }
        else{
            return '0';
        }
    }
    char carry(char a,char b){
        if(a=='1'&& b=='1'){
            return '1';
        }
        else {
            return '0';
        }
    }
    string addBinary(string a, string b) {
        string ans="";
        char c='0',s=' ';
        if(a.length()<b.length()){
            swap(a,b);
        }
        while(b.length()<a.length()){
            b='0'+b;
        }
        for(int i=a.length()-1;i>=0;i--){
            s=sum(a[i],b[i]);

            if(c=='1'){
                s=sum(s,c);
            }

            if(carry(a[i], b[i]) == '1' || (c == '1' && s == '0')) {
                c = '1';
            }
            else {
                c = '0';
            }

            ans = s + ans;
        }
        if(c == '1') {
            ans = '1' + ans;
        }
    return ans;
    }
};