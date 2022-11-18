#include "books.h"

bool Book::verificaNacional(std::string editora){
	std::string editorasNacionais[5] = {"Sao Paulo", "São Paulo", "Rio de Janeiro", "Porto Alegre", "Curitiba"};
	
	for (int i = 0; i < 5; i++){
		if (editora == editorasNacionais[i]) return true;
	}
	
	return false;
}
