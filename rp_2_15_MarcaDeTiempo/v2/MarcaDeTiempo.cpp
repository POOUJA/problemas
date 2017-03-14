/** 
 * @file MarcaDeTiempo.cpp
 * @author Julián Sánchez Orellana
 * 
 */
#include <string>
#include <cstdlib>
#include "MarcaDeTiempo.h"
#include <iostream>

/**
 * @brief Constructor por defecto
 * @param marca toma el valor por defecto 120000
 */

MarcaDeTiempo::MarcaDeTiempo():
    marca(120000){
    }

/**
 * @brief Constructor parametrizado
 * @param marca toma el valor que se le asigne por parámetro
 */

MarcaDeTiempo::MarcaDeTiempo(int marca):
    marca(marca){
    }

/**
 * @brief Constructor copia
 * @param marca toma el valor que se le asigne por parámetro copiándolo
 */

MarcaDeTiempo::MarcaDeTiempo(const MarcaDeTiempo& orig) :
    marca(orig.marca){
    }

int MarcaDeTiempo::getMarca() const {
	return marca;
}
// He modificado los get para que reorganicen la fecha de forma que se separen horas, minutos y segundos.

void MarcaDeTiempo::setHora(int hora){
    if (hora>=24)
        throw std::string("marca.cpp: setHora: Hora incorrecta");
    this->marca = hora*10000+getMinuto()*100+getSg();
}

int MarcaDeTiempo:: getHora() const {
    return (marca/10000);
};

void MarcaDeTiempo::setMinuto(int min){
      if (min>=60)
        throw std::string("marca.cpp: setMinuto: Minuto incorrecto");
 
	this->marca = min*100+getHora()*10000+getSg();
}

int MarcaDeTiempo::getMinuto() const {
    int m;
    m = (((marca%10000)- marca%100)/100);
   return m;
};

void MarcaDeTiempo::setSg(int seg){
     if (seg>=60)
        throw std::string("marca.cpp: setSg: Sg incorrecto");
    this->marca = seg+getHora()*10000+getMinuto()*100;
}

int MarcaDeTiempo::getSg() const {
    int s;
    s = marca%100;
    return s;
};

/**
 * @brief Compara dos Marcas de Tiempo
 * @param a Una marca de tiempo
 * @param b Otra marca de tiempo
 * @return 0 si son iguales, valor positivo si a>b y valor negativo  si a<b
 */

int MarcaDeTiempo::Compara(const MarcaDeTiempo &y){
    return marca-y.marca;
}

/**
 * @brief Diferencia de segundos de dos Marcas de Tiempo
 * @param a Una marca de tiempo
 * @param b Otra marca de tiempo
 * @return Segundos de diferencia
 */
int MarcaDeTiempo::diferenciaSg(const MarcaDeTiempo &x){
    return abs((getHora()*3600+getMinuto()*60+getSg()) - (x.getHora()*3600+x.getMinuto()*60+x.getSg()));
}

/**
 * @brief Se incrementa un número de minutos a una marca de tiempo
 * @param a MarcaDeTiempo
 * @param incremento cantidad de minutos a incrementar
 * @return valor que debe tener el atributo hora que se implementará en el main.cpp con el SetHora
 */
void MarcaDeTiempo::incrementoMin(int n){
    if (n<=0)
        throw std::string("marca.cpp: incrementoMin: minutos incorrectos");
    
    //Creo dos variables con los minutos y horas por separados para poder modificarlas
    
    int min,hor;
    min = ((getMinuto()+n)%60)*100;
    hor = (getHora()+ ((getMinuto()+n))/60)*10000;
    
    //Le asigno el nuevo valor al objeto hora
    
    marca = hor + min + getSg();
}
