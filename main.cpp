#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Tarea.h.cpp"

using namespace std;

//estructuras

int main(){

    //inicializacion de las listas
    List<Dispositivo>* listDispositivos = new List<Dispositivo>();
    List<Accion>* listAcciones = new List<Accion>();
    List<Parameters>* listParameters = new List<Parameters>();
    List<Tarea>* listTareas = new List<Tarea>();
    
    //crear dispositivos
    Dispositivo *dispositivo1 = new Dispositivo("bombillo", bombillo, "cuarto exterior");
    Dispositivo *dispositivo2 = new Dispositivo("sensor de humo", sensorHumo, "cocina");
    Dispositivo *dispositivo3 = new Dispositivo("parlante", parlante, "sala de estar");

    //agregar dispositivos a lista
    listDispositivos->add(dispositivo1);
    listDispositivos->add(dispositivo2);
    listDispositivos->add(dispositivo3); 
    
    //crear acciones y parametros
    Accion *accion1 = new Accion("encender", "estado", "encendido", encender);
    Accion *accion2 = new Accion("apagar", "estado", "apagado", apagar);
    Accion *accion3 = new Accion("cambiarColor", "color", "azul", cambiarColor);
    Accion *accion4 = new Accion("cambiarSencibilidad", "sencibilidad", "75%", cambiarSencibilidad);
    Accion *accion5 = new Accion("cambiarCancion", "cancion", "bohemian rhapsody", cambiarCancion);
    
    //agregar acciones a la lista
    listAcciones->add(accion1);
    listAcciones->add(accion2);
    listAcciones->add(accion3);
    listAcciones->add(accion4);
    listAcciones->add(accion5);
    
    //crear acciones por dispositivo
    AccionesPorDispositivo *accionPorDispositivo1 = new AccionesPorDispositivo(accion1->getTipoAccion(), dispositivo1->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo2 = new AccionesPorDispositivo(accion2->getTipoAccion(), dispositivo1->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo3 = new AccionesPorDispositivo(accion3->getTipoAccion(), dispositivo1->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo4 = new AccionesPorDispositivo(accion1->getTipoAccion(), dispositivo2->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo5 = new AccionesPorDispositivo(accion2->getTipoAccion(), dispositivo2->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo6 = new AccionesPorDispositivo(accion4->getTipoAccion(), dispositivo2->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo7 = new AccionesPorDispositivo(accion1->getTipoAccion(), dispositivo3->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo8 = new AccionesPorDispositivo(accion2->getTipoAccion(), dispositivo3->getTipoDips());
    AccionesPorDispositivo *accionPorDispositivo9 = new AccionesPorDispositivo(accion5->getTipoAccion(), dispositivo3->getTipoDips());

    //agregar acciones por dispositivo a la lista
    List<AccionesPorDispositivo>* listAccionesPorDispositivo1 = new List<AccionesPorDispositivo>();
    listAccionesPorDispositivo1->add(accionPorDispositivo1);
    listAccionesPorDispositivo1->add(accionPorDispositivo7);

    List<AccionesPorDispositivo>* listAccionesPorDispositivo2 = new List<AccionesPorDispositivo>();
    listAccionesPorDispositivo2->add(accionPorDispositivo2);
    listAccionesPorDispositivo2->add(accionPorDispositivo8);
    
    //crear tareas 
    Tarea *tarea1 = new Tarea("buenos dias", listAccionesPorDispositivo1);  //enciende el bombillo y el parlante
    Tarea *tarea2 = new Tarea("tomar siesta", listAccionesPorDispositivo2); //apaga el bombillo y el parlante

    //agregar tareas
    listTareas->add(tarea1);
    listTareas->add(tarea2);

    //ejecutar tareas
    tarea1->ejecutarTarea(tarea1, listAcciones, listDispositivos);
    tarea2->ejecutarTarea(tarea2, listAcciones, listDispositivos);
    
    cout<<"\n";
    return 0;
}