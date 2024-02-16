#include <cstdlib>
#include <stdexcept>
#include <iostream>
#include "PartidaDeAjedrez.h"
#include "Persona.h"
#include "PiezaDeAjedrez.h"
#include "Alfil.h"

using namespace std;

/**
 * @file main.cpp
 * @brief Main file for the chess game
 */

/**
 * @brief Main function of the program
 * @param argc Number of command line arguments
 * @param argv Array of command line arguments
 * @return int Returns 0 upon successful execution
 */
int main(int argc, char **argv) {

    /**
     * @brief Array of Person objects
     */
    Persona vpersona[4] = {Persona("YO", 'M'), Persona("TU", 'F'), Persona(), Persona()};

    /**
     * @brief Object of PartidaDeAjedrez class
     */
    PartidaDeAjedrez primeraPartida(1, 1, 2017);
    primeraPartida.setjugador(1, &vpersona[0]);
    primeraPartida.setjugador(2, &vpersona[1]);

    /**
     * @brief Adding new pieces to the game
     */
    primeraPartida.nuevaPieza("caballo", 'b', 3, 1, 'a');
    primeraPartida.nuevaPieza("rey", 'n', 6, 2, 'c');
    primeraPartida.nuevaPieza("reina", 'b', 8, 4, 'b');

    /**
     * @brief Try-catch block to handle exceptions
     */
    try {
        PiezaDeAjedrez *p = primeraPartida.getPieza(6);
        std::cout << p->GetNombre() << std::endl;
    } catch (std::range_error &ra) {
        std::cerr << "Error: " << ra.what() << std::endl;
    }

    /**
     * @brief Copy constructor for PartidaDeAjedrez class
     */
    PartidaDeAjedrez nuevacopia(primeraPartida);

    /**
     * @brief Displaying the number of white and black pieces
     */
    std::cout << "Nº Piezas blancas: " << primeraPartida.numPiezass('b') << std::endl;
    std::cout << "Nº Piezas negras: " << primeraPartida.numPiezass('n') << std::endl;

    return 0;
}