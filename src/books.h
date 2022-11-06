#ifndef __BOOKS_H__
#define __BOOKS_H__
#include <string>

struct Book{
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
