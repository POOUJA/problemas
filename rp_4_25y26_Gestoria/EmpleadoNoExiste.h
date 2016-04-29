/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoNoExiste.h
 * Author: Alfonso
 *
 * Created on 27 de abril de 2016, 13:00
 */

#ifndef EMPLEADONOEXISTE_H
#define EMPLEADONOEXISTE_H

#include <stdexcept>
#include <string>

class EmpleadoNoExiste : public std::invalid_argument{
public:
    EmpleadoNoExiste(std::string error);
    EmpleadoNoExiste(const EmpleadoNoExiste& orig);
    virtual ~EmpleadoNoExiste() throw();
private:

};

#endif /* EMPLEADONOEXISTE_H */

