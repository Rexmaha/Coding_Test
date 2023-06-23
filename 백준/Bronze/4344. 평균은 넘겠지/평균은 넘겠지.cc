#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin>>c;

    while(c--){
        double n, sum=0;
        scanf("%lf", &n);
        vector<double> v(n);

        for(int i=0;i<n;i++){
            scanf("%lf", &v[i]);
            sum+=v[i];
        }

        double avg=sum/n;
        double cnt=0;
        for(int i=0;i<n;i++){
            if(avg<v[i]) cnt++;
        }

        double res=cnt/n*100*1000;
        res=round(res);
        res/=1000;

        printf("%.3lf%\n", res);
    }
}