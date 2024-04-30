#include<iostream>
#include<vector>
using namespace std;

bool isSafe( vector <vector<char>>& board, char value, int i, int j){

    // checking for row
    for( int col = 0; col < board[0].size(); col++){
        if( board[i][col] == value){
            return false;
        }
    }

    // checking for col
    for( int row = 0; row < board.size(); row++){
        if( board[row][j] == value){
            return false;
        }
    }

    // checking for 3*3
    for( int k = 0; k < board.size(); k++){
        if( board[ 3*(i/3) + k/3][ 3*(j/3) + k%3] == value){
            return false;
        }
    }

    return true;
}

bool solve( vector <vector<char>>& board){

    // 1 case
    for( int i = 0; i < board.size(); i++){
        for( int j = 0; j < board[0].size(); j++){

            // checking for that location is empty or not
            if( board[i][j] == '.'){
                // trying to putting value from 1 to 9
                for( char value = '1'; value <= '9'; value++){
                    if( isSafe( board, value, i, j) ){
                        // inserting that value at that position
                        board[i][j] = value;
                        // calling for next block
                        bool aageKaSolution = solve( board);
                        
                        if( aageKaSolution){
                            return true;
                        }

                        // backtracking
                        board[i][j] = '.';
                    }
                }

                // returning false after trying to insert evert problem
                return false;
            }
        }
    }

    return true;
}

int main(){

    vector <vector<char>> board = {
                                    {'5','3','.','.','7','.','.','.','.'},
                                    {'6','.','.','1','9','5','.','.','.'},
                                    {'.','9','8','.','.','.','.','6','.'},
                                    {'8','.','.','.','6','.','.','.','3'},
                                    {'4','.','.','8','.','3','.','.','1'},
                                    {'7','.','.','.','2','.','.','.','6'},
                                    {'.','6','.','.','.','.','2','8','.'},
                                    {'.','.','.','4','1','9','.','.','5'},
                                    {'.','.','.','.','8','.','.','7','9'},
    };

    solve( board);

    for( int i = 0; i < board.size(); i++){
        for( int j = 0; j < board[0].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}