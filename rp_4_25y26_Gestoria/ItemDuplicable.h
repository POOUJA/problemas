/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ItemDuplicable.h
 * Author: Alfonso
 *
 * Created on 27 de abril de 2016, 12:44
 */

#ifndef ITEMDUPLICABLE_H
#define ITEMDUPLICABLE_H

class ItemDuplicable {
public:
    ItemDuplicable();
    ItemDuplicable(const ItemDuplicable& orig);
    virtual ~ItemDuplicable();
    virtual ItemDuplicable* copia() const=0;
private:

};

#endif /* ITEMDUPLICABLE_H */

