/** 
 * @brief Implementación de la clase Racional para la relación de problemas del tema 2
 * @file Racional.h
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @date 11 de noviembre de 2015, 20:23
 */





#ifndef RACIONAL_H
#define	RACIONAL_H

class Racional {
public:
    Racional();
    Racional(int numerador, int denominador = 1);
    Racional(const Racional& orig);
    virtual ~Racional();
    void setDenominador(int denominador);
    int getDenominador() const;
    void setNumerador(int numerador);
    int getNumerador() const;
    Racional sumar(const Racional& otro) const;
    Racional restar(const Racional& otro) const;
    Racional multiplicar(const Racional& otro) const;
    Racional dividir(const Racional& otro) const;
    int comparar(const Racional& otro) const;
    Racional operator + (const Racional& otro) const;
    Racional operator - (const Racional& otro) const;
    Racional operator * (const Racional& otro) const;
    Racional operator / (const Racional& otro) const;
    bool operator==(const Racional& otro) const;
    bool operator<(const Racional& otro) const;
    bool operator<=( const Racional& otro) const;
    bool operator>( const Racional& otro) const;
    bool operator>=( const Racional& otro) const;

    bool operator!=( const Racional& otro) const;

private:
    int numerador;
    int denominador;

};

#endif	/* RACIONAL_H */

