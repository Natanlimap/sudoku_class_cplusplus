#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
	namespace sud
	{	
		class sudoku
		{
			private:
				int V[9][9];
			public:

				//
				sudoku(int **clientData);
				~sudoku();
		};
	}
	

#endif
