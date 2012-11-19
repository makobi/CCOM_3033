//********************************************************************
//                                                                    
//   Programador : Alex D. Santos Sosa      CCOM 3033 Seccion 002      
//   Num. Est.   : 801-11-7707          Segundo Semestre 2011-2012       
//   Asignacion 14                       Prof. R. J. Colorado           
//   Archivo     : asigna14.cpp          Fecha : 15 de mayo de 2012 			 
//                                                                     
//********************************************************************
//                                                                      
//    Proposito: Este programa utiliza punteros para desplegar datos 
//               entrados por el usuario.                            
//********************************************************************

#include<iostream>
using namespace std;
//Prototipos de funciones 

int* Leer (int*);
void Desplegar (int*, int);

int main()
{
    int n;//Variable n que va contener el valor
    int *ptr ;//Variable puntero
    //Funcion que recibe la cantidad de valores y los valores
    ptr = Leer(&n) ;
    //Funcion que despliega
    Desplegar(ptr, n) ;
    
    return 0;
           }
//Funcion para recibir valores
int* Leer(int* nptr) 
{
     cout << "Indique cantidad de elementos ---> " ;
     cin  >> *nptr ;
     
     int* a = new int[*nptr] ;
     
     for( int i = 0; i < *nptr; i++)
     {
          cout << "Indique elemento " << (i+1) << ")" ;
          cin >> a[i] ;
          }  
          
          return a;
}//Funcion termina
//Funcion que despliega valores
void Desplegar(int *a, int n)
{
     system("cls") ;
     cout << "Los elementos del arreglo son:\n" ;
     for (int i = 0; i < n; i++)
         cout << *(a+i) << endl ;
         
         system("pause") ;
         
}//Funcion termina
