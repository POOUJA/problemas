/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoHoras.h
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 19:05
 */

#ifndef EMPLEADOHORAS_H
#define EMPLEADOHORAS_H

#include "Empleado.h"

class EmpleadoHoras : public Empleado {
public:
    EmpleadoHoras(std::string nombre, std::string nif);
    EmpleadoHoras(const EmpleadoHoras& orig);
    virtual ~EmpleadoHoras();
    virtual float getNomina() const;
    float getPrecioHora() const;
    int getHoras() const;
    void setPrecioHora(float _precioHora);
    void aumentarHoras(unsigned int horas);
    virtual std::string getTipo() const;
    virtual ItemDuplicable* copia() const;
private:
    int _horas;
    float _sueldoHora;

};

#endif /* EMPLEADOHORAS_H */

