#include <bits/stdc++.h>
using namespace std;

void giaithuat() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<bool> DaNgoi(n + 1, false);    
    for (int i = 0; i < n; i++) {
        int Ghe = a[i];
        bool HopLe = false;

        if (Ghe > 1 && DaNgoi[Ghe - 1]) {
            HopLe = true;
        }
        if (Ghe < n && DaNgoi[Ghe + 1]) {
            HopLe = true;
        }
        if (i > 0 && !HopLe) {
            cout << "NO" << "\n";
            return;
        }
        
        DaNgoi[Ghe] = true;   
    }    
    cout << "YES" << "\n";
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

