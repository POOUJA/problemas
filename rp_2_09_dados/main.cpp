/** Ejercicio 9 Juego de Dados
 * @file  main.cpp
 * @author Alfonso
 * 
 * @date Created on 25 de febrero de 2016
 */


#include <cstdlib>
#include "Dado.h"
#include <iostream>
#include "ParametroNoValido.h"


using namespace std;

/** Simulación del Juego de dados de las 21 para n jugadores
 * 
 */
int main(int argc, char** argv) {
    //Semilla para generar valores aleatorios.
    srand(time(NULL));
    
    // Número de jugadores.
    int numJugadores=0;
    do{
        std::cout<<"Número de jugadores: ";
        std::cin>>numJugadores;
    }while(numJugadores<0);
    
    //Creamos tantos dados como jugadores.
    Dado *dadoJugador=new Dado[numJugadores];
    int numCaras=0;
    
    //Pedimos número de caras al usuario y recogemos excepción si introduce un
    //número erróneo.
    try{
        std::cout<<"Número de caras del dado que va a utilizar: ";
        std::cin>>numCaras;
        
        // Si el número de caras es válido , entonces modificamos todos los 
        // objetos de ese vector.
        for (int i = 0; i < numJugadores; i++) {
            dadoJugador[i].setNumCaras(numCaras);

        }

    }catch(ParametroNoValido &e){
        
        //Tenemos como valor por defecto de numCaras 0 , por lo tanto si 
        //no se modifica su valor , va a fallar. Lanzamos la excepción de nuevo
        //para terminar la ejecución.
        std::cerr<<e.queOcurre()<<std::endl;
        throw e;
        
    }
    
    std::cout<<"---------------------------"<<std::endl;
    
    int contador=-1,i=0,turno=1;
    char continuar;
    
    // El contador se incrementa cada vez que se produce una tirada.
    // Si no se producen tiradas en un turno termina.
    while(contador!=0){
        contador=0;
        i=0;
        
        std::cout<<"Turno :"<<turno<<std::endl;
        
        //Recorre a todos los jugadores.
        while(i!=numJugadores){
            
            // Si tuviera 21  o más ya habría terminado ese jugador.
            if(dadoJugador[i].getPuntuacionTotal()<21){
                
                contador++;
                
                // Tirada.
                dadoJugador[i].nuevaTirada();
                
                std::cout<<"Jugador: "<<i+1<<std::endl;
                std::cout<<"Ultima tirada: "<<dadoJugador[i].getUltimaTirada()
                         <<std::endl;
                std::cout<<"Puntuación: "<<dadoJugador[i].getPuntuacionTotal()
                         <<std::endl;
                
                do{
                    std::cout<<"Pulse c para continuar: ";
                    std::cin>>continuar;
                }while(continuar!='c');
            }
            i++;
        }
        
        // Si ha contado 0 jugadores.
        if(!contador)
            std::cout<<"GAME OVER"<<std::endl;
        turno++;
    }
    
    // Comprobamos quién tiene 21 puntos y menos tiradas.
    // minTiradas=90 , el número máximo de tiradas es 21 (21 tiradas de 1).)
    int indiceGanador=-1,minTiradas=90,j=0;
    
    while(j<numJugadores){
       if(dadoJugador[j].getPuntuacionTotal()==21 && dadoJugador[j].getNumTiradas()<minTiradas){
           
           minTiradas=dadoJugador[j].getNumTiradas();
       }
       
       j++;
    }
    
    // Vector en memoria dinámica con los índices de los ganadores.
    j=0;
    int *ganadores=new int[numJugadores];
    int k=0,numGanadores=0;
    
    
    // Vemos quién tiene el mismo número que minTiradas.
    while(j<numJugadores){
        
        if(dadoJugador[j].getNumTiradas()==minTiradas){
            
            ganadores[k]=j+1;
            numGanadores++;
            k++;
        }
        
        j++;
    }
    
    
    //Mostramos los ganadores.
    if(numGanadores>0){
        
        std::cout<<"Los ganadores son: "<<std::endl;
        j=0;
        
        while(j<numGanadores){
            int unGanador=ganadores[j];
            std::cout<<"Jugador "<< unGanador
					 <<" con " << dadoJugador[unGanador-1].getPuntuacionTotal()
					 <<" puntos y " << dadoJugador[unGanador-1].getNumTiradas()
					 <<" tiradas"<<std::endl;

            j++;
        }
    } else {
		std::cout << "Nadie ha ganado!. Todos se han pasado de 21 " << std::endl;
	}
    
    
    //Liberamos espacio reservado en memoria dinámica.
    delete[] dadoJugador;

    delete[] ganadores;
    
    return 0;
}

