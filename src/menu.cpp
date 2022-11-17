#include "menu.h"

	
void menu(LinkedList* ll){

	char opt;
	bool exit = false;
	bool* fileRead = new bool(false);
	
	while (!exit){
		printMenu();
		std::cin >> opt;
		exit = readOption(opt, ll, fileRead);
	}
	
	delete fileRead;
	fileRead = nullptr;
}

void printMenu(){
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
}

bool readOption(char opt, LinkedList* ll, bool* fileRead){
	Book* b;
	std::string filter;

	switch(opt){
			case '1':
				readFile(ll);
				*fileRead = true;
				break;
			case '2':
				if (!*fileRead){
					std::cout << "Necessario ler os dados primeiro (opcao 1)";
					break;
				}
					
				ll->print();
				break;
			case '3':
				if (!*fileRead){
					std::cout << "Necessario ler os dados primeiro (opcao 1)";
					break;
				}
				break;
			case '4':
				if (!*fileRead){
					std::cout << "Necessario ler os dados primeiro (opcao 1)";
					break;
				}
				b = readData();
				ll->insertTail(b);
				break;
			case '5':
				if (!*fileRead){
					std::cout << "Necessario ler os dados primeiro (opcao 1)";
					break;
				}
				std::cout << "Insira o titulo ou ISBN do livro a ser removido: ";
				std::cin >> filter;
				if(!ll->remove(filter)){
					std::cout << "Ocorreu um erro ao tentar remover esse livro. Verifique se ele existe antes de remove-lo" << std::endl;
				}else{
					std::cout << "Livro removido com sucesso!" << std::endl;
				}
				break;
			case '6':
				if (!*fileRead)
					std::cout << "Necessario ler os dados primeiro (opcao 1)";
				break;
			case '7':
				if (!*fileRead){
					std::cout << "Necessario ler os dados primeiro (opcao 1)";
					break;
				}
				break;
			case '8':
				if (!*fileRead){
					std::cout << "Necessario ler os dados primeiro (opcao 1)";
					break;
				}
				break;
			case '9':
				std::cout << "Encerrando programa...";
				return true;
			default:
				std::cout << "Opcao invalida. Tenta novamente";
		}
	return false;
}

Book* readData(){
	
	std::string field;
	
	int data, size = 9;

	std::cout << " -- Informe os dados do novo livro -- " << std::endl;
	
	Book* b = new Book();
	
	input(b);	

	return b;	
}

