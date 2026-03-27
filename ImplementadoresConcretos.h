#ifndef IMPLEMENTADORES_CONCRETOS_H
#define IMPLEMENTADORES_CONCRETOS_H
#include "Implementador.h"
#include <iostream>

class PublicacaoImplBD : public Implementador {
public:
    void getDados(std::string tipo) override {
        std::cout << "[BD] Codigo do metodo getDados chamado para: " << tipo << std::endl;
    }
};

class PublicacaoImplXML : public Implementador {
public:
    void getDados(std::string tipo) override {
        std::cout << "[XML] Codigo do metodo getDados chamado para: " << tipo << std::endl;
    }
};
#endif