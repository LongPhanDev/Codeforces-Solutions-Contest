#include <bits/stdc++.h>
using namespace std;
void giaithuat(){
	int n,m;
	cin >> n >> m;
	if( n < m || (n - m) % 2 != 0){
		cout <<"No\n";
	}
	else {
		cout <<"Yes\n";
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

