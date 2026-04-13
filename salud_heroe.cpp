// Online C++ compiler to run C++ program online


#include <iostream>
using namespace std ;
void mostrarEstado(string nombre, int hp, int maxHP){
    
    cout << nombre << " - " << "HP: " << hp << " / " << maxHP << endl;
}

void recibirDanio(int& hp, int danio){
    hp = hp - danio;
    if ( hp < 0){
        hp = 0;
    }
}

void curar(int& hp, int cantidad, int maxHP){
    hp = hp + cantidad;
    if (hp > maxHP){
        hp = maxHP;
    }
}


int main() {
    string nombre = "Arthas";
    int hp = 100, maxHP = 100;
    cout << "Estado del heroe" << endl;
    mostrarEstado (nombre, hp, maxHP);
    
    cout << "Arthas recibe 30 de danio" << endl;
  
    recibirDanio (hp, 30);
    mostrarEstado (nombre, hp, maxHP);
    cout << "Arthas recibe 50 de danio" << endl;
mostrarEstado (nombre, hp, maxHP);
    recibirDanio (hp, 50);
    mostrarEstado (nombre, hp, maxHP);
    cout << "Arthas se cura 40 puntos" << endl;
    curar(hp, 40, maxHP);
    mostrarEstado (nombre, hp, maxHP);
    cout << "Arthas recibe 80 de danio" << endl;
    recibirDanio (hp, 80);
    mostrarEstado (nombre, hp, maxHP);

    return 0;
}