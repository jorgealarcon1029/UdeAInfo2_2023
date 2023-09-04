#include <iostream>

using namespace std;

int main() {
    int Menu;

    do {
         // Mostrar el menú
             cout << endl;
             cout << "Buenas tardes, seleccione una opcion del Menu:" << endl;
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
             cout << "Elije una opcion: ";
             cin >> Menu;

    // Procesar la opción seleccionada
    switch (Menu) {
    case 1:
        cout << "1. Identificador de Caracteres: " << endl;
        char Caracter,Salida;

        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR
        cout << "Ingrese un caracter: " << endl;
        cin >> Caracter;
        Caracter = tolower(Caracter); // Utilzamos esta linea para convertir en miniscula el ingreso del usuario.
        // Verificar si el carácter es una letra
        // Verificar si el carácter es una letra
        if ((Caracter >= 'a' && Caracter <= 'z')) {
            // Comprobar si es una vocal
            if (Caracter == 'a' || Caracter == 'e' || Caracter == 'i' || Caracter == 'o' || Caracter == 'u') {
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

            break;
    case 2:
        cout << "2. Contador de monedas y billetes: " << endl;
        int cantidad;

        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR

        int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
        int monedas[] = {500, 200, 100, 50};

        // Solicitar al usuario ingresar la cantidad deseada
        cout << "Ingrese la cantidad deseada: ";
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

        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 3:
        cout << "3. Lector de Mes/Dia" << endl;


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 4:

        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;


    case 5:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 6:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 7:



        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 8:

        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;


    case 9:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 10:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 11:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 12:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 13:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 14:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 15:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 16:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

        break;

    case 17:


        do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR


        // Preguntar al usuario si desea salir o continuar
        cout << endl;
        cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
        cin >> Salida;

        } while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

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
