#ifndef PUBLICACAO_H
#define PUBLICACAO_H
#include "Implementador.h"

class Publicacao {
protected:
    Implementador* imp;
public:
    Publicacao(Implementador* i) : imp(i) {}
    virtual ~Publicacao() {}

    void obterDados(std::string tipo) {
        std::cout << "Publicacao: Solicitando dados ao implementador..." << std::endl;
        imp->getDados(tipo);
    }
    void getTitulo() { std::cout << "Publicacao: getTitulo() chamado." << std::endl; }
    void getAutor(int id) { std::cout << "Publicacao: getAutor() para ID " << id << std::endl; }
};
#endif