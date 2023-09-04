//////// Laboratorio #1 implementado por Jorge Alarcon Arenas. CC 1059701029 ---- UdeA/2023 //////////

#include <iostream>

using namespace std;

/*para crear funciones
void idcaracter();
*/

void idcaracter();
void contdin ();
void lectormd();
void lectorhmin ();

int main() {
    int Menu;

    do {
         // Mostrar el menú
             cout << endl;
             cout << "Buenas tardes, seleccione una opcion del Menu:" << endl;
             cout << endl;
             cout << "1. Identificador de Caracteres" << endl;
             cout << "2. Contador de monedas y billetes" << endl;
             cout << "3. Lector de Mes/Dia" << endl;
             cout << "4. Lector de Hora/Mins" << endl;
             cout << "5. Imprimir Rombo con impar" << endl;
             cout << "6. Valor de Euler" << endl;
             cout << "7. Suma Fibonacci" << endl;
             cout << "8. Sumar A,B,C multiplos menores a C" << endl;
             cout << "9. Suma de N a la N" << endl;
             cout << "10. Enesimo numero primo" << endl;
             cout << "11. Minimo comun multiplo entre 1 y N" << endl;
             cout << "12. Maximo Factor Primo de un numero" << endl;
             cout << "13. Suma de numeros primos menores a N" << endl;
             cout << "14. Numeros Palindromo" << endl;
             cout << "15. Espiral Diagonal NxN" << endl;
             cout << "16. Serie Collatz" << endl;
             cout << "17. Numero Triangular" << endl;
             cout << "0. Salir" << endl;
             cout << endl;
             cout << "Elije una opcion: ";
             cin >> Menu;

    // Procesar la opción seleccionada
    switch (Menu) {
    case 1:
        idcaracter();
        break;
    case 2:
        contdin();
        break;
    case 3:
        lectormd();
        break;
    case 4:
        lectorhmin();
        break;
    case 5:
        idcaracter();
        break;
    case 6:
        idcaracter();
        break;
    case 7:
        idcaracter();
        break;
    case 8:
        idcaracter();
        break;
    case 9:
        idcaracter();
        break;
    case 10:
        idcaracter();
        break;
    case 11:
        idcaracter();
        break;
    case 12:
        idcaracter();
        break;
    case 13:
        idcaracter();
        break;
    case 14:
        idcaracter();
        break;
    case 15:
        idcaracter();
        break;
    case 16:
        idcaracter();
        break;
    case 17:
        idcaracter();
        break;
    case 0:
        cout << endl;
        cout << "Saliendo del programa." << endl;
        break;
    default:
        cout << endl;
        cout << "Opción no valida. Por favor, elige una de las opciones del Menu." << endl;
            break;
    }
} while (Menu != 0);

    return 0;

}


void idcaracter() {

    cout << "1. Identificador de Caracteres: " << endl;
char Caracter,Salida;

do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR
    cout << endl;
    cout << "Ingrese un caracter: " << endl;
    cin >> Caracter;
    if(Caracter>=97){
            Caracter-=32;
    }

    // Verificar si el carácter es una letra
    if ((Caracter >= 'A' && Caracter <= 'Z')) {
    // Comprobar si es una vocal
    if (Caracter == 'A' || Caracter == 'E' || Caracter == 'I' || Caracter == 'O' || Caracter == 'U') {
            cout << Caracter << " es una vocal." << endl;
    } else {
            cout << Caracter << " es una consonante." << endl;
    }
    } else {
    cout << Caracter << " no es una letra." << endl;
    }

    // Preguntar al usuario si desea salir o continuar
    cout << endl;
    cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
    cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

void contdin (){
cout << "2. Contador de monedas y billetes: " << endl;
int cantidad;
char Salida;

do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR

    int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int monedas[] = {500, 200, 100, 50};

    // Solicitar al usuario ingresar la cantidad deseada
    cout << "Ingrese valor a contar (SOLO NUMEROS): ";
    cin >> cantidad;

    int faltante = cantidad;

    cout << "Billetes y monedas necesarios para completar " << cantidad << ":" << endl;

    for (int i = 0; i < 6; i++) {
    int cantidadActual = faltante / billetes[i];
    if (cantidadActual > 0) {
            cout << billetes[i] << " : " << cantidadActual << endl;
            faltante %= billetes[i];
    }
    }

    for (int i = 0; i < 4; i++) {
    int cantidadActual = faltante / monedas[i];
    if (cantidadActual > 0) {
            cout << monedas[i] << " : " << cantidadActual << endl;
            faltante %= monedas[i];
    }
    }

    if (faltante > 0) {
    cout << "Faltante: " << faltante << endl;
    } else {
    cout << "La cantidad se ha completado." << endl;
    }
    break;

    // Preguntar al usuario si desea salir o continuar
    cout << endl;
    cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
    cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

void lectormd(){

int mes, dia;
char resultado = '\0';
char Salida;
do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR

cout << endl;
cout << "Ingrese el mes (1-12): ";
        cin >> mes;
cout << "Ingrese el dia: ";
        cin >> dia;

if (mes < 1 || mes > 12) { // Valida que el numero de mes sea correcto
    cout << resultado << mes << " es una fecha invalida." << endl;
    }else {
        if (dia < 1 || dia > 31) { // Valida que el numero de dia sea correcto
    cout << resultado << dia << "/" << mes << " es una fecha invalida." << endl;
            }else {
                if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) { // Valida los meses que no exceden los 30 dias
                    cout << resultado << dia << "/" << mes << " es una fecha invalida." << endl;
                }else {
                        if (mes == 2 && dia == 29) {
                        cout << resultado << dia << "/" << mes <<" es valida en bisiesto." << endl;
                        }else {
                                if (mes == 2 && dia > 29) {
                                cout << resultado << dia << "/" << mes <<" es una fecha invalida." << endl;
                        }else {
                        cout << dia << "/" << mes <<" es una fecha valida." << endl;
                            }
                        }
                    }
            }
        }
    // Preguntar al usuario si desea salir o continuar
    cout << endl;
    cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
    cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

void lectorhmin (){


}
/*Definir la funcion

void NumeroPalindromo (){
CODIGO DE LA FUNCION

}
*/

/*Menu Salida
        char Salida;
        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

*/
