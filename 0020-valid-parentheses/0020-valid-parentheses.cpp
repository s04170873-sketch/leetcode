class Solution {
public:
    char getClosing(char ch){
        if(ch=='(') return ')';
        if(ch=='{') return '}';
        if(ch=='[') return ']';
        return '\0';
    }
    bool isValid(string s) {
        stack<char> st;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(getClosing(ch));
            }
            else{
                if(st.empty() || st.top()!=ch) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};