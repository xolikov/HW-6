#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	vector<vector<double>> lst(a, vector<double>(b));
	for (int i = 0; i < a; i++) for (int j = 0; j < b; j++) cin >> lst[i][j];
	vector<double> r(a, 0), c(b, 0);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			r[i] += lst[i][j] / b;
			c[j] += lst[i][j] / a;
		}
	}
	double mn_r = *min_element(r.begin(), r.end()), mx_r = *max_element(r.begin(), r.end()), mn_c = *min_element(c.begin(), c.end()), mx_c = *max_element(c.begin(), c.end());
	if (mn_r == mx_r && mn_c == mx_c && mn_c == mn_r) cout << "YES";
	else cout << "NO";
	return 0;
}
