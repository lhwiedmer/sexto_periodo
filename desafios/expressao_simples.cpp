#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    vector<int> resultados (12);
    resultados[0] = a + b + c;
    resultados[1] = a + b - c;
    resultados[2] = a + b * c; 
    resultados[3] = a - b + c; 
    resultados[4] = a - b - c; 
    resultados[5] = a - b * c; 
    resultados[6] = a * b + c; 
    resultados[7] = a * b - c; 
    resultados[8] = a * b * c; 



    int resultado = resultados[0];
    int menor_i = 0;
    for (int i = 1; i < 12; i++)
        if (resultados[i] < resultado){
            resultado = resultados[i];
        }
    cout << resultado << '\n';
}