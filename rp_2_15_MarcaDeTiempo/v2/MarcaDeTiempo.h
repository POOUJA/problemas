/**
 * @file MarcaDeTiempo.h
 * @author Julián Sánchez Orellana
 * 
 */

#ifndef MARCADETIEMPO_H
#define MARCADETIEMPO_H


class MarcaDeTiempo{

public:
    MarcaDeTiempo();

    MarcaDeTiempo(int marca);

    MarcaDeTiempo(const MarcaDeTiempo &orig);
	int getMarca() const;
    
    void setHora(int hora);

    int getHora()const;
    
    void setMinuto(int min);

    int getMinuto()const;

    void setSg(int seg);

    int getSg()const;

    int diferenciaSg(const MarcaDeTiempo &x);

    void incrementoMin(int n);
    
   int Compara(const MarcaDeTiempo &y);

private:
    int marca;///< marca de tiempo en forma HHMMSS
};
#endif /* MARCADETIEMPO_H */

