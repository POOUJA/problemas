/**
 *@file Tortuga.h
 *@author Julián Sánchez Orellana
 *
 */

#ifndef TORTUGA_H
#define TORTUGA_H


class Tortuga {
public:
    Tortuga(int x=0, int y=0);
    Tortuga(const Tortuga& orig);
    virtual ~Tortuga();
    void irA(int x, int y);
    avanza(int distancia);
    gira(int angulo);
    activaTrazo();
    desactivaTrazo();
    
private:
    int x;
    int y;
    int angulo;
};

#endif /* TORTUGA_H */

