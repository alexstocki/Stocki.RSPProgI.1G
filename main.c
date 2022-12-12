#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include "mascotas.h"

int generarArchivoBin(char *fileName, eMascota *mascota);
int generarArchivoTexto(char *fileName, eMascota *mascota);

int main()
{
    eMascota *m1 = mas_setAll(1, "Rocky", "Ovejero", 5, 1.10);
    eMascota *m2 = mas_setAll(2, "Ronda", "Bulldog", 3, 0.97);

    if (generarArchivoBin("archivoUno.dat", m1) && generarArchivoTexto("archivoUno.txt", m2))
    {
        printf("Archivos generados\n");
    } else {
        printf("ERROR. Uno o ambos archivos no puedieron ser tratados");
    }

    /*generarArchivoBin("archivoUno.dat", m1);
    generarArchivoTexto("archivoUno.txt", m2);*/

    return 0;
}

int generarArchivoBin(char *fileName,eMascota *mascota)
{
    int retorno = 0;
    FILE *pArchivo;
    pArchivo = fopen(fileName,"wb");


    if (pArchivo == NULL || mascota == NULL) {
        printf("ERROR. No se pudo generar archivo\n\n");
    } else {
        fwrite(mascota, sizeof(eMascota), 1, pArchivo);
        retorno = 1;
    }

    fclose(pArchivo);

    return retorno;
}

int generarArchivoTexto(char *fileName,eMascota *mascota)
{
    int retorno = 0;
    FILE *pArchivo;
    pArchivo = fopen(fileName, "w");

    if (pArchivo == NULL|| mascota == NULL) {
        printf("ERROR. No se pudo generar archivo\n\n");
    } else {
        fprintf(pArchivo, "%d,%s,%s,%d,%f\n", mascota->id, mascota->nombre, mascota->tipo, mascota->edad, mascota->altura);
        retorno = 1;
    }

    fclose(pArchivo);

    return retorno;
}

