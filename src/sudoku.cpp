#include <iostream>
#include "../lib/sudoku.h"

	namespace sud{

		sudoku::sudoku(){ // initial constructor
			for(short i {0}; i < 9; i++){ //walks in all table positions and put 0
				for(short j {0}; j < 9; j++){
					table[i][j] = 0; 
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
					return false;
				} 
				if(not checkColumn(i)){//check each column)
					return false;
				} 
				if(not checkQuadrant(i)){//check each column)
					return false;
				} 
			}
			return true;
		}

		bool sudoku::checkLine(const short i){
			validMap.erase(validMap.begin(), validMap.end());
			bool test = true;
			for(short j{0} ;j <9 ;++j){
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
					std::cout << i << " " << j;
					return test;
				}
			}
			return test;
		}

		bool sudoku::checkColumn(const short i){
			validMap.erase(validMap.begin(), validMap.end());
			bool test = true;
			for(short j{0} ;j <9 ;++j){
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

					std::cout << j << " " << i;
					return test;
				}
			}
			return test;
		}
		bool sudoku::checkQuadrant(const short quadrantId){
			validMap.erase(validMap.begin(), validMap.end());
			bool test = true;
			short x;
			short y;
			switch(quadrantId){
				case 0: x=0;y=0;break;
				case 1: x=3;y=0;break;
				case 2: x=6;y=0;break;
				case 3: x=0;y=3;break;
				case 4: x=3;y=3;break;
				case 5: x=6;y=3;break;
				case 6: x=0;y=6;break;
				case 7: x=3;y=6;break;
				case 8: x=6;y=6;break;
			}

			for(x;x < x + 3;++x){
				for (y; y < y+3; ++y)
				{
					std::cout <<" " <<x << " "<<y;
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
						return test;
					}

				}
					std::cout<< std::endl;

			}
			return true;
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