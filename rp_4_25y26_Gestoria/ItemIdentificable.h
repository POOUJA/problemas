/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemNombre.h
 * Author: Alfonso
 *
 * Created on 26 de abril de 2016, 20:18
 */

#ifndef ITEMNOMBRE_H
#define ITEMNOMBRE_H

#include <string>

class ItemNombre {
public:
    ItemNombre();
    ItemNombre(const ItemNombre& orig);
    virtual ~ItemNombre();
    virtual std::string getTipo() const=0;
private:

};

#endif /* ITEMNOMBRE_H */

