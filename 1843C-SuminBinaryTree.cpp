#include <bits/stdc++.h>
using namespace std;
long long TinhToan(long long n){
	long long sum = 0;
	while( n > 0){
		sum += n;
		n = (n - 1)/ 2;
	}

	return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
		long long n;
		cin >> n;
		cout << TinhToan(n) << "\n"; 
	}
    return 0;

}

