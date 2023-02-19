#include <iostream>
using namespace std;
typedef long long ll;

ll n, b;
ll a[5][5];
ll I[5][5];
ll tmp[5][5];

void matrix_mul(ll x[5][5], ll y[5][5]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tmp[i][j]=0;
            for(int k=0;k<n;k++){
                tmp[i][j]+=(x[i][k]*y[k][j]);
            }
            tmp[i][j]%=1000;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            x[i][j]=tmp[i][j];
        }
    }
    
}
ostream& operator<< (ostream &out, ll arr[5][5]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin>>n>>b;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        I[i][i]=1;
    }

    while(b>0){
        if(b%2==1){
            matrix_mul(I, a);
        }
        matrix_mul(a, a);
        b/=2;
    }
    cout<<I;
}