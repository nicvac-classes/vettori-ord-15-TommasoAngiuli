#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int i, n, j, t;
    string tempN;
    bool scambio;

    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n < 0);
    string nomi[n];
    int p[n];

    for (i = 0; i <= n - 1; i++) {
        cout << "inserisci il nome della " << i + 1 << "° vettura" << endl;
        cin >> nomi[i];
        p[i] = rand() % (n + 1);
    }
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (p[j] > p[j + 1]) {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
                scambio = true;
                tempN = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = tempN;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "La vettura " << nomi[i] << " è arrivata " << p[i] << "°" << endl;
    }
}