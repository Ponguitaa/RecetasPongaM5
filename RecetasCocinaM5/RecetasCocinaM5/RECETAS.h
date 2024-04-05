#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;


// Definir una estructura para representar una receta
struct Recipe {
    string name;
    string ingredients[20]; // Array de 10 elementos para los ingredientes
};


class RECETAS {
public:
    // Función para imprimir las recetas que contienen todos los ingredientes ingresados por el usuario
    void suggestRecipes(const Recipe recipes[], int numRecipes, const string userIngredients[], int numUserIngredients);
};

