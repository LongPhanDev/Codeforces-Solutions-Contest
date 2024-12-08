#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void giaithuat(){
    int a,b,c;
    cin >> a >> b >> c;
    int A[] = {a, b, c};
    sort(A,A + 3);
    int Achieved = A[1];
    // 2  3 5
    // Achieved  = 3 
    // f[3] = |3 -2| + | 3 -3| + |3 -5|
    int kq = abs(Achieved - A[0]) + abs(Achieved - A[1]) + abs(Achieved - A[2]);
    cout << kq << "\n";
}    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        giaithuat();
    }
    return 0;
}
