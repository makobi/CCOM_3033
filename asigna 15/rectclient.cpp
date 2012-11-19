#include "rectangle.h"

// PROTOTIPOS

Rectangle Leer_Dim(void);

void Diagrama (const Rectangle&);

void Desplegar(const Rectangle&);

int main()
{
    Rectangle caja; // Objeto tipo Rectangle
    
    caja = Leer_Dim(); // Llama a la funcion que lee las dimensiones
    
    Diagrama(caja); // Imprime diagrama
    
    Desplegar (caja); // Llama a la funcion que despliega las dimensiones
    
    system("pause");
    
    return 0;
}

// Definicion de la funcion que lee las dimensiones

Rectangle Leer_Dim (void)
{
      Rectangle temp;
      
      double number;
    
      Rectangle Leer_Dim();
      do{
            cout << "Indique la anchura --------> ";
            cin >> number;
            if(number < 0)
            {         
                      cout << "SI TE PASAS DE LISTO" << endl;
                      cout << "Te come el cuco" << endl;
                      system("pause");
            }
            system("cls");
        }while(number < 0);
    
      temp.setWidth(number);
     do{
           cout << "Indique longitud -------> ";
           cin >> number;
           if(number < 0)
            {         
                      cout << "SI TE PASAS DE LISTO" << endl;
                      cout << "Te come el cuco" << endl;
                      system("pause");
            }
            system("cls");
        }while(number < 0);
    
      temp.setLength(number);
      
      return temp;
} // END OF FUNCTION

void Diagrama (const Rectangle& caja)
{
     if ( caja.getWidth() < caja.getLength())
     {
        system("cls");
        cout << "\t----------------------------" << endl;
        cout << "\t|                          |" << endl;
        cout << "\t|                          |" << endl;
        cout << "\t|                          |" << "  " << caja.getWidth() << endl;
        cout << "\t|                          |" << endl;
        cout << "\t|                          |" << endl;
        cout << "\t----------------------------" << endl << endl;
        cout << "\t             " << caja.getLength() <<endl;
     }
     else
     {
        system("cls");
        cout << "\t------------------" << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << "  " << caja.getWidth() << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << endl;
        cout << "\t|                |" << endl;
        cout << "\t------------------" << endl << endl;
        cout << "\t         " << caja.getLength() <<endl;
     }
          
}
// Definicion de la funcion que despliega las dimensiones

void Desplegar (const Rectangle& caja)
{
    cout << endl << endl;
    cout << fixed << showpoint << setprecision(3);
    cout << "\t<<<DIMENSIONES DEL RECTANGULO>>>\n\n" << endl;
    cout << "\tEl ancho ----------> " << caja.getWidth() << endl;
    cout << "\tEl largo ----------> " << caja.getLength() << endl;
    cout << "\tEl perimetro ------> " << caja.getPerimeter() << endl;
    cout << "\tEl area -----------> " << caja.getArea() << endl << endl;
    
}//END OF FUNTION
