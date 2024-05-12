#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		int max = -1;
		int tmp;
		for (int i = 0; i < 10; i++) {
			cin >> tmp;
			if (max < tmp) max = tmp;
		}

		cout << "#" << test_case << " " << max << "\n";
	}

	return 0;
}