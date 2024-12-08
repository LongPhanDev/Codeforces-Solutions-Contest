#include <iostream>
#include <vector>
using namespace std;

bool checkDiagonals(const vector<vector<char>>& board, int r, int c) {
    for (int dr = -1; dr <= 1; dr += 2) {
        for (int dc = -1; dc <= 1; dc += 2) {
            int nr = r, nc = c;
            while (nr >= 0 && nr < 8 && nc >= 0 && nc < 8) {
                if (board[nr][nc] == '.' && (nr != r || nc != c)) {
                    return false; 
                }
                nr += dr;
                nc += dc;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<char>> board(8, vector<char>(8));
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> board[i][j];
            }
        }
        
        bool found = false;
        for (int r = 1; r < 7; ++r) {
            for (int c = 1; c < 7; ++c) {
                if (board[r][c] == '#') { 
                    if (checkDiagonals(board, r, c)) {
                        cout << r + 1 << " " << c + 1 << endl; 
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }
        if (t) {
            cin.ignore();
        }
    }

    return 0;
}

