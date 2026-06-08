#include <iostream>
#include <string>
using namespace std;
const int MAX_ALUMNOS = 3;
string nombres[MAX_ALUMNOS];
string matriculas[MAX_ALUMNOS];
float promedios[MAX_ALUMNOS];
int totalAlumnos = 0;
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

            if (totalAlumnos < MAX_ALUMNOS)
            {
                cout << "Nombre del alumno: ";
                cin.ignore();
                getline(cin, nombres[totalAlumnos]);

                cout << "Matricula: ";
                getline(cin, matriculas[totalAlumnos]);

                cout << "Promedio: ";
                cin >> promedios[totalAlumnos];

                totalAlumnos++;

                cout << endl;
                cout << "Alumno registrado correctamente." << endl;
            }
            else
            {
                cout << "Limite de alumnos alcanzado." << endl;
            }

            break;

        case 2:

            if (totalAlumnos == 0)
            {
                cout << "No hay alumnos registrados." << endl;
            }
            else
            {
                cout << "=== LISTA DE ALUMNOS ===" << endl;

                for (int i = 0; i < totalAlumnos; i++)
                {
                    cout << "Alumno #" << i + 1 << endl;
                    cout << "Nombre: " << nombres[i] << endl;
                    cout << "Matricula: " << matriculas[i] << endl;
                    cout << "Promedio: " << promedios[i] << endl;
                    cout << "------------------------" << endl;
                }
            }

            break;

        case 3:
        {
            string matriculaBuscar;
            bool encontrado = false;

            cout << "Ingresa la matricula del alumno a buscar: ";
            cin.ignore();
            getline(cin, matriculaBuscar);

            for (int i = 0; i < totalAlumnos; i++)
            {
                if (matriculas[i] == matriculaBuscar)
                {
                    cout << "=== ALUMNO ENCONTRADO ===" << endl;
                    cout << "Nombre: " << nombres[i] << endl;
                    cout << "Matricula: " << matriculas[i] << endl;
                    cout << "Promedio: " << promedios[i] << endl;

                    encontrado = true;
                    break;
                }
            }

            if (!encontrado)
            {
                cout << "No se encontro ningun alumno con esa matricula." << endl;
            }

            break;
        }

        case 4:
        {
            string matriculaEliminar;
            bool encontrado = false;
            int posicionEliminar = -1;

            cout << "Ingresa la matricula del alumno a eliminar: ";
            cin.ignore();
            getline(cin, matriculaEliminar);

            for (int i = 0; i < totalAlumnos; i++)
            {
                if (matriculas[i] == matriculaEliminar)
                {
                    encontrado = true;
                    posicionEliminar = i;
                    break;
                }
            }

            if (encontrado)
            {
                for (int i = posicionEliminar; i < totalAlumnos - 1; i++)
                {
                    nombres[i] = nombres[i + 1];
                    matriculas[i] = matriculas[i + 1];
                    promedios[i] = promedios[i + 1];
                }

                totalAlumnos--;

                cout << "Alumno eliminado correctamente." << endl;
            }
            else
            {
                cout << "No se encontro ningun alumno con esa matricula." << endl;
            }

            break;
        }

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