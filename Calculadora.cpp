#include <iostream>

using namespace std;

int main() {

    int opcion, num1, num2;

    do {
        cout << "¿Qué operación de 2 números desea realizar?" << endl;
        cout << "1. Suma." << endl;
        cout << "2. Resta." << endl;
        cout << "3. Multiplicación." << endl;
        cout << "4. Salir." << endl;
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Introduzca el primer número: " << endl;
                cin >> num1;
                cout << "Introduzca el segundo número: " << endl;
                cin >> num2;
                cout << "El resultado es: " << num1+num2 << endl;
                break;
            case 2:
                cout << "Introduzca el primer número: " << endl;
                cin >> num1;
                cout << "Introduzca el segundo número: " << endl;
                cin >> num2
                cout << "El resultado es: " << num1-num2 << endl;
                break;
            case 3:
                cout << "Introduzca el primer número: " << endl;
                cin >> num1;
                cout << "Introduzca el segundo número: " << endl;
                cin >> num2;
                cout << "El resultado es: " << num1*num2 << endl;
                break;

        }
    } while(opcion != 4);



}
