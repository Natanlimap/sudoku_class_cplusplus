#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
#include <map>
#include <vector>
	namespace sud
	{	
		class sudoku
		{
			private:
				short table[9][9];
				short emptySpace;
				std::map<short, short> validMap;
				std::vector<short> myLine;
			public:

				//
				sudoku();
				sudoku(const short otherTable[9][9]);
				~sudoku();
				void resetMap();
				bool isComplete();
				bool vefValido();
				void printTable();
				bool checkValid();
				bool checkLine(short i);
				bool checkColumn(short i);
				bool checkQuadrant(short i);
			
		};
	}
	

#endif
