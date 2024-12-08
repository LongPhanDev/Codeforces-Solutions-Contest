#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void giaithuat(){
	string s;
	cin >> s;
	//00:00 -> 11:59 (AM)
	//12:00 -> 23:59 (PM)
	int hh = stoi(s.substr(0,2));
	int mm = stoi(s.substr(3,2));
	
	string tgian;
	int gio12;
    if (hh == 0) { 
		gio12 = 12;
        tgian = "AM";
    } else if (hh < 12) { 
		gio12 = hh;
        tgian = "AM";
    } else if (hh == 12) {
		gio12 = 12;
        tgian = "PM";
    } else {  
		gio12 = hh - 12;
        tgian = "PM";
    }
	if(gio12 < 10) cout << "0";
	cout << gio12 << ":";
	if(mm < 10) cout << "0";
	cout << mm << " " << tgian << endl;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--){
		giaithuat();
	}
    return 0;
}

