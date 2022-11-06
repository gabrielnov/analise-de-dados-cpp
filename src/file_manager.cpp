#include "file_manager.h"

void readFile(LinkedList *ll){
   	std::fstream f;
	
	f.open(FILE_PATH, std::ios::in); 
	
	std::string line;
	

	if (f.is_open())
  	{
	    while(getline(f, line)){
	    	std::cout << "linha: " << line << "" << std::endl; 
	    }
	f.close();
	}
	
}


void saveFile(){
    
}
