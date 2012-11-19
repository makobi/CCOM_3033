//******************************************************************


// Programador : Alex Santos CCOM 3033 Sección 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignación 8 Prof. R. J. Colorado



// Archivo : asigna8.cpp Fecha : 7 de marzo de 2012 *


//******************************************************************

//

// Propósito : Este programa, dado las tres puntuaciones de los estudiantes  

//             Calcula el promedio y despliega los records de los estudiantes.  

//             Este program sirve para las escuelas.

//

//******************************************************************

// Programa para calcular promedio y asignar nota

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

// Prototipos

void Calcular (void);

double promedio (int, int, int);

char nota (double) ; 

using namespace std;

int main ()

{
    
    Calcular ();
  
}

void Calcular (void)
{
         //Diccionario de variables
    
   string numest;      // número de estudiante
   
   int exam1, exam2, exam3; // Puntuaciones del estudiante
   
   double prom;      // Promedio del estudiante
   
   char notas;       // Nota del estudiante
   
   int i = 0 ;       // Contador
   
   ifstream entrada ; // Entrada al archivo
   
   entrada.open("estu.dat"); // Abrir el archivo de entrada
   
   ofstream salida ;         // Salida al archivo
   
   salida.open("registro.dat"); // crear archivo de salida
   
   entrada >> numest >> exam1 >> exam2 >> exam3; // Priming read
    
    // Encabezamiento de pantalla
    
    cout << "  " << setw(5) << "Num. estudiante" << setw(5) << "  " << setw(5) 
          
      << "Examen 1" << setw(5) << "  " << setw(5)<< "Examen 2" << setw(5) 
      
      << "  " << setw(5) << "Examen 3" << setw(5) << "  " << "Promedio" << setw(5)
      
      << "  " << setw(5) << "Nota"  << endl;
      
      // Encabezamiento de archivo
      
      salida << "  " << setw(5) << "Num. estudiante" << setw(5) << "  " << setw(5) 
        << "Examen 1" << setw(5) << "  " << setw(5)<< "Examen 2" << setw(5) 
        << "  " << setw(5) << "Examen 3" << setw(5) << "  " << "Promedio" << setw(5)
        << "  " << setw(5) << "Nota"  << endl;
      
   while ( !entrada.eof() ) // Ciclo para leer el archivo
   {
       
      // Función que calcula los promedios
      
       prom = promedio(exam1, exam2, exam3) ;
       
       // Función que otorga las notas según el promedio 
       
       notas = nota(prom);
   
       cout << fixed << showpoint << setprecision(2); // Manipuladores de salida
      
          
      i++;         // Actualización del contador
      
      // Despliega el record en la pantalla
      
       cout  << i << ". " << setw(5) << numest << setw(7) << "  " << setw(7) << exam1 
       
       << setw(7) << "" << setw(6) << exam2 << setw(6) << "" << setw(7)
       
        << exam3 << setw(7) << "" << setw(7) << prom << setw(9) << notas << endl;
   
        // Despliega el record en el archivo
        
         salida << i << ". "<< setw(5) << numest << setw(7) << "  " << setw(7) << exam1
          
         << setw(7) << "" << setw(6) << exam2 << setw(6) << "" << setw(7)
         
         << exam3 << setw(7) << "" << setw(7) << prom << setw(9) << notas << endl;
   
        
        
        entrada >> numest >> exam1 >> exam2 >> exam3;     // Normal read
        
    }     
          
           entrada.close(); // Cierra el archivo de entrada
           
            salida.close(); // Cierra el archivo de salida
       
            system("pause");
            
} // Termina función
   
   // Función que calcula el promedio de los estudiantes
         
double promedio (int exam1, int exam2, int exam3)
{
       return double (exam1 + exam2 + exam3) / 3.0;
       
}// Termina función

   // Función que otorga las notas según el promadio

char nota (double prom)
{
     char n;
     
     if ( prom >= 90.0)
     
     n = 'A';
     
     else if (prom >= 80.0)
     
     n = 'B';
     
     else if (prom >= 70.0)
     
     n = 'C';
     
     else if (prom >= 60.0)
     
     n = 'D';
     
     else 
     
     n = 'F';
     
     return n;
     
}// Termina función
