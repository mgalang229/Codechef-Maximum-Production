#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int d, x, y, z;
		cin >> d >> x >> y >> z;
		// find the maximum value between using 'x' units of work or the combination
		// of 'y' and 'z' units of work
		cout << max(7 * x, (d * y) + ((7 - d) * z)) << '\n';
	}
	return 0;
}
