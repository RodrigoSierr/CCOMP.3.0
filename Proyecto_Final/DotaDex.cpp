#include "DotaDex.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

DotaDex::DotaDex(std::string nombreUsuario) : nombreUsuario(nombreUsuario), idSteam(0) {
    // Inicializar la semilla del generador de números aleatorios
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

void DotaDex::generarIdSteam() {
    // Generar un número aleatorio como ID de Steam
    idSteam = std::rand() % 10000;
}

int DotaDex::obtenerIdSteam() const {
    return idSteam;
}

void DotaDex::mostrarInformacion() const {
    std::cout << "Nombre de Usuario: " << nombreUsuario << std::endl;
    std::cout << "ID de Steam: " << idSteam << std::endl;
}
