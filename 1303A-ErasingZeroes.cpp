#include <bits/stdc++.h>
using namespace std;
void giaithuat(){
	string s;
	cin >> s;
	int ChuDauTien = -1, ChuCuoiCung = -1;
	for(size_t i = 0; i < s.length(); i++){
		if(s[i] == '1'){
			if(ChuDauTien == -1){
				ChuDauTien = i;

			}
			ChuCuoiCung = i;
		}
	}
	if(ChuDauTien == -1){
		cout << 0 << "\n";
		return;
	}
	int CNT = 0;
	for(int i = ChuDauTien; i <= ChuCuoiCung; i++){
		if(s[i] == '0'){
			CNT++;
		}
	}
	cout << CNT << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		giaithuat();
	}
    return 0;

}
