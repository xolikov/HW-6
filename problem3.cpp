#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	vector<vector<int>> lst(a, vector<int>(b));
	for (int i = 0; i < a; i++) for (int j = 0; j < b; j++) cin >> lst[i][j];
	int t;
	cin >> t;
	while (t--) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    lst[x-1][y-1] = z;
	}
	for (vector<int> i: lst) {
	    for (int j: i) cout << j << ' ';
	    cout << endl;
	}
	return 0;
}
