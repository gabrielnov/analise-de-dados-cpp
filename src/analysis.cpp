#include "analysis.h"

void analysisA(LinkedList* ll){
	
	std::cout << "\n -- Quantidade de livros de editoras nacionais e internacionais --" << std::endl; 
	
	double internacionais = ll->getQtde() - ll->getQtdeBrasileiras();
	int porcNacionais, porcInternacionais;
	
	porcNacionais = ( (double) ll->getQtdeBrasileiras() / ll->getQtde()) * 100;
	porcInternacionais = (internacionais / ll->getQtde()) * 100;
	
	
	std::cout << '\n' << std::setw(30) << 'n' << std::setw(11) << "%\n" 	
	<< std::setw(20) << "Internacionais" << std::setw(10) <<  internacionais
	<< std::setw(10) << porcInternacionais << std::endl
	<< std::setw(20)  << "Nacionais" << std::setw(10) << ll->getQtdeBrasileiras()
	<< std::setw(10) << porcNacionais << std::endl
	<< std::setw(20)  << "Total" << std::setw(10) << ll->getQtde()
	<< std::setw(10) << "100" << std::endl;
}

void analysisB(LinkedList* ll){
	std::cout << "\n -- Quantidade de livros que sao bibliografia basica --" << std::endl; 
	
	int totalBasica = 0, totalNaoBasica = 0;
	
	NodeLL *pAnda;
	
    if (ll->isEmpty()){
		std::cout << "Nenhum livro encontrado!\n";
		delete pAnda;
    	pAnda = nullptr;
    	return;
	}else{
      pAnda = ll->getHead();
      while (pAnda != nullptr){
      	if(pAnda->getId()->getBasica() == 'S') 
			totalBasica++;
        pAnda = pAnda->getProx();
	  }	
    }
    delete pAnda;
    pAnda = nullptr;
	
	totalNaoBasica = ll->getQtde() - totalBasica;
	
	int porcBasica, porcNaoBasica;
	
	porcBasica = ( (double) totalBasica / ll->getQtde()) * 100;
	porcNaoBasica = ((double) totalNaoBasica / ll->getQtde()) * 100;
	
    std::cout << '\n' << std::setw(30) << 'n' << std::setw(11) << "%\n" 	
	<< std::setw(20) << "Basica" << std::setw(10) <<  totalBasica
	<< std::setw(10) << porcBasica << std::endl
	<< std::setw(20)  << "Nao basica" << std::setw(10) << totalNaoBasica
	<< std::setw(10) << porcNaoBasica << std::endl
	<< std::setw(20)  << "Total" << std::setw(10) << ll->getQtde()
	<< std::setw(10) << "100" << std::endl;
    
    
}

void analysisC(LinkedList* ll){
	std::cout << "\n -- Quantidade de livros publicados em determinado ano --" << std::endl; 
	std::string ano;
	int totalAno = 0, porcAno;
	
	std::cout << "Insira o ano a ser pesquisado: ";
	std::cin >> ano;
	
	while(!validYear(ano)){
		std::cout << "Ano invalido. Digite novamente: ";
		std::cin >> ano;
	}
	
	NodeLL *pAnda;
	
    if (ll->isEmpty()){
		std::cout << "Nenhum livro encontrado!\n";
		delete pAnda;
    	pAnda = nullptr;
    	return;
	}else{
      pAnda = ll->getHead();
      while (pAnda != nullptr){
      	if(pAnda->getId()->getAno() == std::stoi(ano))
			totalAno++;
        pAnda = pAnda->getProx();
	  }	
    }
	delete pAnda;
    pAnda = nullptr;

	porcAno = ( (double) totalAno / ll->getQtde()) * 100;
	
    std::cout << '\n' << std::setw(30) << 'n' << std::setw(11) << "%\n" 	
	<< std::setw(16) << "Publicados em " << ano << std::setw(10) <<  totalAno
	<< std::setw(10) << porcAno << std::endl
	<< std::setw(20)  << "Outros anos" << std::setw(10) << ll->getQtde() - totalAno
	<< std::setw(10) << 100 - porcAno << std::endl
	<< std::setw(20)  << "Total" << std::setw(10) << ll->getQtde()
	<< std::setw(10) << "100" << std::endl;
}
