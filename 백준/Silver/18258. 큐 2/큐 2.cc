#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    queue<int> q;
    int n; cin>>n;

    while(n--){
        string inst;

        cin>>inst;
        if(inst == "push"){
            int num; cin>>num;
            q.push(num);
        }
        else if(inst == "pop"){
            if(q.size() == 0){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
        else if(inst == "size"){
            cout<<q.size()<<'\n';
        }
        else if(inst == "empty"){
            if(q.size() == 0){
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
        else if(inst =="front"){
            if(q.size() == 0){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
            }
        }
        else if(inst == "back"){
            if(q.size() == 0){
                cout<<"-1\n";
            }
            else{
                cout<<q.back()<<'\n';
            }
        }
    }
}