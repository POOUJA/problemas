/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmpleadoNoExiste.cpp
 * Author: Alfonso
 * 
 * Created on 27 de abril de 2016, 13:00
 */

#include "EmpleadoNoExiste.h"

EmpleadoNoExiste::EmpleadoNoExiste(std::string error):
std::invalid_argument(error) {
}

EmpleadoNoExiste::EmpleadoNoExiste(const EmpleadoNoExiste& orig):
std::invalid_argument(orig){
}

EmpleadoNoExiste::~EmpleadoNoExiste() throw(){
}

