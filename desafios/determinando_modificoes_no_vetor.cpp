#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

	vector<unsigned long long> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	unsigned long long movimentos = 0;
	for (int i = 1; i < n; i++) {
		if (v[i] < v [i-1]) {
			movimentos += (v[i-1] - v[i]);
			v[i] = v[i-1];
		}
	}

	cout << movimentos << '\n';
	return 0;
}