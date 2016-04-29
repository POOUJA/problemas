/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoSFijo.cpp
 * Author: Alfonso
 * 
 * Created on 26 de abril de 2016, 18:59
 */

#include <stdexcept>

#include "EmpleadoSFijo.h"

EmpleadoSFijo::EmpleadoSFijo(std::string nombre, std::string nif, float sueldo)
try :
    Empleado(nombre, nif, sueldo) {
} catch (std::invalid_argument& e) {
    throw e;
}

EmpleadoSFijo::EmpleadoSFijo(const EmpleadoSFijo& orig) :
Empleado(orig) {
}

EmpleadoSFijo::~EmpleadoSFijo() {
}

float EmpleadoSFijo::getNomina() const {
    return this->getSueldoFijo();
}

std::string EmpleadoSFijo::getTipo() const{
    return "Asalariado";
}

ItemDuplicable* EmpleadoSFijo::copia() const{
    return new EmpleadoSFijo(*this);
}

