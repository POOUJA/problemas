/** 
 * @file   Dado.cpp
 * @author Alfonso
 * 
 * @date Created on 25 de febrero de 2016
 */

#include "Dado.h"
#include <cstdlib>
#include "ParametroNoValido.h"


/**
 * @brief Constructor por defecto.Se inicializan todas los atributos a 0.
 * Se reserva espacio en memoria dinámica para el vector con las ocurrencias de 
 * cada cara.
 */
Dado::Dado()
:numTiradas(0),
puntuacionTotal(0),
ultimaTirada(0),
contadorCara(0),
numCaras(0)
{
    contadorCara=0;
}

/**
 * @brief Constructor de copia.
 * @param orig objeto de tipo dado del que se copiarán sus atributos.
 */
Dado::Dado(const Dado& orig)
:
numTiradas(orig.numTiradas),
puntuacionTotal(orig.puntuacionTotal),
ultimaTirada(orig.ultimaTirada),
numCaras(orig.numCaras)
{
    // Copiamos los valores del vector de orig en este objeto.
    contadorCara=new int[numCaras];
    for (int i = 0; i < numCaras; i++) {
        contadorCara[i]=orig.contadorCara[i];

    }

}

/**
 * @brief Destructor.Libera además la memoria reservada para contadorCara.
 */
Dado::~Dado() {
    if(contadorCara)
        delete[] contadorCara;
}

/**
 * @brief Getter de ultimaTirada.
 * @return devuelve el valor de la última tirada.
 */
int Dado::getUltimaTirada() const {
    return ultimaTirada;
}

/**
 * @brief Getter de puntuación total.
 * @return devuelve la puntuación total conseguida por el jugador.
 */
int Dado::getPuntuacionTotal() const {
    return puntuacionTotal;
}

/**
 * @brief Inicializa el número de tiradas.
 * @param tiradas valor que se asignada al número de tiradas.
 */
void Dado::setNumTiradas(int tiradas) {
    if(tiradas<0)
        throw ParametroNoValido("Dado.cpp","setNumTiradas","Las tiradas deben ser "
                                "mayores de 0.");
    this->numTiradas=tiradas;
        
}

/**
 * @brief Getter de numTiradas.
 * @return valor de numTiradas.
 */
int Dado::getNumTiradas() const {
    return numTiradas;
}

/**
 * @brief Cambia el valor del atributo numCaras si es correcto , si no , lanza 
 *        una excepción.
 * @param caras valor para numCaras.
 */
void Dado::setNumCaras(int caras) {
    if(caras<=0)
        throw ParametroNoValido("Dado.cpp","setNumCaras","Número de caras"
                                " introducidas menor o igual que 0.");
    // Necesitamos un vector auxiliar para almacenar los datos anteriores pero 
    // que tenga el nuevo tamaño.
    int *aux=new int[caras];
    int i=0;
    
    while(i<caras){
        // Es decir , si ese índice estaba en el vector contadorCara.
        if(i<numCaras)
            aux[i]=contadorCara[i];
        else
            aux[i]=0;
        i++;
    }
    
    delete[] contadorCara;
    
    contadorCara=aux;
    numCaras=caras;
        
}

/**
 * @brief Getter de contadorCara.
 * @return Devuelve la dirección de contadorCara.
 */
int Dado::getContadorCara(int cara) const {
    // Si introduce cara 1 accedemos a contadorCara[0].
    return contadorCara[cara-1];
}

/**
 * @brief Realiza una nueva tirada que conlleva modificar todos los atributos.
 *
 */
void Dado::nuevaTirada(){
    ultimaTirada=rand()%numCaras+1;
    contadorCara[ultimaTirada-1]++;
    puntuacionTotal+=ultimaTirada;
    numTiradas++;
}

