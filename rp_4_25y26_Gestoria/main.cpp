/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 18:41
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Gestoria.h"
#include "Empleado.h"
#include "EmpleadoComision.h"
#include "EmpleadoHoras.h"
#include "EmpleadoSFijo.h"
#include "Empresa.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Gestoria Stark("Stark");
    
    Empresa e("Guardia de la noche");
    EmpleadoComision e1("Jon Nieve","1568497");
    EmpleadoHoras e2("Edd el Penas","4784785");
    EmpleadoSFijo e3("Samwell","1421463");
    e2.aumentarHoras(8);
    e1.aumentarVentas(5);
    
    cout <<"Asignamos los 3 empleados a la empresa creada..."<<endl;
    e.asignarEmpleado(&e1);
    e.asignarEmpleado(&e3);
    e.asignarEmpleado(&e2);
    Stark.asignarEmpresa(&e);
    Stark.getEmpresa(&e)->mostrarDatos();
    
    cout<<"Despedimos algunos empleados..."<<endl;
    e.despedirEmpleado(&e2);
    e.despedirEmpleado(&e1);
    e.mostrarDatos();
    

    return 0;
}

