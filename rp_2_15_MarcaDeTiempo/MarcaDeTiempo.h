/* 
 * @file   MarcaDeTiempo.h
 * @author: David Ruiz Bravo
 *
 * @date 28 de febrero de 2017
 */

#ifndef MARCADETIEMPO_H
#define MARCADETIEMPO_H

class MarcaDeTiempo{

public:
    MarcaDeTiempo();

    MarcaDeTiempo(int hh, int mm, int ss);

    MarcaDeTiempo(const MarcaDeTiempo &orig);

    void setHora(int h);

    int getHora() const;

    void setMinuto(int m);

    int getMinuto() const;

    void setSg(int s);

    int getSg() const;

    int diferenciaSg(const MarcaDeTiempo &x);

    void incrementoMin(int n);
    
   int Compara(const MarcaDeTiempo &y);

private:
    int h,m,s;
};

#endif /* MARCADETIEMPO_H */

