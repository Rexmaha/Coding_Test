#include <iostream>
using namespace std;
static int n;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void DFS(int num, int digit){
    if(digit==n && isPrime(num)){
        cout<<num<<"\n";
        return;
    }
    for(int i=1;i<10;i+=2){ // 짝수는 어짜피 소수 아님
        int tmp=num*10+i;

        if(isPrime(tmp)) DFS(tmp, digit+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>n;

    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}