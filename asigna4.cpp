//******************************************************************



//



// Programador : Alex Santos CCOM 3033 Sección 002



// Num. Est. : 801-11-7707  Segundo Semestre 2011-2012



// Asignación 5 Prof. R. J. Colorado



// Archivo : asigna5.cpp Fecha : 14 de febrero de 2012 *



//



//******************************************************************



//



// Propósito : Este programa, dado el salario por hora, las horas trabajadas por  

//             semana, calcula el salario semanal del usuario. 

//             Además recibe y despliega el seguro social del usuario.




//



//******************************************************************







#include <iostream>

#include <cmath>

#include <iomanip>

#include <string>



using namespace std;



//Prototipos de las funciones



void Purpose (void);

string Read_SS (void);

double Read_hourly_rate (void);

double Read_weekly_hours (void);

double weekly_salary (double, double);

void Display (double, double, double, string);

int main()



{

    //Declaracion de variables.

    

    string num;    //número de seguro social
    
    double horas;   // salario por hora
    
    double semanas; // Horas por semana
    
    double salario; // salario semanal
    
    
    // Desplegar el propósito

       
      Purpose ();
       

    // Lee el número de Seguro Social

    

       num = Read_SS ();

    

    // Lee el salario por hora

    

      horas =  Read_hourly_rate ();

    

    // Lee las horas trabajadas por semana

    

       semanas = Read_weekly_hours ();

    

    // Calcular el salario por semana
    
    
    
       salario = weekly_salary (horas, semanas);



    //Desplegar el número de seguro social, salario por dia, horas por semana y el salario semanal

    

       Display (horas, semanas, salario, num);
           
           
           
        

    return 0;

        

    

}



// Funciones para calcular el área y la circunferencia del circulo.



void Purpose (void)

{

     cout << "\n\tEste programa, dado el salario por hora, las horas trabajadas\n" ;

     cout << "\n\tpor semana, calcula el salario semanal del usuario. Adem s este"  ;
          
     cout << "\n\tprograma recibe el seguro social del usuario.\n" << endl << endl;
          

}// Final de la función



string Read_SS (void)

{

     string num;

     cout<< "\nIngrese el n£mero de Seguro Social <<Ej. XXX-XX-XXXX>> ---> " ;

     cin >> num;  

     return num;

     

}// Final de la función



double Read_hourly_rate (void)

{
     double hora;
     
     cout<< "\nIngrese su salario por hora ---> " ;

     cin >> hora;  

    return hora;
}// Final de la función



double Read_weekly_hours (void)

{
       double semanas;
       
       cout<< "\nIngrese las horas trabajadas por semana ---> " ;

       cin >> semanas;
       
       return semanas;

}// Final de la función



double weekly_salary (double horas, double semanas)

{
      double salario;
      
      if (semanas > 40.0)
      {
             salario = (40.0*horas) + ((semanas - 40.0)*(1.5*horas));
      }
      
      else
      {
             salario = semanas*horas ;
      }
      
      return salario;

}// Final de la función



void Display (double horas, double semanas, double salario, string num)

{

    system("cls");

    cout << fixed << showpoint << setprecision(2);

    cout << "\n\t<<< SALARIO POR SEMANA >>>\n" ;

    cout << "\n\tEl n£mero de Seguro Social es: " << num << "\n";
    
    cout << "\n\tEl salario por hora y las horas trabajadas por semana son: \n" ;

    cout << "\n\tSalario por hora ===================== " << setw(10) << horas << "\n";

    cout << "\n\tHoras por semana ===================== " << setw(10) << semanas << "\n";
    
    cout << "\n\tEl salario por semana del usuario es: " << "$" << salario << "\n";
    
    cout << endl << endl;

    system("pause");

   
}// Final de la función



