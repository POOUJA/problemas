/** 
 * @file   Dado.h
 * @author Alfonso
 * 
 * @date Created on 25 de febrero de 2016
 */


#ifndef DADO_H
#define DADO_H

class Dado {

public:
    //Constructor por defecto , no tiene que dar ningún parámetro.
    Dado();
    
    //Constructor de copia.
    Dado(const Dado& orig);
    
    //Destructor.
    ~Dado();
    
    // Getters setters...
    int getUltimaTirada() const;
    int getPuntuacionTotal() const;
    //El ejercicio nos pide poder inicializar el número de tiradas de un
    // dado.
    void setNumTiradas(int tiradas);
    int getNumTiradas() const;
    void setNumCaras(int caras);
    int getContadorCara(int cara) const;
    
    // Generador de la tirada.
    void nuevaTirada();

private:
    
    
    // Puntero a memoria dinámica donde podemos consultar el número de veces que
    // ha salido cada cara.
    int *contadorCara;
    int numCaras;
    int numTiradas;
    int puntuacionTotal;
    int ultimaTirada;
};

#endif /* DADO_H */
