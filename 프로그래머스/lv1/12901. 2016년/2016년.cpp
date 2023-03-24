#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string day[7]={"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int mon[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int passed=-1;
    
    for(int i=0;i<a-1;i++) passed+=mon[i];
    
    return day[(passed+b)%7];
}