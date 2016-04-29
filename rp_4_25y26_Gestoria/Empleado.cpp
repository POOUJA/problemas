/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Empleado.cpp
 * Author: Alfonso
 * 
 * Created on 26 de abril de 2016, 18:41
 */

#include <stdexcept>
#include <string>

#include "Empleado.h"

Empleado::Empleado(std::string nombre, std::string nif, float sueldo) :
_nombre(nombre),
_nif(nif),
_sueldoFijo(sueldo) {
    if (_nif.length() != 7) {
        std::string porDefecto = "Desconocido.";
        _nif = porDefecto;
        throw std::invalid_argument("[Empleado::Empleado]: longitud de NIF incorrecta.");
    }

    if (_sueldoFijo < 0) {
        float porDefectoS = 600;
        _sueldoFijo = porDefectoS;
        throw std::invalid_argument("[Empleado::Empleado]: sueldo debe ser mayor que 0.");
    }
}

float Empleado::getSueldoFijo() const {
    return _sueldoFijo;
}

Empleado::Empleado(const Empleado& orig) :
_nombre(orig._nombre),
_nif(orig._nif),
_sueldoFijo(orig._sueldoFijo) {
}

Empleado::~Empleado() {
}

std::string Empleado::getNif() const {
    return _nif;
}

std::string Empleado::getNombre() const {
    return _nombre;
}

bool Empleado::operator ==(const Empleado& e){
    return _nif==e._nif;
}

