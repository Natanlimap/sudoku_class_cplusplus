#include <iostream>
#include "../lib/sudoku.h"

sud::sudoku(int **clientData){
	for(int i {0}; i < 9; i++){
		for(int j {0}; j < 9; j++){
			V = clientData[i][j];
		}		
	}
}


// int* VefCompleto(){

// }

// //Faz uma verificação para as 9 linhas, as 9 coluna e cada quadrante, 
// bool VefValido(){
// 	//Vef 9 linhas
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