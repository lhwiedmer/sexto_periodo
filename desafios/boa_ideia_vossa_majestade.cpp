#include <bits/stdc++.h>
using namespace std;

struct torre {
	int h;
	int d;//1 para oeste e 2 para leste
};

int main() {
	int n;
	cin >> n;

	vector<torre> torres(n);
	int a;
	int l = 0;
	int o = 0;
	char c;
	for (int i = 0; i < n; i++) {
		cin >> a;
		torres[i].h = a;
		cin >> c;

		if (c == 'O'){
			torres[i].d = 1;
			o++;
		}
		else{
			torres[i].d = 2;
			l++;
		}
	}
	if ((o != l) || (torres[0].d == 1)) {
		cout << "N\n";
		return 0;
	}

	stack<torre> pilha;
	pilha.push(torres[0]);

	for (int i = 1; i < n; i++) {
		if (!pilha.empty()){
			if (torres[i].h >= pilha.top().h && torres[i].d == 2) {
				cout << "N\n";
				return 0;
			}
		}
		if (torres[i].d == 2) {
			pilha.push(torres[i]);
		}
		if (torres[i].d == 1) {
			if (!pilha.empty()){
				if (torres[i].h == pilha.top().h) {
					pilha.pop();
				}
			}
		}
	}
	
	if (pilha.empty())
		cout << "S\n";
	else
		cout << "N\n";
}