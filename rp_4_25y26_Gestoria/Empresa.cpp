/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Empresa.cpp
 * Author: Alfonso
 * 
 * Created on 26 de abril de 2016, 19:21
 */

#include <iostream>
#include <string>

#include "EmpleadoNoExiste.h"
#include "Empresa.h"

Empresa::Empresa(std::string nombre):
_nombre(nombre),
_numEmpleados(0),
_empleados(0){
   
}

Empresa::Empresa(const Empresa& orig):
_nombre(orig._nombre){
    if(_numEmpleados>=orig._numEmpleados){
        for (int i = 0; i < _numEmpleados; i++) {
            if(i<orig._numEmpleados)
                _empleados[i]=dynamic_cast<Empleado*>(orig._empleados[i]->copia());
            else
                _empleados[i]=0;

        }

    }else{
        
        for (int i = 0; i < _numEmpleados; i++) {
            delete _empleados[i];

        }

        delete[] _empleados;
        _empleados=new Empleado*[orig._numEmpleados];
        for (int i = 0; i < orig._numEmpleados; i++) {
            _empleados[i]=dynamic_cast<Empleado*>(orig._empleados[i]->copia());

        }

    }
    
    _numEmpleados=orig._numEmpleados;
}

Empresa::~Empresa() {
    
    for (int i = 0; i < _numEmpleados; i++) {
        delete _empleados[i];

    }

    
    delete[] _empleados;
}

void Empresa::asignarEmpleado(Empleado* empleado){
    if(empleado){
        if(existeEmpleado(empleado)==-1){
            Empleado* *aux=new Empleado*[_numEmpleados+1];
            for (int i = 0; i < _numEmpleados; i++) {
                aux[i]=_empleados[i];

            }
            
            aux[_numEmpleados]=dynamic_cast<Empleado*>(empleado->copia());
 
            delete[] _empleados;
            _empleados=aux;
            _numEmpleados++;
        }

    }
}

void Empresa::despedirEmpleado(Empleado* empleado){
    if(empleado){
        int posicion=existeEmpleado(empleado);
        if(posicion!=-1){
            Empleado* *aux=new Empleado*[_numEmpleados-1];
            bool encontrado=false;
            
            for (int i = 0; i < _numEmpleados-1; i++) {
                if(i==posicion)
                    encontrado=true;
                
                if(encontrado){
                    aux[i]=_empleados[i+1];
                }else{
                    aux[i]=_empleados[i];
                }

            }
            
            delete[] _empleados;
            _empleados=aux;
            _numEmpleados--;
            if(!_numEmpleados) _empleados=0;

        }
    }
}

int Empresa::existeEmpleado(Empleado* empleado){
    for (int i = 0; i < _numEmpleados; i++) {
        if(*(_empleados[i])==(*empleado)){
            return i;
        }

    }
    
    return -1;

}

bool Empresa::operator ==(const Empresa& e){
    return _nombre==e._nombre;
}

void Empresa::mostrarDatos(){
    
    std::cout<<"Lista de empleados de la empresa "<<_nombre<<std::endl;
    for (int i = 0; i < _numEmpleados; i++) {
        std::cout<<"\tEmpleado con NIF: "<<_empleados[i]->getNif()
                 <<" de nómina: "<<_empleados[i]->getNomina()<<" euros"
                 <<" calculada como "<<_empleados[i]->getTipo()<<std::endl;

    }

    
}

Empleado* Empresa::getEmpleado(Empleado* e){
    
    for (int i = 0; i < _numEmpleados; i++) {
        if(*(_empleados[i])==(*e)){
            return _empleados[i];
        }

    }
    
    throw EmpleadoNoExiste("[Empresa::getEmpleado] empleado no encontrado"
                           " en el vector.");

}
