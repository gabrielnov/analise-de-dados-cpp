#include "file_manager.h"

void readFile(LinkedList *ll){
   	std::fstream f;
	
	f.open(FILE_PATH, std::ios::in); 
	
	std::string line;
	std::string* stringArray = new std::string[9];

	if (f.is_open()){
	    while(getline(f, line)){
	    	
	    	substring(line, stringArray);
	    	
	    	for(int i = 0; i < 9; i++){
	    		std::cout << stringArray[i] << " ";
			}
			
			std::cout << std::endl;
	    }
	f.close();
	}
	
	delete stringArray;
	stringArray = nullptr;
}


void saveFile(){
    
}

// retorna um array com as 9 colunas do csv
void substring(std::string s, std::string* v){
	int j = 0;
	std::string aux;
	
	for(int i = 0; i < 9; i++){

		while (s[j] != ';' && j < s.size()){
			aux.push_back(s[j]);
			j++;
		}
		
		v[i] = aux;
		aux = "";
		j++;
	}

}
