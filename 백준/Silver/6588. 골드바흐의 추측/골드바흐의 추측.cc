#include <iostream>
#include <math.h>
using namespace std;
int n;
int primeCheck[1000001];

bool isPrime(int k){
    if(primeCheck[k]==1) return true;
    else if(primeCheck[k]==2) return false;
    else{
        for (int i = 2; i <= sqrt(k); i++){
            if(k%i==0) {
                primeCheck[k]=2;
                return false;
            }
        }
        primeCheck[k]=1;
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while(1){
        bool isfound=false;
        cin>>n; if(n==0) return 0;
        for(int i=3;i<=n/2;i+=2){
            if(isPrime(i) && isPrime(n-i)){
                cout<<n<<" = "<<i<<" + "<<n-i<<"\n";
                isfound=true;
                break;
            }
        }
        if(!isfound) cout<<"Goldbach's conjecture is wrong\n";
    }
}