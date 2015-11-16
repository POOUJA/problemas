/** 
 * @brief Resolución del problema 8 de la relación de ejercicios del tema 2 (sobre los números racionales)
 * @file main.cpp
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @date 11 de noviembre de 2015, 20:22
 */

#include <iostream>
#include <cstdlib>
#include "Racional.h"
using namespace std;

void show(const Racional& r) {
    if (r.getNumerador() == r.getDenominador()) {
        cout << 1;
        return;
    }
    if (r.getNumerador() == 0) {
        cout << 0;
        return;
    }
    if (r.getDenominador() == 1) {
        cout << r.getNumerador();
        return;
    }
    cout << r.getNumerador() << "/" << r.getDenominador();
}

/**
 * @brief Función principal
 * @argc Número de argumentos pasados por línea de órdenes
 * @argc Caractares pasados como argumentos por línea de órdenes
 * @return 0 si todo funciona bien; distinto de 0 en otro caso.
 */
int main(int argc, char** argv) {
    try {
        cout << "Primeros datos" << endl;
        Racional a(4, 5);
        Racional b(5, 4);

        Racional suma = a.sumar(b);
        Racional resta = a.restar(b);
        Racional multip = a.multiplicar(b);
        Racional divid = a.dividir(b);

        Racional suma2 = a + b;
        Racional resta2 = a - b;
        Racional multip2 = a*b;
        Racional divid2 = a / b;

        // Salida por consola
        cout << " a es ";
        show(a);
        cout << endl;
        cout << " b es ";
        show(b);
        cout << endl;
        cout << " suma es ";
        show(suma);
        cout << endl;
        cout << " resta es ";
        show(resta);
        cout << endl;
        cout << " multip es ";
        show(multip);
        cout << endl;
        cout << " divid es ";
        show(divid);
        cout << endl;
        cout << " suma2 es ";
        show(suma2);
        cout << endl;
        cout << " resta2 es ";
        show(resta2);
        cout << endl;
        cout << " multip2 es ";
        show(multip2);
        cout << endl;
        cout << " divid2 es ";
        show(divid2);
        cout << endl;
        cout << "comparar a y b devuelve " << a.comparar(b) << endl;
        if (a < b) cout << "a es menor que b" << endl;
        if (a <= b) cout << "a es menor o igual que b" << endl;
        if (a == b) cout << "a es igual que b" << endl;
        if (a > b) cout << "a es mayor que b" << endl;
        if (a >= b) cout << "a es mayor o igual que b" << endl;
    } catch (std::string e) {
        cerr << "error: " << e << endl;
    }

    try {
        cout << "Segundos datos" << endl;
        Racional a(6);
        Racional b(2, 0);

        Racional suma = a.sumar(b);
        Racional resta = a.restar(b);
        Racional multip = a.multiplicar(b);
        Racional divid = a.dividir(b);

        Racional suma2 = a + b;
        Racional resta2 = a - b;
        Racional multip2 = a*b;
        Racional divid2 = a / b;

        // Salida por consola
        cout << " a es ";
        show(a);
        cout << endl;
        cout << " b es ";
        show(b);
        cout << endl;
        cout << " suma es ";
        show(suma);
        cout << endl;
        cout << " resta es ";
        show(resta);
        cout << endl;
        cout << " multip es ";
        show(multip);
        cout << endl;
        cout << " divid es ";
        show(divid);
        cout << endl;
        cout << " suma2 es ";
        show(suma2);
        cout << endl;
        cout << " resta2 es ";
        show(resta2);
        cout << endl;
        cout << " multip2 es ";
        show(multip2);
        cout << endl;
        cout << " divid2 es ";
        show(divid2);
        cout << endl;
        cout << "comparar a y b devuelve " << a.comparar(b) << endl;
        if (a < b) cout << "a es menor que b" << endl;
        if (a <= b) cout << "a es menor o igual que b" << endl;
        if (a == b) cout << "a es igual que b" << endl;
        if (a > b) cout << "a es mayor que b" << endl;
        if (a >= b) cout << "a es mayor o igual que b" << endl;
    } catch (std::string e) {
        cerr << "error: " << e << endl;
    }

    try {
        cout << "Terceros datos" << endl;
        Racional a(3, 2);
        Racional b(3, 2);

        Racional suma = a.sumar(b);
        Racional resta = a.restar(b);
        Racional multip = a.multiplicar(b);
        Racional divid = a.dividir(b);

        Racional suma2 = a + b;
        Racional resta2 = a - b;
        Racional multip2 = a*b;
        Racional divid2 = a / b;

        // Salida por consola
        cout << " a es ";
        show(a);
        cout << endl;
        cout << " b es ";
        show(b);
        cout << endl;
        cout << " suma es ";
        show(suma);
        cout << endl;
        cout << " resta es ";
        show(resta);
        cout << endl;
        cout << " multip es ";
        show(multip);
        cout << endl;
        cout << " divid es ";
        show(divid);
        cout << endl;
        cout << " suma2 es ";
        show(suma2);
        cout << endl;
        cout << " resta2 es ";
        show(resta2);
        cout << endl;
        cout << " multip2 es ";
        show(multip2);
        cout << endl;
        cout << " divid2 es ";
        show(divid2);
        cout << endl;
        cout << "comparar a y b devuelve " << a.comparar(b) << endl;
        if (a < b) cout << "a es menor que b" << endl;
        if (a <= b) cout << "a es menor o igual que b" << endl;
        if (a == b) cout << "a es igual que b" << endl;
        if (a > b) cout << "a es mayor que b" << endl;
        if (a >= b) cout << "a es mayor o igual que b" << endl;
    } catch (std::string e) {
        cerr << "error: " << e << endl;
    }
    return 0;
}


