/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Empresa.h
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 19:21
 */

#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>

#include "Empleado.h"

class Empresa {
public:
    Empresa(std::string nombre);
    Empresa(const Empresa& orig);
    virtual ~Empresa();
    void asignarEmpleado(Empleado* empleado);
    void despedirEmpleado(Empleado* empleado);
    int existeEmpleado(Empleado* empleado);
    bool operator==(const Empresa& e);
    void mostrarDatos();
    Empleado* getEmpleado(Empleado* e);
private:
    std::string _nombre;
    Empleado* *_empleados;
    int _numEmpleados;

};

#endif /* EMPRESA_H */

