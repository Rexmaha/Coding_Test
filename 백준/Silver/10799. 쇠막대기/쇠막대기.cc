#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    stack<char> st;

    string paren; cin>>paren;

    int res = 0;
    for(int i=0;i<paren.size();i++){
        if(paren[i] == '('){
            st.push('(');
        }
        else{
            if(paren[i-1] == '('){
                st.pop();
                res+=st.size();
            }
            else{
                st.pop();
                res+=1;
            }
        }
    }

    cout<<res;
}