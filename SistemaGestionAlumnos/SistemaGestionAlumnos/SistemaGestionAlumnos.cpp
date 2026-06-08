#include <iostream>
using namespace std;

int main()
{
    int opcion;

    do
    {
        cout << "===================================" << endl;
        cout << "   SISTEMA DE GESTION DE ALUMNOS   " << endl;
        cout << "===================================" << endl;
        cout << "1. Agregar alumno" << endl;
        cout << "2. Mostrar alumnos" << endl;
        cout << "3. Buscar alumno" << endl;
        cout << "4. Eliminar alumno" << endl;
        cout << "5. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        cout << endl;

        switch (opcion)
        {
        case 1:
            cout << "Opcion seleccionada: Agregar alumno" << endl;
            break;

        case 2:
            cout << "Opcion seleccionada: Mostrar alumnos" << endl;
            break;

        case 3:
            cout << "Opcion seleccionada: Buscar alumno" << endl;
            break;

        case 4:
            cout << "Opcion seleccionada: Eliminar alumno" << endl;
            break;

        case 5:
            cout << "Saliendo del sistema..." << endl;
            break;

        default:
            cout << "Opcion no valida. Intenta nuevamente." << endl;
            break;
        }

        cout << endl;

    } while (opcion != 5);

    return 0;
}