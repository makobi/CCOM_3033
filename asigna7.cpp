//******************************************************************


// Programador : Alex Santos CCOM 3033 Secci�n 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignaci�n 7 Prof. R. J. Colorado



// Archivo : asigna7.cpp Fecha : 26 de marzo de 2012 *


//******************************************************************

//

// Prop�sito : Este programa, dado los tres lados de un tri�ngulo calcula  

//             y despliega el �rea del tri�ngulo utilizando la formula de Heron.  

//             Her�n de Alejandr�a era un matem�tico griego.

//

//******************************************************************


#include <iostream>

#include <cmath>

#include <iomanip>



using namespace std;



//Prototipos de las funciones



void Proposito (void);

void Leer_lados (double&, double&, double&);

double Semiperimetro (double, double, double);

double Heron (double, double, double, double);

void Desplegar (double, double, double, double);


int main()

{

    //Declaracion de variables.

    double a;      //lado del tri�ngulo
    
    double b;      //lado del tri�ngulo
           
    double c;    //lado del tri�ngulo
    
    double semi;      // Semiperimetro
        
    double heron ;     // formula de heron

    // Desplegar el prop�sito

       
      Proposito ();
       

    // Lee los datos del tri�ngulo

    
      Leer_lados (a, b, c);

    
    // Recibe los lados del tri�ngulo y calcula el semiper�metro

    
       semi = Semiperimetro (a, b, c);

    
    //Calcula el �rea del tri�ngulo utilizando la f�rmula de Her�n

    
       heron = Heron (a, b, c, semi) ;

    
    //Desplegar los lados y el �rea del tri�ngulo

    
       Desplegar (a, b, c, heron);
           
           
    return 0;

        
}


// Funciones para calcular el �rea y la circunferencia del circulo.


void Proposito (void)

{

     cout << "\n\tEste programa, dado los tres lados de un tri�ngulo calcula\n" ;

     cout << "\n\ty despliega el �rea del tri�ngulo utilizando la f�rmula de Her�n.\n"  ;
          
     cout << "\n\tHer�n de Alejandr�a era un matem�tico griego.\n" << endl << endl;
          

}// Final de la funci�n



void Leer_lados (double& a, double& b, double& c)

{

     do{
                cout<< "\nIngrese los lados del tri�ngulo separados por un enter \n" ;

                cin >> a >> b >> c; 
                
                if ((a+b) < c || (a+c) < b || (b+c) < a)
                                
                          cout << "Los datos no son v�lidos, intentalo otra vez" << endl;
                
                system("pause");
                system("cls");
                
       }while ((a+b) < c || (a+c) < b || (b+c) < a); 

    
}// Final de la funci�n



double Semiperimetro (double a, double b, double c)

{    
    double semi;
    
    semi = 0.5*(a + b + c);
     
    return semi;
      

}// Final de la funci�n



double Heron (double a, double b, double c, double semi)

{
       double heron;
       
       heron = sqrt(semi*(semi - a)*(semi - b)*(semi - c));
       
       return heron;

}// Final de la funci�n



void Desplegar (double a, double b, double c, double heron)

{

    system("cls");

    cout << fixed << showpoint << setprecision(4);

    cout << "\n\t<<< RESULTADOS >>>\n" ;

    cout << "\n\tLos lados del tri�ngulo son: \n" ;

    cout << "\n\tLado a ===================== " << setw(10) << a << "\n";

    cout << "\n\tLado b ===================== " << setw(10) << b << "\n";
    
    cout << "\n\tLado c ===================== " << setw(10) << c << "\n";
    
    cout << "\n\tEl �rea del tri�ngulo seg�n la f�rmula de Her�n es: \n" ;
    
    cout << "\n\tArea ======================= " << setw(10) << heron << "\n";
    
    cout << endl << endl;

    system("pause");

   
}// Final de la funci�n



