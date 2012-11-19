//******************************************************************

// Programador : Alex Santos CCOM 3033 Sección 002

// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012

// Asignación 13 Prof. R. J. Colorado

// Archivo : asigna13.cpp Fecha : 23 de abril de 2012 *

//******************************************************************

// Propósito : Este programa, dado las horas trbajadas y salario por hora

//             Calcula el Salario semanal y el total a pagar entre todos los empleados. 

//             El programa recibe la informacion de un archivo.

//             El mismo despliega el record de cada trabajador en la pantalla.

//******************************************************************

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int WORK = 30; // Cantidad máxima de estudiantes

//Declaracion del record.

struct Worker
{
       string numest; // Seguro social
       
       double horas; // horas trabajadas
       
       double salhora ; // Salario por hora
       
       double salsem ; // Salario semanal
       
};//END of declaration.

// Prototipos.

void Leer ( Worker [], int&); // Lee el record

Worker Leer_Record(ifstream&); // Lee los campos de los records

void Salsem (Worker [], int, double&); // Calcula los salarios semanales

void Desplegar (const Worker [], int, double); // Despliega los records

int main ()
{
    Worker clase[WORK]; // Arreglo de tipo struct que contiene todos los records
    
    int n; // tamano logico de los arreglos
    
    double nomina; // Suma y acumula los salarios semanales
    
    Leer (clase, n); // Llama la funcion que lee los records
    
    Salsem (clase, n, nomina); // Llama a la funcion que calcula los salarios semanales
    
    Desplegar (clase, n, nomina); // Llama a la funcion que despliega los records
 
    return 0;
    
}

// Definiciones de funciones.

void Leer (Worker st[], int& n)
{
     ifstream entrada; // Define variable tipo input file stream
     
     entrada.open("trabajadores.dat"); // Abre el archivo con los records
     
     n = 0 ; // Inicializa n
     
     //Priming read.
     
     st[n] = Leer_Record(entrada);
     
////////////////////////////////////////// Lee los records
                                        //
     while (! entrada.eof())            //
     {                                  //
           n ++;                        //
                                        //
           if ( n == WORK)              //
              break;                    //
                                        //
           st[n] = Leer_Record(entrada);//
     }                                  //
//////////////////////////////////////////    
 
     entrada.close (); // Cierra el archivo
}//end of function

Worker Leer_Record(ifstream& input)
{
     Worker temp ; //Variable temporera
     
     input >> temp.numest; // Lee el numero de estudiante
     
     input >> temp.salhora; // Lee el salario por hora
     
     input >> temp.horas; // Lee las horas trabajadas
      
     return temp ; // Devuelve 
}// End of function

void Salsem (Worker st[], int n, double& nomina)
{
     nomina = 0.0;
     
    for (int i = 0; i < n; i++) // Me ubica en los records
    {
        
      if (st[i].horas > 40.0) // Calcula el salario semanal si las horas son mas de 40
      {
             st[i].salsem = (40.0*st[i].salhora) + ((st[i].horas - 40.0)*(1.5*st[i].salhora));
      }
      
      else // Calcula el salario semanal si las horas son 40 o menos
      {
             st[i].salsem = st[i].horas*st[i].salhora ;
      }
      
      nomina += st[i].salsem; // Suma y acumula los salarios semanales
            
    }
}// End of function

void Desplegar (const Worker st[], int n, double nomina)
{
     system("cls");
     cout << fixed << showpoint << setprecision(1);
     cout << "\n\t         <<<LOS RECORDS LEIDOS SON:>>>\n" ;
     cout << endl;
     
     // Encabezamiento de pantalla
    
    cout << "" << setw(4) << "Num. Seguro Social" << setw(5) << "  " << setw(5) 
          
      << "Salario por hora" << setw(5) << "  " << setw(5)<< "Horas trabajadas" << setw(5) 
      
      << "  " << setw(5) << "Salario semanal" << endl;
     
     for(int i=0 ; i < n ; i++) // Se mueve por cada record de estudiante
     {
         
           // Despliega el record en la pantalla
      
       cout  << (i+1) << ") " << setw(9) << st[i].numest << setw(8) << "  " << setw(11) << st[i].salhora 
       
             << setw(11) << "" << setw(10) << st[i].horas << setw(10) << "" << setw(11)
       
            << st[i].salsem << endl;
     }
     
     cout << "-------------------------------------------------------------------------------" << endl; // Linea de separacion
     
     cout << "N¢mina ============================================================  " << nomina << endl; // despliega nomina
     
     cout << endl << endl;
     
    system("pause");
}// End of function
