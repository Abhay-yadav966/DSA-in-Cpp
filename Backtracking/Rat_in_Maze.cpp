#include<iostream>
#include<vector>
using namespace std;

void solveMaze( vector< vector<int>>& maze, int& row, int& col, int& srcRow, int& srcCol, vector <vector<int>>& visited, vector<string>& ans, string& output){

    // base case
    if( srcRow == row - 1 && srcCol == col - 1){
        cout<<output<<endl;
        ans.push_back(output);
        return;
    }

    // down
    if( visited[srcRow + 1][srcCol] == 0 && srcRow + 1 < row && maze[srcRow + 1][srcCol] == 1 ){
        output.push_back('D');
        visited[srcRow + 1][srcCol] = 1;
        srcRow = srcRow + 1;
        solveMaze( maze, row, col, srcRow, srcCol, visited, ans, output);
        srcRow = srcRow - 1;
        visited[srcRow + 1][srcCol] = 0;
        output.pop_back();
    }

    // left
    if( visited[srcRow][srcCol - 1] == 0 && srcCol - 1 >= 0 && maze[srcRow][srcCol - 1] == 1 ){
        output.push_back('L');
        visited[srcRow][srcCol - 1] = 1;
        srcCol = srcCol - 1;
        solveMaze( maze, row, col, srcRow, srcCol, visited, ans, output);
        srcCol = srcCol + 1;
        visited[srcRow][srcCol - 1] = 0;
        output.pop_back();
    }

    // right
    if( visited[srcRow][srcCol + 1] == 0 && srcCol + 1 < col && maze[srcRow][srcCol + 1] == 1){
        output.push_back('R');
        visited[srcRow][srcCol + 1] = 1;
        srcCol = srcCol + 1;
        solveMaze( maze, row, col, srcRow, srcCol, visited, ans, output);
        srcCol = srcCol - 1;
        visited[srcRow][srcCol + 1] = 0;
        output.pop_back();
    }

    // upper
    if( visited[srcRow - 1][srcCol] == 0 && srcRow - 1 >= 0 && maze[srcRow - 1][srcCol] == 1){
        output.push_back('U');
        visited[srcRow - 1][srcCol] = 1;
        srcRow = srcRow - 1;
        solveMaze( maze, row, col, srcRow, srcCol, visited, ans, output);
        srcRow = srcRow + 1;
        visited[srcRow - 1][srcCol] = 0;
        output.pop_back();
    }
}

int main(){

    vector <vector <int>> maze = { { 1, 0, 0}, 
                                  { 1, 1, 0}, 
                                  { 1, 1, 1}
                                };

    vector < vector <int>> visited = { { 1, 0, 0},
                                       { 0, 0, 0},
                                       { 0, 0, 0}
                                    };

    vector<string> ans;
    string output = "";

    int row = maze.size();
    int col = maze[0].size();
    int srcRow = 0;
    int srcCol = 0;
    solveMaze( maze, row, col, srcRow, srcCol, visited, ans, output);

    // printing ans
    for(auto i:ans){
        cout<<i<<endl;
    }

    return 0;
}