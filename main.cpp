//# Practica_8_SEDA2
#include <iostream>

enum{LUNES=1,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO,SALIR_DIA};

enum{ALTA=1,BAJA,CONSULTA,MODIFICAR,DIA,SALIR_MENU_PRINCIPAL};

using namespace std;

int mostrarMenuOpcionDia();
int mostrarMenuPrincipal();
int mostrarMenuSecundario();
void pausar();


int main()
{
    bool continuaPrograma=true;
    bool continuaOpcionDia;
    while(continuaPrograma){
        system("cls");
        switch(mostrarMenuPrincipal())
        {
        case ALTA:
            cout<<"ALTA DE REPARTIDOR"<<endl;
            break;
        case BAJA:
            cout<<"BAJA DE REPARTIDOR"<<endl;
            break;
        case CONSULTA:
            cout<<"CONSULTA DE REPARTIDOR"<<endl;
            break;
        case MODIFICAR:
            cout<<"MODIFICAR REPARTIDOR"<<endl;
            break;
        case DIA:
            continuaOpcionDia=true;
            while(continuaOpcionDia)