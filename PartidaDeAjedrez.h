#ifndef AJEDREZPOO_PARTIDADEAJEDREZ_H
#define AJEDREZPOO_PARTIDADEAJEDREZ_H

#include "Persona.h"
#include "PiezaDeAjedrez.h"

/**
 * @file PartidaDeAjedrez.h
 * @brief Header file for the PartidaDeAjedrez class
 */

/**
 * @class PartidaDeAjedrez
 * @brief Class representing a chess game
 * @details This class contains all the information about a chess game, including the date, the players, and the pieces
 */
class PartidaDeAjedrez {
public:
    static const int MAX_PIEZAS = 32;

    /**
     * @brief Default constructor for the PartidaDeAjedrez class
     */
    PartidaDeAjedrez() = default;

    /**
     * @brief Constructor for the PartidaDeAjedrez class
     * @param ddia The day of the chess match
     * @param mmes The month of the chess match
     * @param aanio The year of the chess match
     */
    PartidaDeAjedrez(int ddia, int mmes, int aanio);

    /**
     * @brief Copy constructor for the PartidaDeAjedrez class
     * @param orig The original PartidaDeAjedrez object to be copied
     */
    PartidaDeAjedrez(const PartidaDeAjedrez &orig);

    /**
     * @brief Destructor for the PartidaDeAjedrez class
     */
    virtual ~PartidaDeAjedrez();

    /**
     * @brief Sets the year of the chess match
     * @param anio The year of the chess match
     */
    void SetAnio(int anio);

    /**
     * @brief Gets the year of the chess match
     * @return The year of the chess match
     */
    int GetAnio() const;

    /**
     * @brief Sets the month of the chess match
     * @param mes The month of the chess match
     */
    void SetMes(int mes);

    /**
     * @brief Gets the month of the chess match
     * @return The month of the chess match
     */
    int GetMes() const;

    /**
     * @brief Sets the day of the chess match
     * @param dia The day of the chess match
     */
    void SetDia(int dia);

    /**
     * @brief Gets the day of the chess match
     * @return The day of the chess match
     */
    int GetDia() const;

    /**
     * @brief Sets a player for the chess match
     * @param numJugador The number of the player (0 or 1)
     * @param nuevoJugador A pointer to the new player
     * @return A pointer to the new player
     */
    Persona *setjugador(int numJugador, Persona *nuevoJugador);

    /**
     * @brief Creates a new chess piece and adds it to the game
     * @param nombreP The name of the chess piece
     * @param colorP The color of the chess piece
     * @param valorP The value of the chess piece
     * @param filaP The row position of the chess piece on the board
     * @param colP The column position of the chess piece on the board
     */
    void nuevaPieza(std::string nombreP, char colorP, int valorP, int filaP, char colP);

    /**
     * @brief Retrieves a chess piece from the game
     * @param pos The position of the chess piece in the array
     * @return A pointer to the chess piece
     */
    PiezaDeAjedrez *getPieza(int pos);

    /**
     * @brief Counts the number of chess pieces of a specific color
     * @param c The color of the chess pieces to count
     * @return The number of chess pieces of the specified color
     */
    int numPiezass(char c);

    /**
     * @brief Moves a chess piece to a new position
     * @param pieza The position of the chess piece in the array
     * @param incFila The row increment for the move
     * @param incCol The column increment for the move
     */
    void mover(int pieza, int incFila, int incCol);

private:
    int dia = 1;
    int mes = 1;
    int anio = 1;

    Persona *jugadores[2] = {nullptr, nullptr};
    PiezaDeAjedrez *piezas[MAX_PIEZAS];
    int numPiezas = 0;

};

#endif //AJEDREZPOO_PARTIDADEAJEDREZ_H