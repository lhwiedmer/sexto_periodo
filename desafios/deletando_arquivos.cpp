#include <bits/stdc++.h>
using namespace std;


int formatoPrioridade(string f) {
	if (f == "TMP")
		return 0;
	else if (f == "OGG")
		return 1;
	else if (f == "CPP")
		return 2;
}


struct Arq {
	long long ut;
	int prioF;
	long long tam;


	bool operator<(const Arq& outro) const {
        if (ut != outro.ut)
            return ut < outro.ut;
        if (prioF != outro.prioF)
            return prioF < outro.prioF;
        return tam > outro.tam;
	}
};

int main() {
    int n, k;
	cin >> n >> k;

	vector<Arq> arquivos(n);

	long long ut, tam;
	string form;
	for (int i = 0; i < n; i++) {
		cin >> ut >> form >> tam;
		arquivos[i].ut = ut;
		arquivos[i].prioF = formatoPrioridade(form);
		arquivos[i].tam = tam;
	}

	sort(arquivos.begin(), arquivos.end());

	long long r = 0;

	for (int i = 0; i < k; i++) {
		r += arquivos[i].tam;
	}

	cout << r << '\n';

	return 0;
}