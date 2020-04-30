#include <iostream>
#include "../lib/database.h"



using namespace sud;
database::database(std::string name, bool restart){
	char number;
	short i = 0, j = 0;
	short currentTable[9][9];

	std::ifstream clientFILE;
	
	clientFILE.open(name);
	while(!clientFILE.eof()){
		if(i ==9 and j == 9){
			
		}
		clientFILE.get(number);
		std::cout << number;
		
	} 
	std::cout << std::endl;
}
database::~database(){
	
}