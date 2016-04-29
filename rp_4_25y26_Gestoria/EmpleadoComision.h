/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoComision.h
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 19:14
 */

#ifndef EMPLEADOCOMISION_H
#define EMPLEADOCOMISION_H

#include "Empleado.h"

class EmpleadoComision : public Empleado{
public:
    EmpleadoComision(std::string nombre, std::string nif, float sueldo = 600);
    EmpleadoComision(const EmpleadoComision& orig);
    virtual ~EmpleadoComision();
    virtual float getNomina() const;
    int getNumVentas() const;
    float getComision() const;
    void aumentarVentas(unsigned int ventas);
    virtual std::string getTipo() const;
    virtual ItemDuplicable* copia() const;
private:
    float _comision;
    int _numVentas;

};

#endif /* EMPLEADOCOMISION_H */

