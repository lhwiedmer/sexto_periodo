#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
	cin >> s;

	vector <int> num_letras(26, 0);
	for (char c : s) {
		num_letras[c - 'A']++;
	}

	int num_impares = 0;
	string char_impar;

	for (int i = 0; i < 25; i++) {
		if (num_letras[i] % 2 == 1) {
			num_impares++;
			char_impar = i + 'A';
		}
	}

	if (s.length() % 2 == 0) {
		if (num_impares != 0) {
			cout << "NO SOLUTION\n";
			return 0;
		}
	}
	else {
		if (num_impares > 1) {
			cout << "NO SOLUTION\n";
			return 0;
		}
	}

	string primeira_metade = "";
	for (int i = 0; i < 26; i++) {
		primeira_metade += string(num_letras[i] / 2, 'A' + i);
	}

	string segunda_metade = primeira_metade;
	reverse(segunda_metade.begin(), segunda_metade.end());

	string parte_impar;
	for (int i = 0; i < num_impares; i++) {
		parte_impar += char_impar;
	}

	if (num_impares == 1)
		primeira_metade += parte_impar;

	primeira_metade += segunda_metade;

	cout << primeira_metade << '\n';
	return 0;
}