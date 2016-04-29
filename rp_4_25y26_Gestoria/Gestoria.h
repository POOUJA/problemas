/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestoria.h
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 19:57
 */

#ifndef GESTORIA_H
#define GESTORIA_H

#include <string>

#include "Empresa.h"

class Gestoria {
public:
    Gestoria(std::string nombre);
    Gestoria(const Gestoria& orig);
    virtual ~Gestoria();
    void asignarEmpresa(Empresa* empresa);
    void eliminarEmpresa(Empresa* empresa);
    int buscarEmpresa(Empresa* empresa);
    Empresa* getEmpresa(Empresa* empresa);
private:
    std::string _nombre;
    Empresa* *_empresas;
    int _numEmpresas;

};

#endif /* GESTORIA_H */

