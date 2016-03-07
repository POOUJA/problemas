/** 
 * @file   ParametroNoValido.h
 * @author Alfonso
 * 
 * @date Created on 25 de febrero de 2016
 */


#ifndef PARAMETRONOVALIDO_H
#define PARAMETRONOVALIDO_H
#include <iostream>
#include <string>

class ParametroNoValido {

public:
    
    // Constructor por defecto parametrizado.
    ParametroNoValido(std::string fichero,std::string funcion,std::string mensaje);
    
    //Constructor de copia,.
    ParametroNoValido(const ParametroNoValido& orig);
    
    //Destructor.
    virtual ~ParametroNoValido();
    
    // Obtenemos la excepción completa.
    std::string queOcurre();
private:
    
    //Atributos.
    std::string fichero;
    std::string funcion;
    std::string mensaje;
};

#endif /* PARAMETRONOVALIDO_H */


