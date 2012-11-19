//******************************************************************



//



// Programador : Alex Santos CCOM 3033 Sección 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignación 3 Prof. R. J. Colorado



// Archivo : asigna3.cpp Fecha : 31 de enero de 2012 *



//



//******************************************************************



//



// Propósito : Este programa, dado el radio y la altura de un círculo, calcula  

//             y despliega el área y el volumen de el círculo.




//



//******************************************************************







#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;



const double PI = 3.14159;



//Prototipos de las funciones



void proposito ();

double leer_radio ();

double leer_altura ();

double area (double, double);

double volumen (double, double);

void desplegar (double, double, double, double);



int main()



{

    //Declaracion de variables.

    

    double radio;    //Radio del circulo
    
    double altura;  // Altura del círculo

    double vol;   // Volumen del círculo

    double a;     // Area del circulo

    

    // Desplegar el propósito

       
       proposito ();
       

    // Lee el radio del circulo

    

       radio = leer_radio();

    

    // Lee la altura del círculo

    

      altura = leer_altura ();

    

    //Calcular el area del circulo

    

       a = area (radio, altura);

    

    // Calcular el volumen del círculo
    
    
    
       vol = volumen (radio, altura);
       
       
       
    //Desplegar el radio, la circunferencia y el area del circulo

    

      desplegar (radio, altura, a, vol);

        

    return 0;

        

    

}



// Funciones para calcular el área y la circunferencia del circulo.



void proposito (void)

{

     cout << "Este programa, dado el radio y la altura de un c¡rculo, calcula  " << endl

          << "y despliega el  rea y el volumen del c¡rculo." << endl << endl;

}// Final de la función



double leer_radio (void)

{

     double radio;

     cout<< "Ingrese el radio del c¡rculo ---> ";

     cin >> radio;  

     return radio;

     

}// Final de la función



double leer_altura (void)

{

     double altura;

     cout<< "Ingrese la altura del c¡rculo ---> ";

     cin >> altura;  

     return altura;

     

}// Final de la función



double area (double radio, double altura)

{

       double a;

       a = (2*PI*radio)*(radio + altura);

       return a;

       

}// Final de la función



double volumen (double radio, double altura)

{

       double volumen;

       volumen = (PI*radio*radio*altura);

       return volumen;

       

}// Final de la función



void desplegar (double radio, double altura, double a, double vol)

{



    system("cls");

    cout << fixed << showpoint << setprecision(4);

    cout << "\n\t<<< DIMENSIONES DEL CIRCULO >>>\n" ;

    cout << "\n\tEl  rea y el volumen del c¡rculo \n";
    
    cout << "\n\tcon radio " << radio << " y altura " << altura << " son: \n";

    cout << "\n\t rea ===================== " << setw(10) <<a ;

    cout << "\n\tvolumen ================== " << setw(10) << vol ;

    cout << endl << endl;

    system("pause");

    

}// Final de la función

