#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    vector<int> resultados (12);
    resultados[0] = -a*b+c;
    resultados[1] = -a+b*c;
    resultados[2] = -a*c+b;
    resultados[3] = -a+c*b;
    resultados[4] = -b*c+a;
    resultados[5] = -b+c*a;
    resultados[6] = -b*a+c;
    resultados[7] = -b+a*c;
    resultados[8] = -c*b+a;
    resultados[9] = -c+b*a;
    resultados[10] = -c*a+b;
    resultados[11] = -c+a*b;


    int resultado = resultados[0];
    int menor_i = 0;
    for (int i = 1; i < 12; i++)
        if (resultados[i] < resultado){
            resultado = resultados[i];
            menor_i = i;
        }
    cout << resultado << '\n';
}