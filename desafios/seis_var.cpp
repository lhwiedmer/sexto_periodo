
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    unordered_map<int, int> map;

    for (int a : v) {
        for (int b : v) {
            for (int c : v) {
                for (int d : v) {
                    if (d != 0) {
                        int numerator = a * b + c;
                        if (numerator % d == 0) {
                            int result = numerator / d;
                            map[result]++;
                        }
                    }
                }
            }
        }
    }

    int count = 0;

    for (int e : v) {
        for (int f : v) {
            int rhs = f + e;
            if (map.find(rhs) != map.end()) {
                count += map[rhs];
            }
        }
    }

    cout << count << "\n";

    return 0;
}
