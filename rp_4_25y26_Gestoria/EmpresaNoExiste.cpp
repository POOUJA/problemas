/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpresaNoExiste.cpp
 * Author: Alfonso
 * 
 * Created on 28 de abril de 2016, 7:54
 */

#include "EmpresaNoExiste.h"

EmpresaNoExiste::EmpresaNoExiste(std::string error):
std::invalid_argument(error){
}

EmpresaNoExiste::EmpresaNoExiste(const EmpresaNoExiste& orig):
std::invalid_argument(orig){
}

EmpresaNoExiste::~EmpresaNoExiste() throw(){
}

