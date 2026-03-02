#include <iostream>
#include <string>
using namespace std;


// Nombre: GEOVANI SAMAYOA
// Carné: 9941-24-10076
// Sección: B
// Tarea Semana IV - Lista de Productos


struct Producto {
    int codigo;
    string nombre;
    double precio;
};

struct Nodo {
    Producto data;
    Nodo* siguiente;
};

int main() {

    cout << "Nombre: Elder Geovani Samayoa Esquivel" << endl << endl;

    Nodo* cabeza = nullptr;
    Nodo* ultimo = nullptr;


    for (int i = 0; i < 4; i++) {

        Nodo* nuevo = new Nodo;
        nuevo->siguiente = nullptr; 

        cout << "Ingresa codigo del producto " << i + 1 << ": ";
        cin >> nuevo->data.codigo;

        cin.ignore();
        cout << "Ingresa nombre del producto " << i + 1 << ": ";
        getline(cin, nuevo->data.nombre);

        cout << "Ingresa precio del producto " << i + 1 << ": ";
        cin >> nuevo->data.precio;


        if (cabeza == nullptr) {
            cabeza = nuevo;
            ultimo = nuevo;
        } else {
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        }
    }

    Nodo* actual = cabeza;
    double total = 0;

    cout << endl << " LISTA DE PRODUCTOS " << endl;

    while (actual != nullptr) {
        cout << "Codigo : " << actual->data.codigo << endl;
        cout << "Nombre: " << actual->data.nombre << endl;
        cout << "Precio : Q" << actual->data.precio << endl;


        total += actual->data.precio;
        actual = actual->siguiente;
    }

    cout << "otal acumulado: Q" << total << endl;
    actual = cabeza;

    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }

    cabeza = nullptr;

    return 0;
}