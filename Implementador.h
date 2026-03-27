#ifndef IMPLEMENTADOR_H
#define IMPLEMENTADOR_H
#include <string>

class Implementador {
public:
    virtual ~Implementador() {}
    virtual void getDados(std::string tipo) = 0;
};
#endif