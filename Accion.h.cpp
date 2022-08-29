#include <iostream>
#include "Parameters.h.cpp"

#ifndef ACCION
#define ACCION 1

using namespace std;

enum TipoAccion {
    encender=0,
    apagar=1,
    cambiarColor=2,
    cambiarSencibilidad=3,
    cambiarCancion=4,
};

class Accion{
    private:
        string nombre;
        string llave;
        string valor;
        TipoAccion tipoAccion;
    
    public:
        Accion(string pNombre, string pLlave, string pValor, TipoAccion pTipoAccion){
            this->nombre = pNombre;
            this->llave = pLlave;
            this->valor = pValor;
            this->tipoAccion = pTipoAccion;
        }
    
    string getNombre(){
        return nombre;
    }

    string getLlave(){
        return llave;
    }

    string getValor(){
        return valor;
    }

    TipoAccion getTipoAccion(){
        return tipoAccion;
    }
};

#endif