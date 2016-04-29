/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpresaNoExiste.h
 * Author: Alfonso
 *
 * Created on 28 de abril de 2016, 7:54
 */

#ifndef EMPRESANOEXISTE_H
#define EMPRESANOEXISTE_H

#include <stdexcept>
#include <string>

class EmpresaNoExiste : public std::invalid_argument {
public:
    EmpresaNoExiste(std::string error);
    EmpresaNoExiste(const EmpresaNoExiste& orig);
    virtual ~EmpresaNoExiste() throw();
private:

};

#endif /* EMPRESANOEXISTE_H */

