/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoHoras.cpp
 * Author: Alfonso
 * 
 * Created on 26 de abril de 2016, 19:05
 */

#include <stdexcept>

#include "EmpleadoHoras.h"

EmpleadoHoras::EmpleadoHoras(std::string nombre, std::string nif)
try:
Empleado(nombre , nif , 0),
_horas(0),
_sueldoHora(20){
}catch(std::invalid_argument& e){
        throw e;
}

EmpleadoHoras::EmpleadoHoras(const EmpleadoHoras& orig):
Empleado(orig),
_horas(orig._horas),
_sueldoHora(orig._sueldoHora){
}

EmpleadoHoras::~EmpleadoHoras() {
}

float EmpleadoHoras::getNomina() const {
    return _horas*_sueldoHora;
}

float EmpleadoHoras::getPrecioHora() const {
    return _sueldoHora;
}

int EmpleadoHoras::getHoras() const {
    return _horas;
}

void EmpleadoHoras::setPrecioHora(float _precioHora) {
    if(_precioHora<=0)
        throw std::invalid_argument("[EmpleadoHoras::setPrecioHora]: el sueldo por hora debe "
                                    "ser mayor que 0.");
    
    this->_sueldoHora = _precioHora;
}

void EmpleadoHoras::aumentarHoras(unsigned int horas){
    _horas+=horas;
}

std::string EmpleadoHoras::getTipo() const{
    return "Por horas";
}

ItemDuplicable* EmpleadoHoras::copia() const{
    return new EmpleadoHoras(*this);
}

