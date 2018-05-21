#include "Rectangle.h"

int Rectangle::obtenirCoordonnee_xHG(){
    return xHG;
}

int Rectangle::obtenirCoordonnee_xBD(){
    return xHG+largeur;
}

int Rectangle::obtenirCoordonnee_yHG(){
    return yHG;
}

int Rectangle::obtenirCoordonnee_yBD(){
    return yHG-hauteur;
}

unsigned int Rectangle::obtenirHauteur(){
    return hauteur;
}

unsigned int Rectangle::obtenirLargeur(){
    return largeur;
}

void Rectangle::modifierCoordonnee_xHG(int data){
    xHG=data;
}

void Rectangle::modifierCoordonnee_yHG(int data){
    yHG=data;
}

void Rectangle::modifierHauteur(unsigned int data){
    if (data>0)
        hauteur=data;
    else
        hauteur=1;
}

void Rectangle::modifierLargeur(unsigned int data){
    if (data>0)
        largeur=data;
    else
        largeur=1;
}

void Rectangle::englober(Rectangle& A,Rectangle& B){
    if(A.xHG>B.xHG)
        xHG=B.xHG;
    else
        xHG=A.xHG;
    
    if(A.yHG>B.yHG)
        yHG=A.yHG;
    else
        yHG=B.yHG;
    
    if(A.obtenirCoordonnee_xBD()>B.obtenirCoordonnee_xBD())
        largeur=A.obtenirCoordonnee_xBD()-xHG;
    else
        largeur=B.obtenirCoordonnee_xBD()-xHG;
    
    if(A.obtenirCoordonnee_yBD()>B.obtenirCoordonnee_yBD())
        hauteur=yHG-B.obtenirCoordonnee_yBD();
    else
        hauteur=yHG-A.obtenirCoordonnee_yBD();
}

