#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;
typedef long long ll;

ll n, ddd, hh, mm, f, total_rental_period;
string rental_period_str;
string date, l_time, part, lender;
int mtoday[12]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    map<pair<string, string>, ll> rent; // <<부품명, 대여자>, 대여 시간>을 저장할 map
    map<string, ll> fine; // <이름, 벌금>을 저장할 map

    cin>>n>>rental_period_str>>f;
    ddd=stoll(rental_period_str.substr(0, 3));
    hh=stoll(rental_period_str.substr(4, 2));
    mm=stoll(rental_period_str.substr(7, 2));

    total_rental_period=(ddd*24+hh)*60+mm; // 총 대여 가능 기간 (분 단위)

    while(n--){
        cin>>date>>l_time>>part>>lender;
        ll month=stoll(date.substr(5, 2));
        ll day=stoll(date.substr(8, 2));
        ll hour=stoll(l_time.substr(0, 2));
        ll minute=stoll(l_time.substr(3, 2));

        ll rental_time=((mtoday[month-1]+day-1)*24+hour)*60+minute; // 2021-01-01 기준 지나간 분 계산

        auto p=make_pair(part, lender);
        if(rent.find(p)==rent.end()){
            rent.insert({p, rental_time}); // 대여 목록에 없는 <부품, 대여자>이면 새로 추가 (빌려감)
        }
        else{ // 대여 목록에 있는 <부품, 대여자>이면
            ll fin=(rental_time-rent[p]-total_rental_period)*f;
            if(rental_time-rent[p]>total_rental_period){ // 총 대여 가능 기간보다 더 길게 대여했다면
                if(fine.find(lender)==fine.end()) // 벌금 목록에 없는 사람이면
                    fine.insert({lender, fin}); // 새로 추가
                else // 벌금 목록에 이미 있는 사람이면
                    fine[lender]+=fin; // 기존 벌금에 가중
            }
            rent.erase(p); // 장비는 다시 반납 처리
        }
    }

    if(fine.size()==0) cout<<"-1"; // 벌금 없으면 -1 출력
    else{
        for(auto iter:fine){
            cout<<iter.first<<" "<<iter.second<<'\n'; // 벌금 있으면 출력
        }
    }
}