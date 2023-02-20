#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int n;
int cnt[8001];
vector<int> v;

int avg() {
	double sum = 0;
	for (int i = 0;i < n;i++) sum += v[i];
	return round((double)sum / n);
}

int mid() {
	return v[n / 2];
}

int mode(int mc) {
	bool flag = false;
	int res;

	for (int i = 0;i < 8001;i++) {
		if (mc == cnt[i]) {
			res = (i - 4000);
			if (flag) break;
			flag = true;
		}
	}
	return res;
}

int range() {
	return (v[n - 1] - v[0]);
}

int main() {
	scanf("%d", &n);

	int tmp; int maxcnt = 0;
	for (int i = 0;i < n;i++) {
		scanf("%d", &tmp);
		v.push_back(tmp);
		cnt[tmp + 4000]++;
		if (cnt[tmp + 4000] > maxcnt) maxcnt = cnt[tmp + 4000];
	}
	sort(v.begin(), v.end());

	printf("%d\n%d\n%d\n%d", avg(), mid(), mode(maxcnt), range());
}