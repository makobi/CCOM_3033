#include <iostream>

#include <cmath>

#include <iomanip>

const int SIZE = 25;

using namespace std;

//Prototipos

void Leer_datos (double [], int&);

void Media (const double [], int, double&); 

void Desviacion ( const double [], int, double&, double);

void Desplegar (double [], double, double, int);

int main ()
{
    // Diccionario de variables
    
    double data [SIZE]; // Arreglo que guarda los datos
    
    int n; // Cantidad de datos
    
    double media; // Guarda la media aritmética
    
    double desvi; // Guarda la desviación estandar
    
    // Llama a la función que lee los datos

       Leer_datos (data, n);
       
    // Llama la función que calcula la media aritmética
    
       Media (data, n, media);
       
    // Llama la función que calcula la desviación estandar
    
       Desviacion (data, n, desvi, media);
       
    // LLama a la función que desplega los datos
    
       Desplegar (data, media, desvi, n);
       
    system("pause");
    
    return 0;
    
}

// Definició de funciones

void Leer_datos (double data[], int& n)
{
     do{
                system("cls");
                
                cout << "Indique la cantidad de datos (2 - 25)" << endl;
                
                cin >> n;
                
                if (n < 2 || n > 25)
                {
                      cout << "Los datos no son v lidos," 
                           << "int‚ntalo otra vez" << endl << endl;
                      
                      system("pause");
                }
                              
       }while (n < 2 || n > 25);
       
       for (int i = 0; i < n; i++)
       {
           cout << "Indique dato " << (i+1) << ")" << endl;
           
           cin >> data[i];
       }
}
       
                           
void Media (const double data[], int n, double& media)
{
     double promedio = 0.0;
     
     for (int i = 0; i < n; i++)
     {   
         promedio += data[i];
     }
     
     media = promedio / double(n);
     
}

void Desviacion ( const double data[], int n, double& desvi, double media)
{
     double suma = 0.0;
            
     for (int i = 0; i < n; i++)
     {
         suma += pow(data[i] - media, 2.0);
     }
       desvi = sqrt(suma/double(n-1));
       
}

void Desplegar (double data[], double media, double desvi, int n)
{
     system("cls");
     cout << fixed << showpoint << setprecision(1);
     cout << "Los datos son:\n";
     
     for (int i = 0; i < n; i++)
     {
         cout << (i+1) << ") " << setw(7) << data[i] << endl;
     }
     cout << "\nLa media aritm‚tica es =========== " << setw(7) << media;
     cout << "\nLa desviaci¢n estandar es ======== " << setw(7) << desvi;
     cout << endl << endl;
     system("pause");
}
