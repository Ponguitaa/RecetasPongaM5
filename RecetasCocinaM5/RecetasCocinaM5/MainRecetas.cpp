#include "RECETAS.h"

using namespace std;

int main() {

    // Asignar nombre a la clase
    RECETAS recetas;

    // Arrays platos con sus ingredientes
    Recipe recipes[] = {
        {"Pizza Pepperoni", {"harina", "tomate", "queso", "pepperoni", "sal"}},
        {"Ensalada César", {"lechuga", "pollo", "crutones", "queso", "salsa César"}},
        {"Bacalao al Alioli", {"bacalao", "patatas", "pimiento verde", "harina de trigo", "huevo", "ajo", "aceite", "sal"}},
        {"Espaguetis a la boloñesa", {"espaguetis", "carne picada", "sal", "tomate", "albahaca", "queso", "cebolla", "ajo", "oregano"}},
        {"Calzone", {"harina", "tomate", "queso", "aceite", "sal", "huevo", "salami"}},
        {"Nachos", {"nachos", "chile", "carne picada", "queso", "frijoles", "tomate", "guacamole", "cilantro", "sal", "cebolla", "tomate", "lima"}},
        {"Kebab", {"carne", "pan", "lechuga", "cebolla", "salsa yogurt"}},
        {"Macarrones con tomate", {"macarrones", "tomate", "queso", "carne"}},
    };

    const int numRecipes = sizeof(recipes) / sizeof(recipes[0]); // Obtener el número de recetas

    // Solicitar ingredientes al usuario
    cout << "Ingrese el ingrediente que tenga:" << endl;
    string input;
    getline(cin, input);

    // Dividir la entrada del usuario en ingredientes individuales
    istringstream iss(input);
    string userIngredients[20]; // Array de 10 elementos para los ingredientes del usuario
    int numUserIngredients = 0;
    while (iss >> userIngredients[numUserIngredients] && numUserIngredients < 20) {
        numUserIngredients++;
    }

    // Sugerir recetas con los ingredientes del usuario
    recetas.suggestRecipes(recipes, numRecipes, userIngredients, numUserIngredients);

    return 0;
}
