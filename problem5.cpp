#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, e, d;
	cin >> a >> b >> c >> e >> d;
	int ans = 0;
	for (int i = 1; i <= d; i++) if (i % a == 0 || i % b == 0 || i % c == 0 || i % e == 0) ans++;
	cout << ans;
	return 0;
}
