#include<iostream>
#include<vector>

using namespace std;

bool issafe(vector<vector<char>>&board,int row ,int col,int digit){
//horizontal

for(int i=0;i<9;i++){
    if(board[row][i]==digit){
        return false;
    }
}
//vertical
for(int i=0;i<9;i++){
    if(board[i][col]==digit){
        return false;
    }
}
//grid 

int srow = (row/3)*3;
int scol = (col/3)*3;

for(int i= srow;i<=srow+2;i++){
    for(int j= scol;j<=scol+2;j++){
        if(board[i][j]==digit){
            return false;
        }
    }
}

return true;

}

bool suduko(vector<vector<char>>&board,int row ,int col){
    if(row==9){
        return true;
    }
    int nextrow=row;
    int nextcol =col+1;
    if(nextcol==9){
        nextrow=row+1;
        nextcol=0;
    }

    if(board[row][col]!='.'){
        return suduko(board,nextrow,nextcol);
    }

    //place the digit
    for(char dig ='1';dig<='9';dig++){
        if(issafe(board,row,col,dig)){
          board[row][col]=dig;
          if(suduko(board,nextrow,nextcol)){
            return true;
          }
          board[row][col]='.';
        }
    }
    return false;
}

int main(){
  vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};

if( suduko(board,0,0)){
  cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}