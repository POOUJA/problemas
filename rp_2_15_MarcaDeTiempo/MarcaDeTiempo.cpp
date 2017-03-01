/* 
 * @file   MarcaDeTiempo.cpp
 * @author: David Ruiz Bravo
 *
 * @date 28 de febrero de 2017
 */

#include <string>
#include <cstdlib>
#include <string>
#include "MarcaDeTiempo.h"


MarcaDeTiempo::MarcaDeTiempo()
	:h(0),m(0),s(0){
};

MarcaDeTiempo::MarcaDeTiempo(int hh, int mm, int ss)
	: h(hh),m(mm),s(ss){
}

MarcaDeTiempo::MarcaDeTiempo(const MarcaDeTiempo &orig)
	: h(orig.h),m(orig.m),s(orig.s){
}

void MarcaDeTiempo::setHora(int h){
    this->h=h;
}

int MarcaDeTiempo::getHora() const{
    return h;
};

void MarcaDeTiempo::setMinuto(int m){
    if (m>=60)
        throw std::string("marca.cpp: setMinuto: Minuto incorrecto");
    this->m=m;
}

int MarcaDeTiempo::getMinuto() const{
    return m;
};

void MarcaDeTiempo::setSg(int s){
    if (s>=60)
        throw std::string("marca.cpp: setSg: Sg incorrecto");
    this->s=s;
}

int MarcaDeTiempo::getSg() const{
    return s;
};

int MarcaDeTiempo::diferenciaSg(const MarcaDeTiempo &x){
    return abs((h*3600+m*60+s) - (x.h*3600+x.m*60+x.s));
}

void MarcaDeTiempo::incrementoMin(int n){
    if (n<=0)
        throw std::string("marca.cpp: incrementoMin: minutos incorrectos");

    m=(m+n)%60;
    h=h+ (m+n)/60;
}

int MarcaDeTiempo::Compara(const MarcaDeTiempo &y){
    if((h==y.h) && (m==y.m) && (s==y.s)){
        return 0;
    }
    if((h>=y.h) && (m>=y.m) && (s>y.s)){
        return 1;
    } else return -1;
}
