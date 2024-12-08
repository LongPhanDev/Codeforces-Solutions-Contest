#include <bits/stdc++.h>

using namespace std;

void giaithuat(int n, string s) {
    int bd = -1, kt = -1; 
	for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            if (bd == -1) bd = i;
			kt = i;
		}
    }
    cout << (kt - bd + 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s; 
		giaithuat(n, s);    }

    return 0;
}
