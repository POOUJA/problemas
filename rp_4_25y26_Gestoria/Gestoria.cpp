/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestoria.cpp
 * Author: Alfonso
 * 
 * Created on 26 de abril de 2016, 19:57
 */

#include <string>

#include "EmpresaNoExiste.h"
#include "Gestoria.h"

Gestoria::Gestoria(std::string nombre):
_nombre(nombre),
_numEmpresas(0),
_empresas(0){
}

Gestoria::Gestoria(const Gestoria& orig):
_nombre(orig._nombre)
{
    if(_numEmpresas>=orig._numEmpresas){
        for (int i = 0; i < _numEmpresas; i++) {
            if(i<orig._numEmpresas)
                _empresas[i]=orig._empresas[i];
            else
                _empresas[i]=0;

        }

    }else{
        
        delete[] _empresas;
        _empresas=0;
        
        _empresas=new Empresa*[orig._numEmpresas];
        for (int i = 0; i < orig._numEmpresas; i++) {
            _empresas[i]=orig._empresas[i];

        }

    }
    
    _numEmpresas=orig._numEmpresas;
}

Gestoria::~Gestoria() {
    
    if(_empresas)
        delete[] _empresas;
}

void Gestoria::asignarEmpresa(Empresa* empresa){
    if(empresa){
        if(buscarEmpresa(empresa)==-1){
            Empresa* *aux=new Empresa*[_numEmpresas+1];
            
            for (int i = 0; i < _numEmpresas; i++) {
                aux[i]=_empresas[i];

            }
            
            aux[_numEmpresas]=empresa;
            delete[] _empresas;
            _empresas=aux;
            _numEmpresas++;

        }
    }
}

void Gestoria::eliminarEmpresa(Empresa* empresa){
    
    if(empresa){
        int posicion=buscarEmpresa(empresa);
        if(posicion!=-1){
            Empresa* *aux=0;
            if(_numEmpresas>2)
                aux=new Empresa*[_numEmpresas-1];
            bool encontrado=false;
            
            for (int i = 0; i < _numEmpresas-1; i++) {
                if(i==posicion)
                    encontrado=true;
                
                if(encontrado){
                    aux[i]=_empresas[i+1];
                    
                }else{
                    aux[i]=_empresas[i];
                }
                

            }
            
            delete[] _empresas;
            _empresas=aux;
            _numEmpresas--;

        }
    }
}

int Gestoria::buscarEmpresa(Empresa* empresa){
    
    for (int i = 0; i < _numEmpresas; i++) {
        if(*(_empresas[i])==(*empresa)){
            return i;
        }

    }
    return -1;

}

Empresa* Gestoria::getEmpresa(Empresa* empresa){
    
    for (int i = 0; i < _numEmpresas; i++) {
        if(*(_empresas[i])==(*empresa)){
            return _empresas[i];
        }

    }
    
    throw EmpresaNoExiste("[Gestoria::getEmpresa] no existe la empresa solicitada.");

}

