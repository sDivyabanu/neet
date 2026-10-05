class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string s : tokens){
            if(s == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int sum = a+b;
                st.push(sum);
            }
            else if(s == "-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int dif = b-a;
                st.push(dif);
            }
            else if(s == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int pr = a*b;
                st.push(pr);
            }
            else if(s == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int di = b/a;
                st.push(di);
            }
            else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
