#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    if(a>b){
        long long tmp=a;
        a=b;
        b=tmp;
    }
    long long sum=0;
    for(int i=a;i<=b;i++) sum+=i;
    return sum;
}