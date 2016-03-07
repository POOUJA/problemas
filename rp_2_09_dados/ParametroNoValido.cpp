/** 
 * @file   ParametroNoValido.cpp
 * @author Alfonso
 * 
 * @date Created on 25 de febrero de 2016
 */


#include "ParametroNoValido.h"
#include <string>

/**
 * @brief Constructor por defecto parametrizado
 * @param fichero
 * @param funcion
 * @param mensaje
 */
ParametroNoValido::ParametroNoValido(std::string fichero,std::string funcion,std::string mensaje)
:
fichero(fichero),
funcion(funcion),
mensaje(mensaje){}

/**
 * @brief Constructor de copia.
 * @param orig
 */
ParametroNoValido::ParametroNoValido(const ParametroNoValido& orig)
:
fichero(orig.fichero),
funcion(orig.funcion),
mensaje(orig.mensaje){}


/**
 * @brief Destructor.
 */
ParametroNoValido::~ParametroNoValido() {
}

/**
 * @brief "Getter" de los 3 atributos juntos.
 * @return Devuelve el mensaje completo de la excepción.
 */
std::string ParametroNoValido::queOcurre(){
    return fichero+","+funcion+":"+mensaje;
}
