//******************************************************************



//



// Programador : Alex Santos CCOM 3033 Secci�n 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignaci�n 3 Prof. R. J. Colorado



// Archivo : asigna3.cpp Fecha : 31 de enero de 2012 *



//



//******************************************************************



//



// Prop�sito : Este programa, dado el radio y la altura de un c�rculo, calcula  

//             y despliega el �rea y el volumen de el c�rculo.




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
    
    double altura;  // Altura del c�rculo

    double vol;   // Volumen del c�rculo

    double a;     // Area del circulo

    

    // Desplegar el prop�sito

       
       proposito ();
       

    // Lee el radio del circulo

    

       radio = leer_radio();

    

    // Lee la altura del c�rculo

    

      altura = leer_altura ();

    

    //Calcular el area del circulo

    

       a = area (radio, altura);

    

    // Calcular el volumen del c�rculo
    
    
    
       vol = volumen (radio, altura);
       
       
       
    //Desplegar el radio, la circunferencia y el area del circulo

    

      desplegar (radio, altura, a, vol);

        

    return 0;

        

    

}



// Funciones para calcular el �rea y la circunferencia del circulo.



void proposito (void)

{

     cout << "Este programa, dado el radio y la altura de un c�rculo, calcula  " << endl

          << "y despliega el �rea y el volumen del c�rculo." << endl << endl;

}// Final de la funci�n



double leer_radio (void)

{

     double radio;

     cout<< "Ingrese el radio del c�rculo ---> ";

     cin >> radio;  

     return radio;

     

}// Final de la funci�n



double leer_altura (void)

{

     double altura;

     cout<< "Ingrese la altura del c�rculo ---> ";

     cin >> altura;  

     return altura;

     

}// Final de la funci�n



double area (double radio, double altura)

{

       double a;

       a = (2*PI*radio)*(radio + altura);

       return a;

       

}// Final de la funci�n



double volumen (double radio, double altura)

{

       double volumen;

       volumen = (PI*radio*radio*altura);

       return volumen;

       

}// Final de la funci�n



void desplegar (double radio, double altura, double a, double vol)

{



    system("cls");

    cout << fixed << showpoint << setprecision(4);

    cout << "\n\t<<< DIMENSIONES DEL CIRCULO >>>\n" ;

    cout << "\n\tEl �rea y el volumen del c�rculo \n";
    
    cout << "\n\tcon radio " << radio << " y altura " << altura << " son: \n";

    cout << "\n\t�rea ===================== " << setw(10) <<a ;

    cout << "\n\tvolumen ================== " << setw(10) << vol ;

    cout << endl << endl;

    system("pause");

    

}// Final de la funci�n

