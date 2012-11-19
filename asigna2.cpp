//******************************************************************



//



// Programador : Alex Santos CCOM 3033 Sección 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignación 2 Prof. R. J. Colorado



// Archivo : asigna2.cpp Fecha : 27 de enero de 2012 *



//



//******************************************************************



//



// Propósito : Este programa, dado el radio de un círculo, calcula y despliega 

//             la circumferencia y el área del círculo.




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

double circunferencia (double);

double area (double);

void desplegar (double, double, double);



int main()



{

    //Declaracion de variables.

    

    double radio;    //Radio del circulo

    double circum;   // Circunferencia del circulo

    double a;     // Area del circulo

    

    // Desplegar el propósito

       proposito ();

       

    // Lee el radio del circulo

    

       radio = leer_radio();

    

    // Clacular la circunferencia del circulo

    

       circum = circunferencia (radio);

    

    //Calcular el area del circulo

    

       a = area (radio);

    

    //Desplegar el radio, la circunferencia y el area del circulo

    

      desplegar (radio, circum, a);

        

    return 0;

        

    

}



// Funciones para calcular el área y la circunferencia del circulo.



void proposito (void)

{

     cout << "Este programa, dado el radio de un c¡rculo, calcula y despliega " << endl

          << "la circumferencia y el  rea del c¡rculo." << endl << endl;

}// Final de la función



double leer_radio (void)

{

     double radio;

     cout<< "Ingrese el radio del c¡rculo ---> ";

     cin >> radio;  

     return radio;

     

}// Final de la función



double circunferencia (double radio)

{      

       double circum;

      circum = 2.0 * PI * radio ;

      return circum;

      

} // Final de la función



double area (double radio)

{

       double a;

       a = PI * pow( radio, 2.0);

       return a;

       

}// Final de la función



void desplegar (double radio, double circum, double a)

{



    system("cls");

    cout << fixed << showpoint << setprecision(4);

    cout << "\n\t<<< DIMENSIONES DEL CIRCULO >>>\n" ;

    cout << "\n\tLa circunferencia y el  rea del c¡rculo con radio " << radio << " son: \n" ;

    cout << "\n\tcincunferencia =========== " << setw(10) <<circum ;

    cout << "\n\tarea ===================== " << setw(10) << a ;

    cout << endl << endl;

    system("pause");

    

}// Final de la función

