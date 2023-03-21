#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n; cin>>n;
    vector<ll> vl(n);
    for(int i=0;i<n;i++) cin>>vl[i];
    sort(vl.begin(), vl.end());

    int res=0;
    for(int k=0;k<n;k++){
        ll current_number=vl[k]; // '좋은 수'인지 판별할 수
        int s=0, e=n-1; // 투 포인터

        while(1){
            if(s>=e) break;

            if(vl[s]+vl[e]<current_number) ++s; // '좋은 수'보다 작으면 왼쪽 포인터 이동
            else if(vl[s]+vl[e]>current_number) --e; // '좋은 수'보다 크면 오른쪽 포인터 이동
            else{ // '좋은 수'와 같다면
                if(s!=k && e!=k){ // 두 포인터가 '좋은 수'까지 가지 않은 경우 정답
                    ++res;
                    break;
                }
                else if(s==k) ++s;
                else if(e==k) --e;
            }
        }
    }
    cout<<res;
}