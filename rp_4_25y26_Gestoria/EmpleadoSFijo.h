/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoSFijo.h
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 18:59
 */

#ifndef EMPLEADOSFIJO_H
#define EMPLEADOSFIJO_H

#include "Empleado.h"

class EmpleadoSFijo : public Empleado {
public:
    EmpleadoSFijo(std::string nombre, std::string nif, float sueldo = 600);
    EmpleadoSFijo(const EmpleadoSFijo& orig);
    virtual ~EmpleadoSFijo();
    virtual float getNomina() const;
    virtual std::string getTipo() const;
    virtual ItemDuplicable* copia() const;
private:

};

#endif /* EMPLEADOSFIJO_H */

