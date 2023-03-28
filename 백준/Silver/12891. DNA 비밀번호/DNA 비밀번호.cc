#include <iostream>
#include <string>
using namespace std;
int s, p, a, c, t, g, res;
int acgt[4];
string dna;

void check(){
    if(acgt[0]>=a && acgt[1]>=c && acgt[2]>=g && acgt[3]>=t) ++res;
}

void add(char ch){
    switch (ch)
    {
    case 'A':
        acgt[0]++;
        break;
    case 'C':
        acgt[1]++;
        break;
    case 'G':
        acgt[2]++;
        break;
    case 'T':
        acgt[3]++;
        break;
    }
}

void remove(char ch){
    switch (ch)
    {
    case 'A':
        acgt[0]--;
        break;
    case 'C':
        acgt[1]--;
        break;
    case 'G':
        acgt[2]--;
        break;
    case 'T':
        acgt[3]--;
        break;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin>>s>>p>>dna>>a>>c>>g>>t;

    for(int i=0;i<p;i++) add(dna[i]);
    check();

    // sliding window
    for(int i=p;i<s;i++){
        int j=i-p;
        add(dna[i]); // window의 끝 문자 개수 증가
        remove(dna[j]); // 이전 window의 시작 문자 개수 감소
        check();
    }

    cout<<res;
}