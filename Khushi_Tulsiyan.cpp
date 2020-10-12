#include<iostream>
#include<string>
using namespace std;
bool isSafe(int chess[][10] , int row , int col ,int n)
{
    //for checking at the top
	for(int i = row - 1 , j = col; i >= 0 ; i--){
		if(chess[i][j]==1){
			return false;
		}
	}
	//for checking at left diagonal 
	for(int i = row - 1 , j = col - 1; i >= 0&&j >= 0 ; i--,j--){
		if(chess[i][j]==1){
			return false;
		}
	}
	// for checking at the right diagonal 
	for(int i = row - 1 , j = col + 1; i >= 0 && j < n ; i--,j++){
		if(chess[i][j]==1){
			return false;
		}
	}
	return true;
}

void printQueen(int chess[][10] , string ans , int row ,int n){

	if(row == n){
		cout<<ans<<"."<<endl;
		return;
	}
	for(int col = 0 ; col < n ; col++){

		if(isSafe(chess, row , col , n)){
		chess[row][col] = 1;
		printQueen(chess,ans + to_string(row) + "-" +to_string(col)+ ", ",row+1,n);
		chess[row][col] = 0;
		}
	}
}

int main(){


	int n;
	cin>>n;

	int chess[10][10] = {0};

	printQueen(chess, "" ,0 , n);

}
