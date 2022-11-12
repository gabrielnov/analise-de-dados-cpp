#include <string>
#include <iostream>
#include "linked_list.h"

LinkedList::LinkedList(){
	head = nullptr;
};
LinkedList::~LinkedList(){
	clear();
};

void LinkedList::clear(){
	NodeLL *pAnt, *pAnda = head;
	
	while(pAnda != nullptr){
		pAnt = pAnda;  
		pAnda = pAnda->getProx();
		pAnt->setProx(nullptr);
		delete pAnt;
		pAnt = nullptr;
	}
	head = nullptr;	
}

bool LinkedList::isEmpty(){
	if (getHead() == nullptr) return true;
	else return false;
};

bool LinkedList::isFull(){
	NodeLL *aux = new NodeLL();
	
	if (aux == nullptr) return true;

	aux = nullptr;
	return false;
};
		
bool LinkedList::insertHead(Book* id){
	NodeLL *aux;
    if (!isFull()){
      aux = new NodeLL(id, nullptr);
      if (isEmpty()){ 
        head = aux;
      }else { 
      	aux->setProx(head);
      	head = aux;
      }
      return true;
    }
    else return false; 
};

bool LinkedList::insertTail(Book* id){
	NodeLL *aux, *pAnda;
    if (!isFull()){
      aux = new NodeLL(id, nullptr);
      if (isEmpty()){ 
        head = aux;
      }else {
        pAnda = head;  
        while (pAnda->getProx() != nullptr)
           pAnda = pAnda->getProx();
        pAnda->setProx( aux );
      }
	  return true;
    }
    else return false; 
};

		
NodeLL* LinkedList::search(std::string filter){
	NodeLL *pAnda;
	
    if (isEmpty()) {
		return nullptr;
    }else{
      pAnda = head;
      while ((pAnda != nullptr) && ((pAnda->getId()->getIsbn() != filter) || (pAnda->getId()->getTitulo() != filter)))
        pAnda = pAnda->getProx();
      return pAnda; 
    }
}

bool LinkedList::remove(std::string filter){
	NodeLL *pAnt = nullptr, *pAnda;
    if (isEmpty()) return false;
    else{
      pAnda = head;
      while ((pAnda != nullptr) && ((pAnda->getId()->getIsbn() != filter) || (pAnda->getId()->getTitulo() != filter))){
        pAnt = pAnda;
        pAnda = pAnda->getProx();
      }
      if (pAnda == nullptr) return false; 
      else {
      	if ((head == pAnda)) {
		  head = pAnda->getProx();
	    } else{ 
	    	pAnt->setProx(pAnda->getProx());
		}
		delete pAnda;
      	pAnda = nullptr;
      	return true;   
      }
    }
}

void LinkedList::print(){
	NodeLL *pAnda; 
    pAnda = head;
    
    // https://cplusplus.com/forum/beginner/181119/
    
    const int disciplina_width = 32;
    const int isbn_width = 15 ;
    const int titulo_width = 72;
    const int autor_width = 42;
    const int edicao_width = 3;
    const int cidade_width = 15;
    const int editora_width = 28;
    const int ano_width = 5;
    const int basica_width = 2;    
    const int num_flds = 9 ;
    
    const std::string sep = " |" ;
    const int total_width = 
			disciplina_width + isbn_width + titulo_width + autor_width + edicao_width 
			+ cidade_width + editora_width + ano_width + basica_width + sep.size() * num_flds ;
    
    const std::string line = sep + std::string( total_width-1, '-' ) + '|' ;
	
	std::cout << line << '\n' << sep
              << std::setw(disciplina_width) << "disciplina" << sep 
			  << std::setw(isbn_width) << "isbn" << sep
              << std::setw(titulo_width) << "titulo" << sep 
			  << std::setw(autor_width) << "autor" << sep
              << std::setw(edicao_width) << "ed" << sep 
			  << std::setw(cidade_width) << "cidade" << sep
              << std::setw(editora_width) << "editora" << sep 
              << std::setw(ano_width) << "ano" << sep 
              << std::setw(basica_width) << "b" << sep 
			  << '\n' << line << '\n' ;
              
    while (pAnda != nullptr) {
    	std::cout << sep 
		<< std::setw(disciplina_width) << pAnda->getId()->getDisciplina().substr(0,30) << sep 
		<< std::setw(isbn_width) << pAnda->getId()->getIsbn() << sep 	   
		<< std::setw(titulo_width) << pAnda->getId()->getTitulo().substr(0, 70) << sep 	   
		<< std::setw(autor_width) << pAnda->getId()->getAutor().substr(0, 40) << sep 	   
		<< std::setw(edicao_width) << pAnda->getId()->getEdicao() << sep 	   
		<< std::setw(cidade_width) << pAnda->getId()->getCidade() << sep 	   
		<< std::setw(editora_width) << pAnda->getId()->getEditora() << sep 	   
		<< std::setw(ano_width) << pAnda->getId()->getAno() << sep
		<< std::setw(basica_width) << pAnda->getId()->getBasica()  
		<< sep << '\n' ;

      pAnda = pAnda->getProx();
      
    }
    
    std::cout << line << '\n' ;
    
    
}
		

