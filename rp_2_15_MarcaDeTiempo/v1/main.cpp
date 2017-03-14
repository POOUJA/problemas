/* 
 * @file  main.cpp 
 * @author: David Ruiz Bravo
 *
 * @date 28 de febrero de 2017
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "MarcaDeTiempo.h"

using namespace std;

int main(int argc, char** argv) {

	try {
		// Defino las 3 marcas de tiempo
		MarcaDeTiempo t1(8,8,40);
		MarcaDeTiempo t2(8,9,40);
		MarcaDeTiempo t3;


		//1º Ejercicio
		std::cout <<"Compara: " << std::endl;
		std::cout << t1.Compara(t2)<< std::endl;

		//2º Ejercicio
		std::cout << "La diferencia de segundos es: " << std::endl;
		std::cout << t1.diferenciaSg(t2)<< std::endl;

		//3º Ejerccio
		t3.incrementoMin(3);
		std::cout << "La hora es: "<<  t3.getHora() 
				  << " el minuto es: " << t3.getMinuto() 
				  << " los segundos son: " << t3.getSg() << std::endl;
	} catch (std::string &e) {
		std::cerr << "Se produjo una excepción: " << e << std::endl;
	}
    
    return 0;
}

