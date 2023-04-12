#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int n;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(), v.end());

    int s=0, e=n-1;
    int answer_s, answer_e;
    long long min=100000000000001;
    long long sum;
    while(s<e){
        sum=v[s]+v[e];

        if(min>abs(sum)){
            min=abs(sum);
            answer_s=v[s];
            answer_e=v[e];

            if(min==0) break;
        }

        if(sum<0) ++s;
        else --e;
    }
    cout<<answer_s  <<' '<<answer_e;
}