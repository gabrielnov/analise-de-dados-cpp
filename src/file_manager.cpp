#include "file_manager.h"

void readFile(LinkedList *ll){
	
	ll->clear();
	
   	std::fstream f;
	
	f.open(FILE_PATH, std::ios::in); 
	
	std::string line;
	std::string* stringArray = new std::string[9];
	
	// Le a primeira linha com os titulos das colunas e a descarta
	getline(f, line);
	
	if (f.is_open()){
	    while(getline(f, line) && line != ""){
	    	
	    	substring(line, stringArray);

	    	Book * b = new Book(stringArray);
	    	bool nacional = b->verificaNacional(stringArray[5]);
	    	b->setNacional(nacional);
	    	
	    	ll->insertTail(b);		
	    }
	f.close();
	}
	
	delete[] stringArray;
	stringArray = nullptr;
	
	std::cout << "Dados lidos com sucesso!" << std::endl;
}


void saveFile(LinkedList *ll){
    
    std::fstream f;
	f.open(FILE_PATH, std::ofstream::out | std::ofstream::trunc);	
	
	f << "Disciplina;ISBN;Titulo;Autor;Edicao;Cidade;Editora;Ano;Bibliografia basica\n";
	
	NodeLL *pAnda;
	
    pAnda = ll->getHead();
    while (pAnda != nullptr){
      	f << pAnda->getId()->getDisciplina() << ";"
      		<< pAnda->getId()->getIsbn() << ";"
      		<< pAnda->getId()->getTitulo() << ";"
      		<< pAnda->getId()->getAutor() << ";"
      		<< pAnda->getId()->getEdicao() << ";"
      		<< pAnda->getId()->getCidade() << ";"
      		<< pAnda->getId()->getEditora() << ";"
      		<< pAnda->getId()->getAno() << ";"
      		<< pAnda->getId()->getBasica() << std::endl;
        pAnda = pAnda->getProx();
	}	
    
	delete pAnda;
    pAnda = nullptr;
    
    f.close();
    
    std::cout << "Dados gravados com sucesso!" << std::endl;
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
