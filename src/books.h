#ifndef __BOOKS_H__
#define __BOOKS_H__
#include <string>
#include <iostream>

class Book{
 	public:
 		// Recebe um array com 9 posicoes, associamos cada uma a um elemento da classe
 		Book(std::string v[9]){
 			this->disciplina = v[0];
 			this->isbn = v[1];
			this->titulo = v[2];			
			this->autor = v[3];
			this->edicao = std::stoi(v[4]);
			this->cidade = v[5];
			this->editora = v[6];
			this->ano = std::stoi(v[7]);
			this->basica = (v[8] == "S"); 			
		}
		~Book(){};
		Book(){}; 
 		
		std::string getDisciplina(){return this->disciplina;}
		std::string getTitulo(){return this->titulo;}
		std::string getAutor(){return this->autor;}
		int getEdicao(){return this->edicao;}
		std::string getCidade(){return this->cidade;}
		std::string getEditora(){return this->editora;}
		int getAno(){return this->ano;}
		std::string getIsbn(){return this->isbn;}
		bool getBasica(){return this->basica;}
		bool getNacional(){return this->nacional;}
		
		void setDisciplina(std::string disciplina){this->disciplina = disciplina;}
		void setTitulo(std::string titulo){this->disciplina = disciplina;}
		void setAutor(std::string autor){this->autor = autor;}
		void setEdicao(int edicao){this->edicao = edicao;}
		void setCidade(std::string cidade){this->cidade = cidade;}
		void setEditora(std::string editora){this->editora = editora;}
		void setAno(int ano){this->ano = ano;}
		void setIsbn(std::string isbn){this->isbn = isbn;}
		void setBasica(bool basica){this->basica = basica;}
		void setNacional(bool nacional){this->nacional = nacional;}
		
		bool verificaNacional(std::string editora);
		
	private:
		std::string disciplina;
	    std::string titulo;
	    std::string autor;
	    int edicao;
	    std::string cidade;
	    std::string editora;
	    int ano;
	    std::string isbn;
	    bool basica; // bibliografia basica
	    bool nacional;
};

#endif
