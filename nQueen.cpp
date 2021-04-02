#include<bits/stdc++.h>
using namespace std;

bool isItSafeToPlace(bool board[4][4],int row,int column){
    
    //vertical up
    int r=row-1;
    int c=column;
    while(r>=0){
        if(board[r][c]){
        return false;
        }
        r--;
    }


    //horizontal left
         r=row;
     c=column-1;
    while(c>=0){
        if(board[r][c]){
        return false;
        }
        c--;
    }

    //diagonal left
         r=row-1;
     c=column-1;
    while(r>=0&& c>=0){
        if(board[r][c]){
        return false;
        }
        r--;
        c--;
    }

    //diagonal right
        r=row- 1;
     c=column+1;
    while(r>=0&& c<4 ){
        if(board[r][c]){
        return false;
        }
        r--;
        c++;
    }
    return true;
}

void nQueen(bool board[4][4],int row,int column,int tq, int qpsf,string ans){
    if(3==qpsf){
        cout<<ans<<endl;
        return;

    }
    if(column==4){
        row++;
        column=0;
    }
    if(row==4){
        return;
    }
    if(isItSafeToPlace(board,row,column)){
        board[row][column]=true;
       
      

        nQueen(board, row, column+1, tq,  qpsf+1,ans+"["+ to_string(row)+ "-"+to_string(column)+"]" );
        
        board[row][column]=false;
        
    }else{
        nQueen(board, row, column+1, tq,  qpsf,ans );

    }       

}

int main(){
    bool board[4][4]={{false,false,false,false},{false,false,false,false},{false,false,false,false},{false,false,false,false}};
    nQueen(board, 0, 0, 4,  0, "");
    return 0;
}