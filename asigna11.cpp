//******************************************************************

// Programador : Alex Santos CCOM 3033 Sección 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignación 11 Prof. R. J. Colorado



// Archivo : asigna11.cpp Fecha : 12 de abril de 2012 *

//******************************************************************

//

// Propósito : Este programa, dado la cantidad de datos y los datos calcula  

//             y despliega la media aritmética y la desviación estandar.  

//             Este programa tiene relación con la estadística.


//******************************************************************

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int size = 25; // Tamaño físico

void Leer(string [], int&);              // Lee archivo y nombres
void BubbleSort(string [], int) ;        // Ordenarlos de menor a mayor
void swap(string&, string&) ;            // Intercambia nombres en BubbleSort
void Desplegar(const string [], int&);

int main ()

{
    string name [size]; // arreglo que guarda los nombres
    
    int n; // tamaño lógico
    
    Leer ( name, n); // Función que lee el nombre del archivo y los nombres
    
    BubbleSort(name, n) ; // Los ordena en orden alfabético
    
    Desplegar ( name, n); // Despliega los nombres 
    
    
    system("pause");
    return 0;
}

// Definicion de funciones

// Funcion lee nombres

void Leer ( string name[], int& n )
{
    char nombre[81];
    
    string na;
    
    ifstream  input;
    
    do{
              input.clear();
              cout << "Ingrese el nombre del archivo ------> " ;
              cin >> nombre;
              
              input.open(nombre);
              if (input.fail())
              {
                               cout << "El archivo " << nombre << "no existe. Trate otra vez." << endl;
                               system("pause");
              }
    }while (input.fail());
    
    n = 0;
    
    getline(input, na);
    
    while (! input.eof() && n < size)
    {
          name[n] = na;
          n++;
          getline(input, na);
          
    }
}//End of function

// Ordena los nombres en orden alfabético

void BubbleSort(string name[], int n)
{
     bool seguir = true ;
     
     for (int pases = 1 ; pases < n && seguir ; pases++)
     {
           seguir = false ;
           
           for (int compa = 0 ; compa < (n - pases) ; compa++)
           {
                 if (name[compa] > name[compa + 1])
                 {
                     swap(name[compa], name[compa+1]) ;
                     seguir = true ;
                 }
           }
     }
}// End of function

// Cambia los nombres

void swap(string& a, string& b)
{
     string temp ;
     
     temp = a ;
     a = b ;
     b = temp ;
}// End of function

// Despliega los nombres

void Desplegar(const string name[], int& n)
{
     system("cls");
     cout << "Los nombres son \n";
     
     for (int i = 0; i < n; i++)
     {
         cout << name[i] << endl;
     }
     system("pause");
}//End of function
     

    
