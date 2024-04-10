
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


    int factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    
    cout << factorial << endl;
}

void exercise_5(int n, int k) {
   //TODO: YOUR CODE HERE
    int i, j, day = 1;

    // Imprimir los espacios en blanco para alinear el primer día
    for (i = 1; i < n; i++) {
        printf("   ");
    }

    // Imprimir los números del calendario
    for (i = 1; i <= k; i++) {
        printf("%2d ", day);
        day++;

        // Si llegamos al final de la semana, saltamos a una nueva línea
        if ((i + n - 1) % 7 == 0 || i == k) {
            printf("\n");
        }
    }
}

int main() {
    int n, k;
    printf("Ingrese el número del día de la semana del primer día del mes (1-7): ");
    scanf("%d", &n);
    printf("Ingrese el número de días en este mes (1-99): ");
    scanf("%d", &k);

    exercise_5(n, k);

    return 0;
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
       int sum = 0;
    
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
     double sum = 0.0;
    double term = 1.0;
    for (int i = 1; i <= n; ++i) {
        sum += term;
        term /= i;
    }
    cout << sum << endl;
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