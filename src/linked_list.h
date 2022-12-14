#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "node_ll.h"
#include <string>
#include "books.h"
#include <iostream>
#include <iomanip>

class LinkedList{
	private:
		NodeLL *head;
		int qtde;
		int qtdeBrasileiras;
	public:	
		LinkedList();
		~LinkedList();
		bool isEmpty();
		bool isFull();
		bool insertHead(Book* id);
		bool insertTail(Book* id);
		NodeLL *search(std::string filter);
		bool remove(std::string filter);
		void clear();
		void print();	
		
		NodeLL* getHead(void){ return head; };
		void setHead(NodeLL *head) { this->head = head;	}
		void setQtde(int qtde){ this->qtde = qtde;}
		void setQtdeBrasileiras(int qtdeBrasileiras){ this->qtde = qtdeBrasileiras;}
		int getQtde(){return qtde;}
		int getQtdeBrasileiras(){return qtdeBrasileiras;}
};

#endif
