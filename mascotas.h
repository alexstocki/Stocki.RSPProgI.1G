#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED

typedef struct{
    int id;
    char nombre[20];
    char tipo[20];
    int edad;
    float altura;
}eMascota;

eMascota *mas_newMas();
eMascota *mas_setAll(int id,char *nombre,char *tipo,int edad,float altura);
int mas_setId(eMascota *mascota,int id);
int mas_setNombre(eMascota *mascota,char *nombre);
int mas_setTipo(eMascota *mascota,char *tipo);
int mas_setEdad(eMascota *mascota,int edad);
int mas_setAltura(eMascota *mascota,float altura);

#endif // MASCOTAS_H_INCLUDED
