#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[501];

int get_first(int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] > x) {
			return i;
		}
	}
	return -1;
}

void test_case(int& tc) {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ops = 0;
	while (!is_sorted(a, a + n)) {
		int index = get_first(n, x);
		if (index < 0) {
			break;
		}
		swap(a[index], x);
		ops++;
	}
	cout << (is_sorted(a, a + n) ? ops : -1) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
