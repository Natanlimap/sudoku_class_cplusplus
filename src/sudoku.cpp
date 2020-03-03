#include <iostream>
#include "../lib/sudoku.h"

	namespace sud{

		sudoku::sudoku(){ // initial constructor
			for(int i {0}; i < 9; i++){ //walks in all table positions and put 0
				for(int j {0}; j < 9; j++){
					table[i][j] = 0; 
				}		
			}
			emptySpace = 81; //the all spaces are with 0
		};
		sudoku::~sudoku(){ //destructor
		
		};

		sudoku::sudoku(int otherTable[9][9]){
			for(int i {0}; i < 9; i++){ 
				for(int j {0}; j < 9; j++){
					table[i][j] = otherTable[i][j];
					if(table[i][j] != 0){ //if isnt 0, the table[i][j] isnt a empty space
						--emptySpace; //so decreases the empty spaces counter
					}
				}		
			}
		};

		void sudoku::printTable(){
			for(int i {0}; i < 9; i++){ //walks through the table and print all positions
				for(int j {0}; j < 9; j++){
					std::cout << table[i][j] << " "; //print each number
				}
				std::cout << std::endl;	//jump line
			}
		}
		bool sudoku::isComplete(){ //check if the table is complete
				if(emptySpace == 0){ //if empty space = 0 is because the client parsed just valid numbers
					return true;	
				}else{
					return false
				}
		}
		bool sudoku::checkValid(){ //check if the table is valid
			for(int i{0};i<9;i++){
				checkLine(i); //check each line
				checkColumn(i); //check each column
			}
		}

		bool sudoku::checkLine(int i){
			for(int i{0}; i < 9;i++){
			}
		}

		bool sudoku::checkColumn(int i){
			
		}

// //Faz uma verificação para as 9 linhas, as 9 coluna e cada quadrante, 
// bool VefValido(){
// 	
// 	for(int i {0} ; i < 9;++i){
// 		checkIfExists(i);
// 	}

// }

// bool checkLine(int current){

// }

// bool checkColumn(int current){

// }

// bool checkQuadrant(int current){

// }

// void checkIfExists(int current){
// 		vefLinha(current);
// 		vefColuna(current);
// 		vefQuadrante(current);
// }

// bool Preencher(){

// }
}