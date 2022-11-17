#include "input.h"

void input(Book* b){
	std::cin.ignore(256, '\n'); 
			
	std::string field;	
	
	// Le disciplina
	std::cout << "Disciplina: ";
	std::getline(std::cin, field);
	while (!validString(field)){
		std::cout << "Disciplina \"" << field << "\" invalida. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setDisciplina(field);
		
	std::cout << "ISBN: ";
	std::getline(std::cin, field);
	while (!validString(field)){
		std::cout << "ISBN \"" << field << "\" invalido. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setIsbn(field);
	
	std::cout << "Titulo: ";
	std::getline(std::cin, field);
	while (!validString(field)){
		std::cout << "Titulo \"" << field << "\" invalido. Tente novamente: ";
		getline(std::cin, field);
	}	
	b->setTitulo(field);
	
	std::cout << "Autor: ";
	std::getline(std::cin, field);
	while (!validString(field)){
		std::cout << "Autor \"" << field << "\" invalido. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setAutor(field);
	
	std::cout << "Edicao: ";
	std::getline(std::cin, field);
	while (!validEdition(field)){
		std::cout << "Edicao \"" << field << "\" invalida. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setEdicao(std::stoi(field));
	
	std::cout << "Cidade: ";
	std::getline(std::cin, field);
	while (!validString(field)){
		std::cout << "Cidade  \"" << field << "\" invalida. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setCidade(field);
	
	std::cout << "Editora: ";
	std::getline(std::cin, field);
	while (!validString(field)){
		std::cout << "Editora \"" << field << "\" invalida. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setEditora(field);
	
	std::cout << "Ano: ";
	std::getline(std::cin, field);
	while (!validYear(field)){
		std::cout << "Ano \"" << field << "\" invalido. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setAno(std::stoi(field));
	
	std::cout << "Bibliografia Basica (0 ou 1): ";
	std::getline(std::cin, field);
	while (!validBool(field)){
		std::cout << "Bibliografia Basica \"" << field << "\"  invalida. Tente novamente: ";
		getline(std::cin, field);
	}
	b->setBasica(field == "S");
}

// Verifica se o campo possui ao menos um caractere
bool validString(std::string s){
	return std::regex_match(s, std::regex("\\w+.*$")); 
}

// Verifica se o ano é válido
bool validYear(std::string s){
	return std::regex_match(s, std::regex("^[12][0-9]{3}$"));
}

// Verifica se a edição possui apenas digitos numericos
bool validEdition(std::string s){
	return std::regex_match(s, std::regex("^[1-9]\\d*$"));
}

// Verifica se a bibliografia basica possui apenas 1 ou 0
bool validBool(std::string s){
	return std::regex_match(s, std::regex("[01]+")) && s.size() == 1;
}

