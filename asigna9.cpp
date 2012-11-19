//******************************************************************


// Programador : Alex Santos CCOM 3033 Sección 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignación 9 Prof. R. J. Colorado



// Archivo : asigna8.cpp Fecha : 18 de marzo de 2012 *


//******************************************************************

//

// Propósito : Este programa, dado las horas tarbajadas y el salario por hora  

//             Calcula  y despliega el salario semanal y la información provista.  

//            por el usuario. Además sste programa despliega la paga total.

//

//******************************************************************

// Programa para calcular promedio y asignar nota

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

// Prototipos

void Calcular (void);

double Salario (double, double);

using namespace std;

int main ()

{
    
    Calcular ();
  
}

void Calcular (void)
{
         //Diccionario de variables
    
   string numest;      // número de seguro social
   
    double pagos;   // salario por hora
    
    double horas; // Horas por semana
    
    double salario; // salario semanal

    double nomina = 0; // acumulador
    
   int i = 0 ;       // Contador
   
   ifstream entrada ; // Entrada al archivo
   
   entrada.open("estu.dat"); // Abrir el archivo de entrada
   
   ofstream salida ;         // Salida al archivo
   
   salida.open("registro.dat"); // crear archivo de salida
   
   entrada >> numest >> pagos >> horas; // Priming read
    
    // Encabezamiento de pantalla
    
    cout << "" << setw(4) << "Num. Seguro Social" << setw(5) << "  " << setw(5) 
          
      << "Salario por hora" << setw(5) << "  " << setw(5)<< "Horas trabajadas" << setw(5) 
      
      << "  " << setw(5) << "Salario semanal" << endl;
      
      // Encabezamiento de archivo
      
      salida << "" << setw(4) << "Num. Seguro Social" << setw(5) << " " << setw(5) 
          
      << "Salario por hora" << setw(5) << "  " << setw(5)<< "Horas trabajadas" << setw(5) 
      
      << "  " << setw(5) << "Salario semanal" << endl;
      
   while ( !entrada.eof() ) // Ciclo para leer el archivo
   {
       
      // Función que calcula los salarios
      
       salario = Salario(pagos, horas) ;
       
       // Suma los salarios
       
       nomina += salario;
   
       cout << fixed << showpoint << setprecision(2); // Manipuladores de salida
      
          
      i++;         // Actualización del contador
      
      // Despliega el record en la pantalla
      
       cout  << i << ". " << setw(9) << numest << setw(8) << "  " << setw(11) << pagos 
       
             << setw(11) << "" << setw(10) << horas << setw(10) << "" << setw(11)
       
            << salario << endl;
   
        // Despliega el record en el archivo
        
         salida << i << ". " << setw(9) << numest << setw(8) << "  " << setw(11) << pagos 
       
              << setw(11) << "" << setw(10) << horas << setw(11) << "" << setw(11)
       
              << salario << endl;
   
        
        
        entrada >> numest >> pagos >> horas ;     // Normal read
        
    }     
        
         cout << "-------------------------------------------------------" 
              << "------------------------" << endl;
          
          cout << "Total a pagar ========================================"
                << "=============== " << setw(5) << nomina << endl;
          
          salida << "-------------------------------------------------------" 
              << "------------------------" << endl;
                 
         salida << "Total a pagar =======================================" 
                << "==================" << setw(5) << nomina << endl;
          
           entrada.close(); // Cierra el archivo de entrada
           
            salida.close(); // Cierra el archivo de salida
            
            cout << endl << endl;
       
            system("pause");
            
} // Termina función
   
   // Función que calcula los salarios
         
double Salario (double pagos, double horas)
{
      double salario;
      
      if (horas > 40.0)
      {
             salario = (40.0*pagos) + ((horas - 40.0)*(1.5*pagos));
      }
      
      else
      {
             salario = horas*pagos ;
      }
      
      return salario;
       
}// Termina función




