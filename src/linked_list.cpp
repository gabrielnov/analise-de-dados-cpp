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
		
bool LinkedList::insertHead(struct Book id){
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

bool LinkedList::insertTail(struct Book id){
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
      while ((pAnda != nullptr) && ((pAnda->getId().isbn != filter) || (pAnda->getId().titulo != filter)))
        pAnda = pAnda->getProx();
      return pAnda; 
    }
}

bool LinkedList::remove(std::string filter){
	NodeLL *pAnt = nullptr, *pAnda;
    if (isEmpty()) return false;
    else{
      pAnda = head;
      while ((pAnda != nullptr) && ((pAnda->getId().isbn != filter) || (pAnda->getId().titulo != filter))){
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
    std::cout << "Disciplina  ISBN   Titulo  Autor  Edicao   Cidade   Editora  Ano  Bibliografia basica" ;
    std::cout << "--------------------------------------------------------------------------------------";
    pAnda = head;
    while (pAnda != nullptr) {
      std::cout << pAnda->getId().disciplina << " ";
      std::cout << pAnda->getId().isbn << " ";
      std::cout << pAnda->getId().titulo << " ";
      std::cout << pAnda->getId().autor << " ";
      std::cout << pAnda->getId().edicao << " ";
      std::cout << pAnda->getId().cidade << " ";
      std::cout << pAnda->getId().editora << " ";
      std::cout << pAnda->getId().ano << " ";
      std::cout << pAnda->getId().basica << " " << std::endl; 

      pAnda = pAnda->getProx();
      std::cout << "--------------------------------------------------------------------------------------";
    }
    
}
		

