#include "RECETAS.h"

//El .cpp se encarga de desarrollar las funciones

// Función para imprimir las recetas de los ingredientes ingresados por el usuario
void RECETAS::suggestRecipes(const Recipe recipes[], int numRecipes, const string userIngredients[], int numUserIngredients) {
    bool found = false;
    for (int i = 0; i < numRecipes; ++i) {
        bool containsAllIngredients = true;
        for (int j = 0; j < numUserIngredients; ++j) {
            bool ingredientFound = false;
            for (int k = 0; k < 20; ++k) {
                if (recipes[i].ingredients[k] == userIngredients[j]) {
                    ingredientFound = true;
                    break;
                }
            }
            if (!ingredientFound) {
                containsAllIngredients = false;
                break;
            }
        }
        if (containsAllIngredients) {
            found = true;
            cout << "Receta sugerida: " << recipes[i].name << endl;
        }
    }
    if (!found) {
        cout << "Lo siento, no hay recetas que coincidan con los ingredientes proporcionados." << endl;
    }
}