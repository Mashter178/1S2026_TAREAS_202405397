#include <iostream>
#include <fstream>
#include <string>

void leerInventario() {
    std::ifstream archivo("inventario.inv");

    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo.\n";
        return;
    }

    std::string nombre;
    int cantidad;
    double precio;
    std::string lugar;

    std::cout << "====================\n";
    std::cout << "\n=== INVENTARIO ===" << '\n';
    while (archivo >> nombre >> cantidad >> precio >> lugar) {
        std::cout << "Nombre: " << nombre
            << " | Cantidad: " << cantidad
            << " | Precio: " << precio
            << " | Ubicacion: " << lugar
            << '\n';
    }
    std::cout << "==================\n\n";
    std::cout << "Presiona Enter para volver al menu...";
    std::cin.ignore();
    std::cin.get();

    archivo.close();
}

int main() {
    int opcion;
    while (true) {
        system("cls");
        std::cout << "--- MENU PRINCIPAL ---\n";
        std::cout << "1. Leer inventario\n";
        std::cout << "2. Salir\n";
        std::cout << "Elige una opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            leerInventario();
        } else if (opcion == 2) {
            std::cout << "Hasta luego!\n";
            break;
        } else {
            std::cout << "Opcion no valida. Intenta de nuevo.\n\n";
        }
    }

    return 0;
}