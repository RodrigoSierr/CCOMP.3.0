#ifndef DOTADEX_H
#define DOTADEX_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class DotaDex {
private:
    std::string nombreUsuario;
    int idSteam;

public:
    DotaDex(std::string nombreUsuario);

    // Método para generar un ID de Steam aleatorio
    void generarIdSteam();

    // Método para obtener el ID de Steam
    int obtenerIdSteam() const;

    // Método para mostrar información del usuario
    void mostrarInformacion() const;
};

#endif // DOTADEX_H
