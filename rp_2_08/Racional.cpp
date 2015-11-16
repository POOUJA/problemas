#include <string>

#include "Racional.h"

/**
 * @brief Constructor por defecto de la clase
 */
Racional::Racional() :
numerador(0)
, denominador(1) {
}

/**
 * @brief Constructor parametrizado 
 */
Racional::Racional(int numerador, int denominador) :
numerador(numerador)
, denominador(denominador) {
    if (denominador==0) throw (std::string) "Racional::constructor: el valor pasado por parámetro no puede ser 0";
}

/**
 * @brief Constructor de copia de la clase
 */

Racional::Racional(const Racional& orig) :
numerador(orig.numerador)
, denominador(orig.denominador) {
}

/**
 * @brief Destructor de clase
 */
Racional::~Racional() {
}

void Racional::setDenominador(int denominador) {
    if (denominador == 0) throw (std::string) "Racional::setDenominador: el valor pasado por parámetro no puede ser 0";
    this->denominador = denominador;
}

int Racional::getDenominador() const {
    return denominador;
}

void Racional::setNumerador(int numerador) {
    this->numerador = numerador;
}

int Racional::getNumerador() const {
    return numerador;
}


Racional Racional::sumar( const Racional& otro) const {
    return Racional( numerador*otro.denominador+denominador*otro.numerador, denominador*otro.denominador );
}
Racional Racional::restar( const Racional& otro) const {
    return Racional( numerador*otro.denominador-denominador*otro.numerador, denominador*otro.denominador );
}
Racional Racional::multiplicar( const Racional& otro) const {
    return Racional( numerador*otro.numerador, denominador*otro.denominador );
}
Racional Racional::dividir( const Racional& otro) const {
    return Racional( numerador*otro.denominador, denominador*otro.numerador );
}
int Racional::comparar( const Racional& otro )  const{
    return numerador*otro.denominador-denominador*otro.numerador;
}
Racional Racional::operator+( const Racional& otro ) const{
    return this->sumar(otro);
}
Racional Racional::operator-( const Racional& otro ) const{
    return this->restar(otro);
}
Racional Racional::operator*( const Racional& otro ) const{
    return this->multiplicar(otro);
}
Racional Racional::operator/( const Racional& otro ) const{
    return this->dividir(otro);
}

bool Racional::operator==(const Racional& otro) const {
    return (this==&otro || (numerador*otro.denominador==denominador*otro.numerador));
}

bool Racional::operator<(const Racional& otro) const {
    return  this!=&otro && (numerador*otro.denominador<denominador*otro.numerador);
}

bool Racional::operator<=( const Racional& otro) const {
    return operator<(otro) || operator==(otro);
}
bool Racional::operator>( const Racional& otro) const {
    return !(operator<=(otro));
}
bool Racional::operator>=( const Racional& otro) const {
    return operator>(otro)||operator==(otro);
}

bool Racional::operator!=( const Racional& otro) const {
    return !(operator==(otro));
}




