#include <bits/stdc++.h>
using namespace std;
void giaithuat(){
	int n;
	cin >> n;
	vector<int>a(n);
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if (sum == n){
		cout  << 0 << endl;
	}	
	else if ( sum < n){
		cout << 1 << endl;
	}
	else {
		cout << sum - n << endl;
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
		giaithuat();
	}
    return 0;

}

