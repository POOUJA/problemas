/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoComision.cpp
 * Author: Alfonso
 * 
 * Created on 26 de abril de 2016, 19:14
 */

#include <stdexcept>


#include "EmpleadoComision.h"

EmpleadoComision::EmpleadoComision(std::string nombre, std::string nif, float sueldo)
try:
Empleado(nombre , nif , sueldo),
_comision(0.05),
_numVentas(0){
}catch(std::invalid_argument& e){
    throw e;
}

EmpleadoComision::EmpleadoComision(const EmpleadoComision& orig):
Empleado(orig),
_comision(orig._comision),
_numVentas(orig._numVentas){
}

EmpleadoComision::~EmpleadoComision() {
}

float EmpleadoComision::getNomina() const{
    return this->getSueldoFijo()+this->getSueldoFijo()*_comision*_numVentas;
}

int EmpleadoComision::getNumVentas() const {
    return _numVentas;
}

float EmpleadoComision::getComision() const {
    return _comision;
}

void EmpleadoComision::aumentarVentas(unsigned int ventas){
    _numVentas+=ventas;
}

std::string EmpleadoComision::getTipo() const{
    return "Comisionado";
}

ItemDuplicable* EmpleadoComision::copia() const{
    return new EmpleadoComision(*this);
}

