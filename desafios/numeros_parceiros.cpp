#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        if ((x+y) % 2 == 1)
            cout << "NAO PARCEIROS\n";
        else
            cout << "PARCEIROS\n";
    }
    return 0;
}