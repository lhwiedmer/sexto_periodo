#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

	int res = 0;
    for (int x = 1; x <= n; ++x) {
        for (int y = x; y <= n; ++y) {
            int z = n - x - y;
            if (y <= z && z <= n) {
                res++;
            }
        }
    }
	cout << res << "\n";
}