#include "menu.h"

void menu(){
	
	char opt;
	bool flag;
	Book* b;
		
	std::cout << "\n1. Ler dados\n"	
	<< "2. Exibir dados\n"
	<< "3. Salvar dados\n"
	<< "4. Inserir livro\n"
	<< "5. Remover livro\n"
	<< "6. Analise de dados A\n"
	<< "7. Analise de dados B\n"
	<< "8. Analise de dados C\n"
	<< "9. Encerrar\n\n"
	<< "Digite a opcao: ";
	
	std::cin >> opt;

	switch(opt){
		case '1':
		
		case '2':
			if (!flag){
				std::cout << "Necessario ler os dados primeiro (opcao 1)";
				menu();
			}
			break;
		case '3':
			break;
		case '4':
			b = readData();
			break;
		case '5':
			break;
		case '6':
			break;
		case '7':
			break;
		case '8':
			break;
		case '9':
			std::cout << "Encerrando programa...";
			exit(0);
		default:
			std::cout << "Opcao invalida. Tenta novamente";
			menu();
	}
}

Book* readData(){
	std::string* sdata = new std::string[9];
	std::string fields[9] = {"Disciplina", "ISBN", "Titulo", "Autor", "Edicao", "Cidade", "Editora", "Ano", "Bibliografia basica"};
	int data, size = 9;
	
	std::cout << "Informe os dados do novo livro" << std::endl;
	
	for (int i = 0; i < size; i++){
		std::cout << fields[i] << ": ";
		std::cin >> sdata[i];
		std::cout << std::endl;	
	}
	
	Book* b = new Book(sdata);

	delete[] sdata;
	sdata = nullptr;

	return b;	
}
