/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Empleado.h
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 18:41
 */

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

#include "ItemDuplicable.h"
#include "ItemIdentificable.h"

class Empleado : public ItemIdentificable , public ItemDuplicable {
public:
    Empleado(std::string nombre, std::string nif, float sueldo = 600);
    Empleado(const Empleado& orig);
    virtual ~Empleado();
    std::string getNif() const;
    std::string getNombre() const;
    float getSueldoFijo() const;
    virtual float getNomina() const = 0;
    bool operator==(const Empleado& e);
    virtual std::string getTipo() const=0;
    virtual ItemDuplicable* copia() const = 0;

private:
    std::string _nombre;
    std::string _nif;
    float _sueldoFijo;
};

#endif /* EMPLEADO_H */

