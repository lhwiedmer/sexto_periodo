#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end());

    int max = n/2;
    int temp_max = v[max] - v[max-1];
    cout << max << " " << temp_max;
    return 0;
}