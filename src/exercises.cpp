
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HER
    for(int i = 0; i <= s1.size(); i++){
        if (s1 [i] == ' '){
          cout <<i << endl;
      }
    }
    cout << s1.size() << endl;
}

  void exercise_2(string s1) {
  // TODO: YOUR CODE HERe
  string word = "";

    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != ' ') {
            word += s1[i];
        } else {
            if (word != "") {
                cout << "[" << word << "]" << endl; // Agregamos endl aquí
                word = "";
            }
        }
    }

    if (word != "") {
        cout << "[" << word << "]" << endl; // Agregamos endl aquí también
    }
}

void exercise_3(string s1) {
    int indice = 0;

    for (char caracter : s1) {
        // Si el carácter es un espacio, imprimir el índice y reiniciar para la próxima palabra
        if (caracter == ' ') {
            cout << indice << endl;
            indice = 0; // Reiniciar el índice para la próxima palabra
        } else {
            indice++; // Incrementar el índice para cada carácter de la palabra
        }
    }

    // Imprimir el índice para la última palabra
    cout << indice << endl;
}


void exercise_4(int n) {
    int indice = -1; // Iniciar el índice en -1 para tener en cuenta el primer carácter

    for (char caracter : s1) {
        // Incrementar el índice solo si el carácter no es un espacio
        if (caracter != ' ') {
            indice++;
        } else {
            // Si encontramos un espacio, imprimir el índice y reiniciar para la próxima palabra
            cout << indice << endl;
            indice = -1; // Reiniciar el índice para la próxima palabra
        }
    }

    // Imprimir el índice para la última palabra
    cout << indice << endl;
}


void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}