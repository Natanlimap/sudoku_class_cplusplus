#include <iostream>
#include "../lib/sudoku.h"


int main(){
	short A[1][9][9] = {
		{
			{5 ,3 ,0 ,0 ,7 ,0 ,0 ,0 ,0 },
	  		{6 ,0 ,0, 1 ,9 ,5 ,0 ,0 ,0 },
			{0 ,9 ,8 ,0 ,0 ,0 ,0 ,6 ,0 },
			{8 ,0 ,0 ,0 ,6 ,0 ,0 ,0 ,3 },
			{4 ,0 ,0 ,8 ,0 ,3 ,0 ,0 ,1 },
			{7 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,6 },
			{0 ,6 ,0 ,0 ,0 ,0 ,2 ,8 ,0 },
			{0 ,0 ,0 ,4 ,1 ,9 ,0 ,0 ,5 },
			{0 ,0 ,0 ,0 ,8 ,0 ,0 ,7 ,9 },
		}
	};
	sud::sudoku B(A[0]);
	B.printTable();
	if(B.checkValid())
		std::cout<<"valid" << std::endl;
	return 0;
}