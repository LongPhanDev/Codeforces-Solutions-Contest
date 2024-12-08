#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void giaithuat() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char, int> timeSpent;

    for (int i = 0; i < n; i++) {
        char problem = s[i];
        int timeRequired = problem - 'A' + 1;
        timeSpent[problem] += timeRequired;
    }

    int solvedCount = 0;
    for (auto& entry : timeSpent) {
        char problem = entry.first;
        int totalTimeSpent = entry.second;
        int timeToSolve = problem - 'A' + 1;
        if (totalTimeSpent >= timeToSolve) {
            solvedCount++;
        }
    }
    cout << solvedCount << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        giaithuat();
    }

    return 0;
}

