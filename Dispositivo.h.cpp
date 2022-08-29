#include "Accion.h.cpp"
#include "List.h.cpp"

#ifndef DISPOSITIVO
#define DISPOSITIVO 1

using namespace std;

enum TipoDisp {  // enums literales para identificar dispositivos
	bombillo=0,
	sensorHumo=1,
	parlante=2,
};


class Dispositivo{
    private:
        string nombre;
        TipoDisp tipoDisp;
        string habitacion;
        
    public:
        Dispositivo(string pNombre, TipoDisp pTipoDisp, string pHabitacion){
            this->nombre = pNombre;
            this->tipoDisp = pTipoDisp;
            this->habitacion = pHabitacion;
        }

        string getNombre(){
            return nombre;
        }

        TipoDisp getTipoDips(){
            return tipoDisp;
        }

        string getHabitacion(){
            return habitacion;
        }
};

class AccionesPorDispositivo{
    private:
        TipoAccion accionDisponible;
        TipoDisp tipoDisp;

    public:
        AccionesPorDispositivo(TipoAccion pAccionDisponible, TipoDisp pTipoDispostivo){
            this->accionDisponible = pAccionDisponible;
            this->tipoDisp = pTipoDispostivo;
        }

        TipoAccion getTipoAccion(){
            return accionDisponible;
        }

        TipoDisp getTipoDisp(){
            return tipoDisp;
        }
};

#endif