#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> fila;//FiFo
    stack <int> pilha;//LiFo
    priority_queue <int> prio_fila;//prioridade

    int n, tipo, e;
    bool ehFila = true;
    bool ehPilha = true;
    bool ehPrio = true;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tipo >> e;
        if (tipo == 0) {
            fila.push(e);
            pilha.push(e);
            prio_fila.push(e);
        }
        else{
            if (fila.front() != e)
                ehFila = false;
            if (pilha.top() != e)
                ehPilha = false;
            if (prio_fila.top() != e)
                ehPrio = false;
            fila.pop();
            pilha.pop();
            prio_fila.pop();
        }
    }

    if ((!ehFila) && (!ehPilha) && (!ehPrio)) {
        cout << "unknown" << '\n';
        return 0;
    }
    if ((!ehFila) && (!ehPilha)) {
        cout << "priority" << '\n';
        return 0;
    }
    if ((!ehFila) && (!ehPrio)) {
        cout << "lifo" << '\n';
        return 0;
    }
    if ((!ehPilha) && (!ehPrio)) {
        cout << "fifo" << '\n';
        return 0;
    }
    cout << "ambiguous" << '\n';
    return 0;
}