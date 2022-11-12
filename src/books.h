#ifndef __BOOKS_H__
#define __BOOKS_H__
#include <string>

class Book{
 	public:
 		Book(std::string v[9]){
 			this->disciplina = v[0];
			this->titulo = v[1];
			this->autor = v[2];
			this->edicao = std::stoi(v[3]);
			this->cidade = v[4];
			this->editora = v[5];
			this->ano = std::stoi(v[6]);
			this->isbn = v[7];
			this->disciplina = (v[0] == "S"); 			
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
		
		void setDisciplina(std::string disciplina){this->disciplina = disciplina;}
		void setTitulo(std::string titulo){this->disciplina = disciplina;}
		void setAutor(std::string autor){this->autor = autor;}
		void setEdicao(int edicao){this->edicao = edicao;}
		void setCidade(std::string cidade){this->cidade = cidade;}
		void setEditora(std::string editora){this->editora = editora;}
		void setDisciplina(int ano){this->ano = ano;}
		void setIsbn(std::string isbn){this->isbn = isbn;}
		void setDisciplina(bool basica){this->basica = basica;}
	
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
};

#endif
