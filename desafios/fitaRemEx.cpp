#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;

    list<unsigned long> fita;

    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == 'm') {
            //move a cabeça de leitura, direita negativo, esquerda positivo
            int d;
            cin >> d;
               
        }
        else if (c == 'i'){
            //adiciona q posicoes com o numero t
            int q;
            unsigned long t;
            cin >> q >> t;
        }
        else if (c == 'd'){
            //corta a posição atual
        }
        else if (c == 'q') {
            //imprime a posicao atual
        }
    }   
}