#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "node_ll.h"
#include <string>
#include "books.h"

class LinkedList{
	private:
		NodeLL *head;
	public:	
		LinkedList();
		~LinkedList();
		bool isEmpty();
		bool isFull();
		bool insertHead(struct Book id);
		bool insertTail(struct Book id);
		NodeLL *search(std::string filter);
		bool remove(std::string filter);
		void clear();
		void print();	
		
		NodeLL* getHead(void){ return head; };
		void setHead(NodeLL *head) { this->head = head;	}
};

#endif
