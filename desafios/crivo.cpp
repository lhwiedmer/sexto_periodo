#include <bits/stdc++.h>
using namespace std;

bool ehDiv(unsigned long long a, unsigned long long b) {
    if (a % b == 0) 
        return true;
    return false;
}

int main() {
    unsigned long long a, b;
    int n;
    cin >> a >> b >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unsigned long long res = b - a + 1;
    for (unsigned long long i = a; i <= b; i++) {
        for (int j = 0; j < n; j++) {
            if (ehDiv(i, v[j])) {
                res--;
                break;
            }
        }
    }
    cout << res << "\n";
}