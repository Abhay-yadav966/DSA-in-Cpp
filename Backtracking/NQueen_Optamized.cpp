#include<iostream>
#include<vector> 
#include<unordered_map>
using namespace std;

void printSolv(vector <vector<char>> board, int totalRows, int totalCols){

    for( int i = 0; i < totalRows; i++ ){
        for( int j = 0; j < totalCols; j++ ){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

}

bool isSafe(vector <vector<char>> board, int row, int srcCol, int totalRows, int totalCols, unordered_map <int, bool> rowCheck, unordered_map <int, bool>upperDiagonalCheck, unordered_map <int, bool> lowerDiagonalCheck){

    // row check
    if( rowCheck[row] == true ){
        return false;
    }

    // upper diagonal check
    if( upperDiagonalCheck[totalRows - 1 + row - srcCol] == true ){
        return false;
    }

    // lower diagonal check
    if( lowerDiagonalCheck[row + srcCol] == true ){
        return false;
    }

    return true;
}

void nQueen(vector <vector<char>> board, int totalRows, int totalCols, int& srcRow, int& srcCol, unordered_map <int, bool>& rowCheck, unordered_map <int, bool>& upperDiagonalCheck, unordered_map <int, bool>& lowerDiagonalCheck){

    // base case
    if( srcCol >= totalCols ){
        printSolv(board, totalRows, totalCols);
        return;
    }

    // 1 case
    for( int i = 0; i < totalRows; i++ ){
        if( isSafe(board, i, srcCol, totalRows, totalCols, rowCheck, upperDiagonalCheck, lowerDiagonalCheck) ){
            board[i][srcCol] = 'Q';
            rowCheck[i] = true;
            upperDiagonalCheck[totalRows - 1 + i - srcCol] = true;
            lowerDiagonalCheck[i + srcCol] = true;
            srcCol = srcCol + 1;
            nQueen(board, totalRows, totalCols, srcRow, srcCol, rowCheck, upperDiagonalCheck, lowerDiagonalCheck);
            srcCol = srcCol - 1;
            board[i][srcCol] = '.';
            rowCheck[i] = false;
            upperDiagonalCheck[totalRows - 1 + i - srcCol] = false;
            lowerDiagonalCheck[i + srcCol] = false;
        }
    }
}

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    unordered_map <int, bool> rowCheck;
    unordered_map <int, bool> upperDiagonalCheck;
    unordered_map <int, bool> lowerDiagonalCheck;

    vector <vector<char>> board (n, vector<char>(n, '-'));

    int totalRows = board.size();
    int totalCols = board[0].size();

    int srcRow = 0;
    int srcCol = 0;

    nQueen(board, totalRows, totalCols, srcRow, srcCol, rowCheck, upperDiagonalCheck, lowerDiagonalCheck);

    return 0;
}