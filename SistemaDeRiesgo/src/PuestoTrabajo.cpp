#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

#include "../include/PuestoDeTrabajo.h"

int PuestoDeTrabajo::leerDeDisco(int pos){ // lectura de disco
        FILE *p;
        p=fopen("personal.dat", "rb");
        if(p==NULL) return -1;
        fseek(p, sizeof *this*pos,0);
        int leyo=fread(this, sizeof *this,1, p);
        fclose(p);
        return leyo;
    }

int PuestoDeTrabajo::grabarEnDisco(){
        FILE *p;
        p=fopen("puestoDeTrabajo.dat", "ab");
        if(p==NULL) return -1;
        int grabo=fwrite(this, sizeof *this,1, p);
        fclose(p);
        return grabo;
    }
void PuestoDeTrabajo::cargarPuestoDeTrabajo(){
            cout<<"ID puesto de trabajo"<<endl;
        cin>>idPuestoDeTrabajo;
        cout<<"ID Sector"<<endl;
        cin>>idSector;
        cout<<"Puesto"<<endl;
        cin>>puesto;
        grabarEnDisco();
    };
int PuestoDeTrabajo::MostrarTodos(){
     int a=0;
     while(leerDeDisco(a)==1){
            a=a+1;
 cout<<idPuestoDeTrabajo<<endl;
 cout<<idSector<<endl;
 cout<<puesto<<endl;
     }

 };

int main(){

}



