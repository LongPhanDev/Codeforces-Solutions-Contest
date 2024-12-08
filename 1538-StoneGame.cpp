#include <bits/stdc++.h>
using namespace std;

void giaithuat() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int Max_Value = INT_MIN, Min_Value = INT_MAX;
    int Max_Index = -1, Min_Index = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] > Max_Value) {
            Max_Value = a[i];
            Max_Index = i;
        }
        if (a[i] < Min_Value) {
            Min_Value = a[i];
            Min_Index = i;
        }
    }

    if (Min_Index > Max_Index) {
        swap(Min_Index, Max_Index);
    }

    int left_to_right = Max_Index + 1;                     
    int right_to_left = n - Min_Index;                   
    int split = Min_Index + 1 + (n - Max_Index);
    int result = min({left_to_right, right_to_left, split});
    cout << result << endl;
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
