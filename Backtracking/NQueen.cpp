#include<iostream>
#include<vector>
using namespace std;

void printBoard( vector<vector <char>>& board, int& cols, int& rows){

    for( int i = 0; i < rows; i++){
        for( int j = 0; j < cols; j++){
            cout<<board[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe( vector<vector <char>>& board, int& i, int& srcCol ){

    int row = i;
    int col = srcCol;

    // check for row
    while( col >= 0 ){
        if( board[row][col] == 'Q' ){
            return false;
        }
        col--;
    }

    // checking for upper diagonal
    
    row = i;
    col = srcCol;

    while( row >= 0 && col >= 0){
        if( board[row][col] == 'Q'){
            return false;
        }
        row--;
        col--;
    }

    // checking for lower diagonal
    row = i;
    col = srcCol;

    while( row < board.size() && col >= 0){
        if( board[row][col] == 'Q'){
            return false;
        }
        row++;
        col--;
    }

    return true;
}

void solve( vector<vector <char>>& board, int& cols, int& rows, int& srcRow, int& srcCol, int& count){

    // base case
    if( srcCol >= cols){
        count++;
        printBoard(board, cols, rows);
        return;
    }

    // 1 case
    // traversing for every row in a perticular column
    for( int i = 0; i < rows; i++){  
        if( isSafe( board, i, srcCol)){
            // placing queen
            board[i][srcCol] = 'Q';
            srcCol = srcCol + 1;
            solve( board, cols, rows, i, srcCol, count);
            srcCol = srcCol - 1;
            board[i][srcCol] = '-';
        }
    }
}

int main(){

    int n;
    cout<<"Enter the no. of Queens ->"<<endl;
    cin>>n;

    vector <vector<char>> board( n, vector<char>(n,'-'));

    int cols = board[0].size();
    int rows = board.size();
    int srcRow = 0;
    int srcCol = 0;
    int count = 0;

    solve( board, cols, rows, srcRow, srcCol, count);

    cout<<"All possible outcome of "<<n<<" Queens : "<<count<<endl;

    return 0;
}