#include<bits/stdc++.h>
using namespace std;
int tinh(int a, int b, char c){
    if(c=='*')  return a*b;
    if(c=='+')  return a+b;
    if(c=='-')  return a-b;
    if(c=='/')  return a/b;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        stack<int> st;
        for(int i=s.size()-1; i>=0; i--){
            if(isdigit(s[i])){
                int n = s[i] - '0';
                st.push(n);
            }
            else{
                int fi = st.top(); st.pop();
                int se = st.top(); st.pop();
                int x = tinh(fi, se, s[i]);
                st.push(x);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}