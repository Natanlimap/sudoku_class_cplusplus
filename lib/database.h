#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <map>
#include <vector>
#include <string> 
#include <list>

	namespace sud
	{	
		class database
		{
			private:
				std::list <int**> tablesDatabase;
				short currentNumber;
				//INSIDE FUNCTIONS
				void readFile(std::string name); //read the client file and add to our tablesDatabase
				void writeTable(bool restart); //write in tables.txt
				bool checkIfValidNumber(short &i, short &j, short ); //check if the current number thats readFile is reading is valid
				void order();
				void invalidTable(short &i, short &j, isftream file);


			public:

				//
				database(std::string name, bool restart);
				~database();		

			
		};
	}
	

#endif
