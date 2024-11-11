#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    while (a--) {
        int ans = 0;
        for (int i = 0; i < b; i++) {
            int tmp;
            cin >> tmp;
            ans += tmp;
        }
        cout << ans << endl;
    }
}
