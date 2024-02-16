#include "Persona.h"

/**
 * @brief Constructor for the Persona class
 * @param nnombre The name of the person
 * @param ssexo The sex of the person
 */
Persona::Persona(std::string nnombre, char ssexo) : nombre(nnombre), sexo(ssexo) {
}

/**
 * @brief Copy constructor for the Persona class
 * @param orig The original Persona object to be copied
 */
Persona::Persona(const Persona &orig) {
}

/**
 * @brief Destructor for the Persona class
 */
Persona::~Persona() {
}
