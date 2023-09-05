//////// Laboratorio #1 implementado por Jorge Alarcon Arenas. CC 1059701029 ---- UdeA/2023 //////////

#include <iostream>

using namespace std;

void idcaracter();
void contdin ();
void lectormd();
void lectorhmin ();
void rombo();
void euler();
void Fibonacci();
void Mulmenor();
void NalaN();
void Nesimo();

/////////////// MAIN ///////////////////////

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
        rombo();
        break;
    case 6:
        euler();
        break;
    case 7:
        Fibonacci();
        break;
    case 8:
        Mulmenor();;
        break;
    case 9:
        NalaN();
        break;
    case 10:
        Nesimo();
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

/////////////////////// FUNCIONES ///////////////////////


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

//revisar el uso de caracteres no permitido
void contdin (){

cout << endl;
cout << "2. Contador de monedas y billetes: " << endl;
int cantidad;
char Salida;

do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR

    int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int monedas[] = {500, 200, 100, 50};

    // Solicitar al usuario ingresar la cantidad deseada
    cout << endl;
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
    //break;

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

int hora, duracion, horas, minutos;
char Salida;

do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR

   cout << endl;
   cout << "Ingrese la hora en formato de reloj de 24 horas (por ejemplo, 1245): ";
   cin >> hora;

    if (hora < 0 || hora >= 2400 || hora % 100 >= 60) {
            cout << hora << " es un tiempo invalido." << endl;
    }

    cout << "Ingrese la duracion en formato de reloj de 24 horas (por ejemplo, 345): ";
            cin >> duracion;

    if (duracion < 0 || duracion >= 2400 || duracion % 100 >= 60) {
            cout << duracion << " es un tiempo invalido." << endl;
    }

    horas = (hora + duracion) / 100;
    minutos = (hora + duracion) % 100;

    if (minutos >= 60) {
            horas += minutos / 60;
            minutos %= 60;
    }

    if (horas >= 24) {
            horas %= 24;
    }

    cout << "La hora es ";
    if (horas < 10) {
            cout << "0";
    }
    cout << horas;
    if (minutos < 10) {
            cout << "0";
    }
    cout << minutos << "." << endl;

    // Preguntar al usuario si desea salir o continuar
    cout << endl;
    cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
    cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

void rombo(){

int rombito;
char Salida;
do { // ESTRUCTURA PARA QUE LA INSTRUCCION SE EJECUTE HASTA QUE SE DESEE SALIR

cout << endl;
cout << "Ingrese un numero entero impar para el tamano del rombo: ";
cin >> rombito;

if (rombito % 2 == 0 || rombito < 1) { // Validar que sea un numero impar positivo
    cout << "El numero ingresado no es valido. Debe ser un numero entero impar positivo." << endl;
}

// Imprimir la parte superior del rombo
for (int i = 1; i <= rombito; i += 2) {
    // Imprimir espacios en blanco antes de los asteriscos
    for (int j = 0; j < (rombito - i) / 2; j++) {
            if (rombito % 2 == 0 || rombito < 1) {
            } else {
                    cout << " ";

        }
    }
    // Imprimir asteriscos
    for (int j = 0; j < i; j++) {
            if (rombito % 2 == 0 || rombito < 1) {
            } else {
                        cout << "*";
            }

    }
    if (rombito % 2 == 0 || rombito < 1) {
    } else {
            cout << endl;
    }
}

// Imprimir la parte inferior del rombo
for (int i = rombito - 2; i >= 1; i -= 2) {
    // Imprimir espacios en blanco antes de los asteriscos
    for (int j = 0; j < (rombito - i) / 2; j++) {
            if (rombito % 2 == 0 || rombito < 1) {
            } else {
                        cout << " ";

            }
    }
    // Imprimir asteriscos
    for (int j = 0; j < i; j++) {
            if (rombito % 2 == 0 || rombito < 1) {
            } else {
                        cout << "*";
            }
    }
    if (rombito % 2 == 0 || rombito < 1) {
    } else {
            cout << endl;
    }
}

// Preguntar al usuario si desea salir o continuar
cout << endl;
cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.


}

//revisar euler se suma infinitamente
void euler(){

int num;
double euler = 1.0;
char Salida;
do {

cout << endl;
cout << "Ingrese el numero de elementos para la aproximacion de e: ";
cin >> num;

if (num < 0) {
cout << "El numero de elementos debe ser no negativo." << endl;

}

double factorial = 1.0;

for (int i = 1; i <= num; ++i) {
factorial *= i;
euler += 1.0 / factorial;
}

cout.precision(1);  // Establecer la precisión para mostrar más decimales
cout << "e es aproximadamente: " << fixed << euler << endl;
cout << euler << 1.0;

// Preguntar al usuario si desea salir o continuar
cout << endl;
cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

void Fibonacci(){

int numF;
char Salida;

do {

cout << endl;
cout << "Ingrese un numero para iniciar la suma Fibonacci: ";
cin >> numF;

int a = 1;  // Primer número de Fibonacci
int b = 1;  // Segundo número de Fibonacci
int suma_pares = 0;

cout << endl;
cout << "Los numeros de la suma son: " << endl;
while (a <= numF) {
cout << a << " "; //imprime la serie Fibonacci
if (a % 2 == 0) {
            suma_pares += a;
}
int temp = a + b; //La magia del Fibonacci está aqui.
a = b;
b = temp;
}

cout << endl;
cout << "El resultado de la suma de pares es: " << suma_pares << endl;


// Preguntar al usuario si desea salir o continuar
cout << endl;
cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

// No logro imprimir la posicion m11, m12, ETC
void Mulmenor(){

int a, b, c;
int suma = 0;
int posicion = 0;

char Salida;

do {

cout << endl;
cout << "Ingrese el valor de a: ";
cin >> a;

cout << "Ingrese el valor de b: ";
cin >> b;

cout << "Ingrese el valor de c: ";
cin >> c;

for (int i = 1; i < c; ++i) {
cout << "m" << i << posicion <<" + ";
if (i % a == 0 || i % b == 0) {
            suma += i;

}
}


// Imprimir la suma en el formato requerido
if (suma > 0) {
// Eliminar el último " + " y agregar el resultado
cout << "= " << suma << endl;
} else {
cout << "No hay múltiplos de " << a << " ni " << b << " menores que " << c << "." << endl;
}


// Preguntar al usuario si desea salir o continuar
cout << endl;
cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

// Comprender el ejercicio
void NalaN(){

char Salida;
int n;
int suma = 0;

do {

cout << endl;
cout << "Ingrese un numero entero N: ";
        cin >> n;

// Asegurarse de que el número sea positivo
if (n < 0) {
cout << "Por favor, ingrese un numero entero positivo." << endl;

}

int numero_original = n; // Guardar el número original para mostrar al final

while (n > 0) {
int digito = n % 10; // Obtener el último dígito
int resultado = 1;

// Elevar el dígito a sí mismo
for (int i = 0; i < digito; ++i) {
            resultado *= digito;
}

suma += resultado;
n /= 10; // Eliminar el último dígito
}

cout << "El resultado de la suma es: " << suma << " para el numero " << numero_original << "." << endl;


// Preguntar al usuario si desea salir o continuar
cout << endl;
cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}

// funcion para evaluar el numero primo
bool esPrimo(int num) {
if (num <= 1) {
return false;
}
for (int i = 2; i * i <= num; ++i) {
if (num % i == 0) {
return false;
}
}
return true;
}

void Nesimo(){

int n;
int contadorPrimos = 0;
int numero = 2;
char Salida;
esPrimo(numero);

do {

cout << endl;
cout << "Ingrese el valor de n para encontrar el enesimo numero primo: ";
cin >> n;

if (n <= 0) {
cout << "Por favor, ingrese un valor positivo para n." << endl;

}

while (contadorPrimos < n) {
if (esPrimo(numero)) {
            contadorPrimos++;
}
numero++;
}

cout << "El primo numero " << n << " es: " << numero - 1 << endl;


// Preguntar al usuario si desea salir o continuar
cout << endl;
cout << "Presiona 'S' para salir o cualquier otra tecla para continuar: ";
cin >> Salida;

} while (Salida != 'S' && Salida!= 's'); // CONDICION DE SALIDA DEL CASO, PARA RETORNAR AL MENU PRINCIPAL.

}



