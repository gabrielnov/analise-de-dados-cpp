#ifndef __NODE_LL_H__
#define __NODE_LL_H__
#include "books.h"

class NodeLL 
{
public:
	NodeLL(){ id = Book{}; prox = nullptr;	};
	NodeLL(struct Book id, NodeLL* prox){
		this->id.ano = id.ano;
		this->id.autor = id.autor;
		this->id.titulo = id.titulo;
		this->id.cidade = id.cidade;
		this->id.disciplina = id.disciplina;
		this->id.edicao = id.edicao;
		this->id.basica = id.basica;
		this->id.editora = id.editora;
		this->id.isbn = id.isbn;
		this->prox = prox;
	};
	~NodeLL(){};

	NodeLL *getProx() { return prox; };
	struct Book getId(){ return id; };
	
	void setProx(NodeLL *prox) { this->prox = prox; };
	void setId(struct Book id) { 
		this->id.ano = id.ano;
		this->id.autor = id.autor;
		this->id.titulo = id.titulo;
		this->id.cidade = id.cidade;
		this->id.disciplina = id.disciplina;
		this->id.edicao = id.edicao;
		this->id.basica = id.basica;
		this->id.editora = id.editora;
		this->id.isbn = id.isbn;
	};
	
private:
    struct Book id;
	NodeLL *prox;
};

#endif
