#include <string>
#include <iostream>
#include "Dispositivo.h.cpp"

using namespace std;

class Tarea{
    private:
        string nombre;
        List<AccionesPorDispositivo> *listAccionPorDispositivo = new List<AccionesPorDispositivo>();

    public:
        Tarea(string pNombre, List<AccionesPorDispositivo> * pListAccionPorDispositivo){
            this->nombre = pNombre;
            this->listAccionPorDispositivo = pListAccionPorDispositivo;
        }

        string getNombre(){
            return nombre;
        }

        void ejecutarTarea(Tarea * tarea, List<Accion> * listAcciones, List<Dispositivo> * listDispositivo){
            cout<<"\nTarea ejecutada: "<<tarea->getNombre()<<endl;
            for(int i=0; i<tarea->listAccionPorDispositivo->getSize(); i++){
                int posDispos = tarea->listAccionPorDispositivo->find(i)->getTipoDisp();
                int posAccion = tarea->listAccionPorDispositivo->find(i)->getTipoAccion();
                
                Dispositivo * dispositivo = listDispositivo->find(posDispos);
                Accion * accion = listAcciones->find(posAccion);
                
                string nombreDisp = dispositivo->getNombre();

                string nombreAccion = accion->getNombre();
                string llave = accion->getLlave();
                string valor = accion->getValor();
                cout<<"-El dispositivo "<<nombreDisp<<" se ha "<<valor<<endl;  
            }
        }       
};


