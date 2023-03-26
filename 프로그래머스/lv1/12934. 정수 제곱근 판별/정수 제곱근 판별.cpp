#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
    long long num=sqrt(n);
    if(num*num==n) return (sqrt(n)+1)*(sqrt(n)+1);
    else return -1;
}