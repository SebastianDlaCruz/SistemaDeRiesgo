#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include "../src/Fecha.cpp"
#include "../include/Personal.h"
using namespace std;



void Personal::cargarPersonal(){// Ingreso  de datos
        cout<<"ID puesto de trabajo"<<endl;
        cin>>IDpuestoDetrabajo;
        cout<<"Nro. de jegajo de persona"<<endl;
        cin>>NLegajoPersona;
        cout<<"Nombre"<<endl;
        cin>>nombre;
        cout<<"Apellido"<<endl;
        cin>>apellido;
        cout<<"edad"<<endl;
        cin>>edad;
        cout<<"email"<<endl;
        cin>>email;
        cout<<"Categoria"<<endl;
        cin>>categoria;
        cout<<"gerencia"<<endl;
        cin>>gerencia;
        cout<<"Fecha de ingreso"<<endl;
        fecha_ingreso.CargarFecha();
        cout<<"Fecha de egreso"<<endl;
        fecha_egreso.CargarFecha();
        grabarEnDisco();
        }

int Personal::leerDeDisco(int pos){ // lectura de disco
        FILE *p;
        p=fopen("personal.dat", "rb");
        if(p==NULL) return -1;
        fseek(p, sizeof *this*pos,0);
        int leyo=fread(this, sizeof *this,1, p);
        fclose(p);
        return leyo;
    }


int Personal::grabarEnDisco(){  // escritura de disco
        FILE *p;
        p=fopen("personal.dat", "ab");
        if(p==NULL) return -1;
        int grabo=fwrite(this, sizeof *this,1, p);
        fclose(p);
        return grabo;
    }
int Personal::MostrarTodos(){ // mostrar todos los objetos dentro de un archivo
     int a=0;
     while(leerDeDisco(a)==1){
            a=a+1;
 cout<<IDpuestoDetrabajo<<endl;
 cout<<NLegajoPersona<<endl;
 cout<<nombre<<endl;
 cout<<apellido<<endl;
 cout<<edad<<endl;
 cout<<email<<endl;
 cout<<tel<<endl;
 cout<<categoria<<endl;
 cout<<gerencia<<endl;
 fecha_ingreso.MostrarFecha();
 fecha_egreso.MostrarFecha();
     }

 }


int Personal :: getCantidad(){
int cantidad = 0;
  FILE* pFile = fopen("personal.dat", "rb");
  if (pFile != NULL)
  {
    fseek(pFile, 0, SEEK_END);
    cantidad = ftell(pFile) / sizeof(Personal);
    fclose(pFile);
  }
  return cantidad;

}
