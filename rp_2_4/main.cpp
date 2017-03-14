/**
 *@file main.cpp
 *@author Julián Sánchez Orellana
 *
 */

#include <cstdlib>
#include "Tortuga.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    /*
    
                               (25,100)
                                 /\
                                /  \
                               /    \
                              /      \
                             /        \
                            /          \
                    (0,50)  ------------ (50,50)
                            |          |
                            |          |
                            |          |
                            |          |
                    (0,0)   ------------ (50,0)    
         
         */
    
    try{
        
        Tortuga a; // crea una tortuga posicionada en las coordenadas que se le pasan como parámetros y orientada hacia arriba
        a.activaTrazo(); // hace que la tortuga trace una línea en su próxmo desplazamiento
        
        // Este bucle creará el cuadrado principal
        for(int i=0; i<4; i++){
            a.avanza(50);
            a.gira(90);
        }
        /* Con el código de hasta ahora tendriamos algo parecido a esto
         
                            ------------
                            |          |
                            |          |
                            |          |
                            |          |
          Tortuga ->    <o  ------------     
         
         */
         
        a.desactivaTrazo(); // para que la tortuga no dibuje al desplazarse
        a.irA(50,50); // situaría la tortuga en la siguiente posicion
        
        /*
         
                            ------------ <o 
                            |          |
                            |          |
                            |          |
                            |          |
                            ------------     
         
         */
        a.activaTrazo(); // activa de nuevo el trazo
        a.irA(25,100); // dibuja hasta el pico situado en (25,100)
        a.irA(0,50); // termina el dibujo
         /*
                                 /\
                                /  \
                               /    \
                              /      \
                             /        \
                            /          \
                          o ------------ 
                            |          |
                            |          |
                            |          |
                            |          |
                            ------------     
         
         */
    }catch (FueraDeRango &e){
        std::cerr << "Se ha producido un error " << e.GetMotivo << endl;
    }

    return 0;
}

