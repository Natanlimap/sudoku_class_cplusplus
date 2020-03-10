#include <iostream>
#include "../lib/sudoku.h"

	namespace sud{

		sudoku::sudoku(){ // initial constructor
			for(short i {0}; i < 9; i++){ //walks in all table positions and put 0
				for(short j {0}; j < 9; j++){
					table[i][j] = short(); 
				}		
			}
			emptySpace = 81; //the all spaces are with 0
		};
		sudoku::~sudoku(){ //destructor
		
		};

		sudoku::sudoku(const short otherTable[9][9]){
			if(otherTable){
				for(short i {0}; i < 9; i++){ 
					for(short j {0}; j < 9; j++){
						table[i][j] = otherTable[i][j];
						if(table[i][j] != 0){ //if isnt 0, the table[i][j] isnt a empty space
							--emptySpace; //so decreases the empty spaces counter
						}
					}		
			}
			}
		};

		 void sudoku::printTable() {
			for(short i {0}; i < 9; i++){ //walks through the table and prshort all positions
				for(short j {0}; j < 9; j++){
					std::cout << table[i][j] << " "; //prshort each number
				}
				std::cout << std::endl;	//jump line
			}
		}
		 bool sudoku::isComplete() { //check if the table is complete
				if(emptySpace == 0){ //if empty space = 0 is because the client parsed just valid numbers
					return true;	
				}else{
					return false;
				}
		}
		 bool sudoku::checkValid(){ //check if the table is valid
			for(short i{0};i<9;i++){
				if(not checkLine(i)){//check each line)
					std::cout << std::endl << i << " LINE IS NOT VALID";
					return false;
				} 
				if(not checkColumn(i)){//check each column)
					std::cout << std::endl << i << " COLUMN IS NOT VALID";
					return false;
				} 
				if(not checkQuadrant(i)){//check each column)
					std::cout << std::endl << i << "QUADRANT IS NOT VALID";
					return false;
				} 
			}
			return true;
		}

		bool sudoku::checkLine(const short i){
			validMap.erase(validMap.begin(), validMap.end());
			bool test = true;
			for(short j{0} ;j <9 ;++j){
				if(not table[i][j] == 0){
					switch(table[i][j]){
						case 1: test = validMap.insert(std::pair<short, short> (1, 1)).second; break;
						case 2: test = validMap.insert(std::pair<short, short> (2, 1)).second; break;
						case 3: test = validMap.insert(std::pair<short, short> (3, 1)).second; break;
						case 4: test = validMap.insert(std::pair<short, short> (4, 1)).second; break;
						case 5: test = validMap.insert(std::pair<short, short> (5, 1)).second; break;
						case 6: test = validMap.insert(std::pair<short, short> (6, 1)).second; break;
						case 7: test = validMap.insert(std::pair<short, short> (7, 1)).second; break;
						case 8: test = validMap.insert(std::pair<short, short> (8, 1)).second; break;
						case 9: test = validMap.insert(std::pair<short, short> (9, 1)).second; break;
					}
					if(not test){
						return test;
					}
				}
			}
			return test;
		}

		bool sudoku::checkColumn(const short i){
			validMap.erase(validMap.begin(), validMap.end());
			bool test = true;
			for(short j{0} ;j <9 ;++j){
				if(not table[j][i] == 0){
					switch(table[j][i]){
						case 1: test = validMap.insert(std::pair<short, short> (1, 1)).second; break;
						case 2: test = validMap.insert(std::pair<short, short> (2, 1)).second; break;
						case 3: test = validMap.insert(std::pair<short, short> (3, 1)).second; break;
						case 4: test = validMap.insert(std::pair<short, short> (4, 1)).second; break;
						case 5: test = validMap.insert(std::pair<short, short> (5, 1)).second; break;
						case 6: test = validMap.insert(std::pair<short, short> (6, 1)).second; break;
						case 7: test = validMap.insert(std::pair<short, short> (7, 1)).second; break;
						case 8: test = validMap.insert(std::pair<short, short> (8, 1)).second; break;
						case 9: test = validMap.insert(std::pair<short, short> (9, 1)).second; break;
					}
					if(not test){
						return test;
					}
				}
			}
			return test;
		}
		bool sudoku::checkQuadrant(const short quadrantId){
			validMap.erase(validMap.begin(), validMap.end());
			bool test = true;
			short xmin;
			short ymin;
			short xmax;
			short ymax; 
				switch(quadrantId){
					case 0: xmin=0;ymin=0;break;
					case 1: xmin=3;ymin=0;break;
					case 2: xmin=6;ymin=0;break;
					case 3: xmin=0;ymin=3;break;
					case 4: xmin=3;ymin=3;break;
					case 5: xmin=6;ymin=3;break;
					case 6: xmin=0;ymin=6;break;
					case 7: xmin=3;ymin=6;break;
					case 8: xmin=6;ymin=6;break;
				}
				ymax = ymin + 3;
				xmax = xmin + 3;
			for(short x {xmin};x < xmax;++x){
				for (short y {ymin}; y < ymax; ++y)
				{
					if(not table[x][y] == 0){
						switch(table[x][y]){
							case 1: test = validMap.insert(std::pair<short, short> (1, 1)).second; break;
							case 2: test = validMap.insert(std::pair<short, short> (2, 1)).second; break;
							case 3: test = validMap.insert(std::pair<short, short> (3, 1)).second; break;
							case 4: test = validMap.insert(std::pair<short, short> (4, 1)).second; break;
							case 5: test = validMap.insert(std::pair<short, short> (5, 1)).second; break;
							case 6: test = validMap.insert(std::pair<short, short> (6, 1)).second; break;
							case 7: test = validMap.insert(std::pair<short, short> (7, 1)).second; break;
							case 8: test = validMap.insert(std::pair<short, short> (8, 1)).second; break;
							case 9: test = validMap.insert(std::pair<short, short> (9, 1)).second; break;
						}
						if(not test){
							std::cout << std::endl<< "NOT VALID" << std::endl;
							return test;
						}
					}

				}

			}
			return true;
		}

		void solveSudoku(){
			if(not checkValid()){
				return;
			}
			solveSudoku(0, 0, 0)
		}
		bool recursiveSudoku(short x, short y, short target){
			short quadrant;
			if(table[x][y] == 0){
				table[x][y] = target;
				if(checkColumn(y) and checkLine(x)){
					switch(x){
						case x < 3: switch(y){ case: y < 3;quadrant = 0;break;case y < 6: quadrant = 1; case y < 9: quadrant = 2};
						case x < 6: switch(y){ case: y < 3;quadrant = 3;break;case y < 6: quadrant = 4; case y < 9: quadrant = 5};
						case x < 9: switch(y){ case: y < 3;quadrant = 6;break;case y < 6: quadrant = 7; case y < 9: quadrant = 8};
						if(checkQuadrant(quadrant)){
							
						}
					}
				}
			}
		} 
	

// //Faz uma verificação para as 9 linhas, as 9 coluna e cada quadrante, 
// bool VefValido(){
// 	
// 	for(short i {0} ; i < 9;++i){
// 		checkIfExists(i);
// 	}

// }

// bool checkLine(short current){

// }

// bool checkColumn(short current){

// }

// bool checkQuadrant(short current){

// }

// void checkIfExists(short current){
// 		vefLinha(current);
// 		vefColuna(current);
// 		vefQuadrante(current);
// }

// bool Preencher(){

// }
}