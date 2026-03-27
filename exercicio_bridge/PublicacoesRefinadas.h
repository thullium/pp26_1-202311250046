#ifndef REFINADAS_H
#define REFINADAS_H
#include "Publicacao.h"

class Livro : public Publicacao {
public:
    Livro(Implementador* i) : Publicacao(i) {}
    void getISBN() { std::cout << "Livro: getISBN() chamado." << std::endl; }
};

class Revista : public Publicacao {
public:
    Revista(Implementador* i) : Publicacao(i) {}
    void getArtigo() { std::cout << "Revista: getArtigo() chamado." << std::endl; }
};
#endif