#include <bits/stdc++.h>
using namespace std;

void giaithuat() {
    int n;
    string s;
    cin >> n >> s;

    string Example = "meow";
    int j = 0;     
    for (char c : s) {
        c = tolower(c);
		if (j < 4 && c == Example[j]) {
  
			j++;
        } else if (j == 0 || c != Example[j - 1]) {
            cout << "NO\n";
            return;
        }
    }
    if (j == 4) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
	while (T--) {
        giaithuat();
    }

    return 0;
}

