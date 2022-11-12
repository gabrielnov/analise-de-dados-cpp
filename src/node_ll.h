#ifndef __NODE_LL_H__
#define __NODE_LL_H__
#include "books.h"

class NodeLL {
	public:
		NodeLL(){ 
			Book * id = new Book();
			prox = nullptr;	
		};
		
		NodeLL(Book* id, NodeLL* prox){
			this->id = id;
			this->prox = prox;
		};
		
	 	~NodeLL(){ 
	 		delete id;
		 	id = nullptr;
		 	prox = nullptr; 
		}
		
		NodeLL *getProx() { return prox; };
		Book* getId(){ return id; };
		
		void setProx(NodeLL *prox) { this->prox = prox; };
		void setId(Book* id) { this->id = id;};
		
	private:
	    Book* id;
		NodeLL *prox;
};

#endif
