#include <bits/stdc++.h>
using namespace std;
int testCase;

int main(){
    cin>>testCase;

    for(int testIdx=1;testIdx<=testCase;testIdx++){
        cout<<"#"<<testIdx<<'\n';
        int n; cin>>n;
        int rem = 10;

        for(int i=0;i<n;i++){
            char c; int k;
            cin>>c>>k;

            if(k>=10){
                for(int j=0;j<rem;j++){
                    cout<<c;
                }
                cout<<'\n';
                
                if(k-rem>=10){
                    for(int j=0;j<10;j++){
                        cout<<c;
                    }
                    cout<<'\n';
                    for(int j=0;j<k-rem-10;j++){
                        cout<<c;
                    }

                    rem = 20-(k-rem);
                }
                else{
                    for(int j=0;j<k-rem;j++){
                        cout<<c;
                    }
                    rem = 10-(k-rem);
                }

            }
            else{
                if(rem-k<=0){
                    for(int j=0;j<rem;j++){
                        cout<<c;
                    }
                    cout<<'\n';
                    for(int j=0;j<k-rem;j++){
                        cout<<c;
                    }

                    rem = 10-(k-rem);
                }
                else{
                    for(int j=0;j<k;j++){
                        cout<<c;
                    }

                    rem-=k;
                }
            }
        }
        cout<<'\n';
    }
}