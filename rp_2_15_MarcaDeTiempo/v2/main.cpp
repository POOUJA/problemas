/**
 * @file main.cpp
 * @author Julián Sánchez Orellana
 *
 */

#include <cstdlib>
#include <iostream>
#include "MarcaDeTiempo.h"

using namespace std;

int main(int argc, char** argv) {

	try {
		// Defino las 3 marcas de tiempo
		MarcaDeTiempo t1(120840);
		MarcaDeTiempo t2(110940);
		MarcaDeTiempo t3;
	
		//1º Ejercicio
		std::cout <<"Compara: " <<  t1.getMarca() << " con " << t2.getMarca() <<std::endl;
		cout << (t1.Compara(t2)>0?"Es Mayor":"Es menor o igual")<< std::endl;

		//2º Ejercicio
		std::cout << "La diferencia de segundos es: " << std::endl;
		std::cout << t1.diferenciaSg(t2)<< std::endl;

		//3º Ejerccio
		t3.incrementoMin(40);
		std::cout << "Para la marca " << t3.getMarca() 
			<< " la hora es: "<<  t3.getHora() 
			<< " los minutos son: " << t3.getMinuto()
			<< " los segundos son: " << t3.getSg() << std::endl;
	} catch (std::string &e) {
		std::cerr << "Se produjo una excepción: " << e << std::endl;
	}

	return 0;
}



