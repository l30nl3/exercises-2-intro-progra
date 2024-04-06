
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
                cout << "[" << word << "]" << endl; 
                word = "";
            }
        }
    }

    if (word != "") {
        cout << "[" << word << "]" << endl; 
    }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
   int cakeCount = 0;

    string numberStr = "";
    bool foundSpace = false; 

    for (char c : s1) {
        if (c == ' ') {
            foundSpace = true; 
            if (!numberStr.empty()) {
                int cake = 0;
               
                for (char digit : numberStr) {
                    cake = cake * 10 + (digit - '0');
                }
                if (cake == 1) {
                    cout << "Om-nom-nom :P" << endl;
                    cakeCount++;

                    if (cakeCount >= 10) {
                        return; 
                    }
                } else {
                    cout << "No cake :(" << endl;
                    return; 
                }
            }
            numberStr = ""; 
        } else {
            if (foundSpace) {
               
                foundSpace = false;
            }
            numberStr += c;
        }
    }

    
    if (!numberStr.empty()) {
        int cake = 0;
        
        for (char digit : numberStr) {
            cake = cake * 10 + (digit - '0');
        }
        if (cake == 1) {
            cout << "Om-nom-nom :P" << endl;
        } else {
            cout << "No cake :(" << endl;
        }
    } else if (foundSpace) {

        cout << "No cake :(" << endl;
    }
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
      if (n < 0) {
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
        return;
    }

    
    if (n > 14) {
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;
        return;
    }

    // Calculamos el factorial
    int factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    
    cout << factorial << endl;
}

  void imprimirCalendario(int primer_dia, int num_dias) {
    // Imprimir los espacios iniciales para el primer día
    for (int i = 1; i < primer_dia; ++i) {
        std::cout << "   ";
    }

    // Iterar sobre cada día del mes
    for (int dia = 1; dia <= num_dias; ++dia) {
        // Imprimir el día con dos caracteres
        std::cout.width(2);
        std::cout << dia;

        // Si estamos en el último día de la semana o el último día del mes, saltamos de línea
        if ((dia + primer_dia - 1) % 7 == 0 || dia == num_dias) {
            std::cout << std::endl;
        } else {
            // Imprimir espacios entre los días
            std::cout << ' ';
        }
    }
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