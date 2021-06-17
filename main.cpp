#include <iostream>
#include <iostream>
//Se ingresa la edad de un estudiante. Si la edad es de 5 a 10 años, se hace
//un recargo del 1% al costo de la matrícula. Si la edad es superior a 10 años
//y menor o igual que 15 años, el recargo será del 2%. Si la edad es mayor que
//15 y menor o igual que 20, el recargo es del 4%. Si la edad es superior
//a 20 años, el recargo es del 6%.
// Para las edades inferiores a 5 años, no hay recargo
using namespace  std;

int main() {
    int edad;
    double recargo = 0, costoMatricula = 0;

    cout << "\nIngresa la edad: ";
    cin >> edad;
    cout << "\nIngrese el costo de la matrícula: ";
    cin >> costoMatricula;

    if (edad < 5)
        recargo = 0;
    else if (edad <= 10)
        recargo = 0.01;
    else if (edad <= 15)  // (edad>10 && edad<=15)
        recargo = 0.02;
    else if (edad <= 20)
        recargo = 0.04;
    else
        recargo = 0.06;
    double rec = costoMatricula * recargo;
    double valorpagar = costoMatricula + rec;

    cout << "\nTu edad es de " << edad << " años, tu recago es: " << rec;
    cout << "\n Debes pagar en total " << valorpagar;
    return 0;
}