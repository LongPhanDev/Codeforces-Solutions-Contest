#include <bits/stdc++.h>
using namespace std;

void giaithuat() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	int MAX = 0;
	for(int i = 0; i < n - 1; i++){
		MAX =max(MAX,a[i]);

	}	
	cout << MAX + a[n - 1] << "\n";
  
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

