#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if(a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }

    int n;
    while(b!=0){
        n=a%b;
        a=b;
        b=n;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int n; cin>>n;
    vector<double> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    double x; cin>>x;

    double sum=0; double cnt=0;
    for(int i=0;i<n;i++){

        if(gcd(v[i], x)==1){
            cnt++;
            sum+=v[i];
        }
    }

    cout<<sum/cnt;
}