#include <bits/stdc++.h>
using namespace std;

int solveMin(vector<vector<char>> field) {
    int rows = field.size();
    int columns = field[0].size();
    int min_moves = INT_MAX;
    
    // Iterate over all rows to find the minimum number of moves
    for (int i = 0; i < rows; ++i) {
        int cur_row = i;
        int cur_col = 0;
        int moves = 0;
        
        // Move right until blocked or the end of the row
        while (cur_col < columns && field[cur_row][cur_col] == '.') {
            moves++;
            cur_col++;
        }
        
        // Move down until blocked or the end of the column
        if (cur_col < columns) {
            while (cur_row < rows && field[cur_row][cur_col] == '.') {
                moves++;
                cur_row++;
            }
        }
        
        // Keep track of the minimum moves required
        min_moves = min(min_moves, moves);
    }
    
    return min_moves;
}



int main() {
    vector<vector<char>> field1 = {{'.', '#', '#'}, 
                                   {'#', '.', '.'}, 
                                   {'.', '.', '.'}};
                                   
    vector<vector<char>> field2 = {{'.', '#', '#'}, 
                                   {'.', '.', '#'},
                                   {'.', '.', '.'}};
                                   
    int result1 = solveMin(field1);
    cout << result1 << endl; // Output: [4, 4]
    
    int result2 = solveMin(field2);
    cout << result2<< endl; // Output: [3, 6]

    return 0;
}
