#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include "mascotas.h"

eMascota *mas_newMas()
{
    eMascota *nuevaMascota = NULL;
    nuevaMascota = malloc(sizeof(eMascota));
    return nuevaMascota;
}

eMascota *mas_setAll(int id,char *nombre,char *tipo,int edad,float altura)
{
    eMascota *nuevaMascota;
    nuevaMascota = mas_newMas();

    if(nuevaMascota != NULL){
        mas_setId(nuevaMascota, id);
        mas_setNombre(nuevaMascota, nombre);
        mas_setTipo(nuevaMascota, tipo);
        mas_setEdad(nuevaMascota, edad);
        mas_setAltura(nuevaMascota, altura);
    }

    return nuevaMascota;
}

// inicio de setter
int mas_setId(eMascota *mascota,int id)
{
    int retorno = 0;

    if(mascota != NULL){
        mascota->id = id;
        retorno = 1;
    }

    return retorno;
}

int mas_setNombre(eMascota *mascota,char *nombre)
{
    int retorno = 0;

    if(mascota != NULL){
        strcpy(mascota->nombre,nombre);
        retorno = 1;
    }

    return retorno;
}

int mas_setTipo(eMascota *mascota,char *tipo)
{
    int retorno = 0;

    if(mascota != NULL){
        strcpy(mascota->tipo,tipo);
        retorno = 1;
    }

    return retorno;
}

int mas_setEdad(eMascota *mascota,int edad)
{
    int retorno = 0;

    if(mascota != NULL){
        mascota->edad = edad;
        retorno = 1;
    }

    return retorno;
}

int mas_setAltura(eMascota *mascota, float altura)
{
    int retorno = 0;

    if(mascota != NULL){
        mascota->altura = altura;
        retorno = 1;
    }

    return retorno;
}
