#include <bits/stdc++.h>
using namespace std;

void giaithuat() {
    string viTri;
    cin >> viTri;

    char Cot = viTri[0];
    char Hang = viTri[1];
    string Moves[14];
    int index = 0;

     for (char r = '1'; r <= '8'; r++) {
        if (r != Hang) {
            Moves[index++] = string(1, Cot) + r;
        }
    }

    for (char c = 'a'; c <= 'h'; c++) {
        if (c != Cot) {
            Moves[index++] = string(1, c) + Hang;
        }
    }
    for (int i = 0; i < index; i++) {
        cout << Moves[i];
        if (i != index - 1) cout << " "; 
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        giaithuat();
    }

    return 0;
}

