//******************************************************************

// Programador : Alex Santos CCOM 3033 Sección 002

// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012

// Asignación 12 Prof. R. J. Colorado

// Archivo : asigna12.cpp Fecha : 23 de abril de 2012 *

//******************************************************************

// Propósito : Este programa, calcula el promedio y asigna la nota de los estudiantes. 

//             El programa recibe la informacion de un archivo.

//             El mismo despliega el record de cada estudiante en la pantalla.

//******************************************************************

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int NEX = 5; // Número de examenes

const int ESTU = 30; // Cantidad máxima de estudiantes

//Declaracion del record.

struct Student
{
       string numest; // Número de estudiante
       
       int exams [NEX]; // Arreglo que contien los examenes
       
       double prom ; // Promedio de los estudiantes
       
       char nota ; // Nota de los estudiantes
};//END of declaration.

// Prototipos.

void Leer ( Student [], int&); // Lee el record

Student Leer_Record(ifstream&); // Lee los campos de los records

void Promedio (Student [], int); // Calcula los promedios

void Nota (Student [], int); // Asigna las notas

void Desplegar (const Student [], int ); // Despliega los records

int main ()
{
    Student clase[ESTU]; // Arreglo de tipo struct que contiene todos los records
    
    int n; // tamano logico de los arreglos
    
    Leer (clase, n); // Llama la funcion que lee los records
    
    Promedio (clase, n); // Llama a la funcion que calcula los promedios
    
    Nota (clase, n); // Llama a la funcion que asigna la nota
    
    Desplegar (clase, n); // Llama a la funcion que despliega los records
 
    return 0;
    
}

// Definiciones de funciones.

void Leer (Student st[], int& n)
{
     ifstream entrada; // Define variable tipo input file stream
     
     entrada.open("estudiantes.dat"); // Abre el archivo con los records
     
     n = 0 ; // Inicializa n
     
     //Priming read.
     
     st[n] = Leer_Record(entrada);
     
////////////////////////////////////////// Lee los records
                                        //
     while (! entrada.eof())            //
     {                                  //
           n ++;                        //
                                        //
           if ( n == ESTU)              //
              break;                    //
                                        //
           st[n] = Leer_Record(entrada);//
     }                                  //
//////////////////////////////////////////    
 
     entrada.close (); // Cierra el archivo
}//end of function

Student Leer_Record(ifstream& input)
{
     Student temp ; //Variable temporera
     
     input >> temp.numest; // Lee el numero de estudiante
     
/////////////////////////////////////// Lee los examenes
     for (int i = 0 ; i < NEX ; i++) //
            input >> temp.exams[i] ; //
///////////////////////////////////////  
      
     return temp ; // Devuelve 
}// End of function

void Promedio (Student st[], int n)
{
    for (int i = 0; i < n; i++) // Me ubica en los records
    {
        st[i].prom = 0.0; // Inicializa el campo prom
        
        for (int j = 0; j < NEX; j++) // Me ubica en el arreglo de examenes
        {
            st[i].prom += st[i].exams[j]; // Suma y acumula las puntuaciones de los examenes
        }
        st[i].prom /= double(NEX); // Divide la suma para obtener el promedio
    }
}// End of function

void Nota (Student st[], int n)
{
     for ( int i = 0; i < n; i++) // lo hace para cada estudiante
     {
         switch(int(st[i].prom/10.0)) // Asigna las notas de acuerdo con el promedio
         {
               case 9:
               case 10: st[i].nota = 'A'; // nota A
                        break;
               case 8: st[i].nota = 'B'; // nota B
                       break;
               case 7: st[i].nota = 'C'; // nota C
                       break;
               case 6: st[i].nota = 'D'; // nota D
                       break;
               default: st[i].nota  = 'F'; // nota F
         }
     }
}// End of function

void Desplegar (const Student st[], int n )
{
     system("cls");
     cout << fixed << showpoint << setprecision(1);
     cout << "\n\t         <<<LOS RECORDS LEIDOS SON:>>>\n" ;
     cout << endl;
     
     cout << "   Num. estudiante" << " "; // encabezamiento del numero de estudiantes
     
     for (int k = 0; k < NEX; k++) // Desplega el encabezamiento de cada examen no importa la cantidad
     {
         cout << " Examen " << (k + 1); //     Despliega el encabezamiento de cada examen
     }
     
     cout << " Promedio" << " " << "Nota" << " " << endl; // Despliega encabezamiento del promedio y la nota
     
     for(int i=0 ; i < n ; i++) // Se mueve por cada record de estudiante
     {
         cout << (i+1) << ")   " << st[i].numest << "       " ; // Despliega el campo de numero de estudiante
         
         for(int j =0 ; j < NEX ; j++) // Se mueve en el arreglo de los examenes
         {
             cout << st[i].exams[j] << "       " ; // Despliega el campo de los examenes
         } 
         cout << st[i].prom << "    " ; // Despliega el campo del promedio
         
         cout << st[i].nota; // Despliega el; campo de la nota
         
         cout << endl ;
     }
    system("pause");
}// End of function
