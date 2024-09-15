#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n, q;
    cin >> n >> q;
    string texto;
    cin >> texto;
    int tipo, x, num_rot;
    num_rot = 0;
    for (int i = 0; i < q; i++) {
        cin >> tipo >> x;
        if (tipo == 1) {
            num_rot = (num_rot + x) % n;
        }
        if (tipo == 2) {
            cout << texto[(x - 1 - num_rot + n) % n] << '\n';
        }
    }
}