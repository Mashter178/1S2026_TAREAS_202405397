#include <string>
#include <iostream>
using namespace std;

class Equipo{
private:  
    string nombre;
    int puntos;
    int golesF;
    int golesC;

public:
    string pais;
    string confederacion;

    // Constructor
    Equipo(string nombre, string pais, string confederacion){
        this->nombre = nombre;
        this->pais = pais;
        this->confederacion = confederacion;
        this->puntos = 0;
        this->golesF = 0;
        this->golesC = 0;
    }

    // Victoria
    void ganar(int golesF, int golesC){
        this->puntos += 3;
        this->golesF += golesF;
        this->golesC += golesC;
    }
    
    // Empate
    void empatar(int golesF, int golesC){
        this->puntos += 1;
        this->golesF += golesF;
        this->golesC += golesC;
    }

    // Mostrar información
    void mostrar(){
        cout << "- - - - - - - - - - - - - - - - - - - - -"<< endl;
        cout << "Equipo: " << nombre << endl;
        cout << "Pais: " << pais << endl;
        cout << "Confederacion: " << confederacion << endl;
        cout << "Puntos: " << puntos << endl;
        cout << "Goles a Favor: " << golesF << endl;
        cout << "Goles en Contra: " << golesC << endl;
    }
};

int main(){
    Equipo e1("Argentina", "Argentina", "CONMEBOL");
        e1.ganar(3, 1);      // Victoria 3-1
        e1.empatar(2, 2);    // Empate 2-2
        e1.mostrar();
    
    Equipo e2("Brasil", "Brasil", "CONMEBOL");
        e2.ganar(4, 0);      // Victoria 4-0
        e2.empatar(1, 1);    // Empate 1-1
        e2.mostrar();
    
    return 0;
}

