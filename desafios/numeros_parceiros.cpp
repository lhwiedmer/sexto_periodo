#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x, y;
        cin >> x >> y;

        char ult_x = x.back();
        char ult_y = y.back();


        if ((ult_y+ult_x) % 2 == 0)
            cout << "PARCEIROS\n";
        else
            cout << "NAO PARCEIROS\n";
    }
    return 0;
}