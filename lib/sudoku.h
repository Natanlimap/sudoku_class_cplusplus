#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
	namespace sud
	{	
		class sudoku
		{
			private:
				int V[9][9];
				int emptySpace;
			public:

				//
				sudoku();
				sudoku(int otherTable[9][9]);
				~sudoku();
				bool isComplete();
				bool vefValido();
				void printTable();
			
		};
	}
	

#endif
