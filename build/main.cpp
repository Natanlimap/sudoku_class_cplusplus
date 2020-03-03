#include <iostream>
#include "../lib/sudoku.h"


int main(){
	int A[9][9];
	for(int i {0}; i < 9; i++){
		for(int j {0}; j < 9; j++){
				A[i][j] =1;
		}		
	}
	sud::sudoku B(A);
	B.printTable();
	return 0;
}