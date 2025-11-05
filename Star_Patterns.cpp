/* Square Fill Pattern */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++) {

        for (int star = 0; star < n; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Right Half Pyramid */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++) {

        for (int star = 0; star <= row; star++) {
            cout << "* ";
        }
        
        for (int space = (n - row); space > 0; space--) { // Or, space = 0; space < (n - row); space++, (if condition space > 1, or space = 1. then, the extra line of spaces will not be printed.)
            cout << "  ";
        }
        
        cout << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Reverse Right Half Pyramid */

#include <iostream>
using namespace std;
    
int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        
        for (int star = (n - row); star > 0; star--) { // Or, star = 0; star < (n - row); star++
            cout << "* ";
        }

        for (int space = 0; space <= row; space++) { // if condition space < row, ya space = 1; space <= row. then, the extra line of spaces will not be printed.
            cout << "  ";
        }
        
        cout << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Left Half Pyramid */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++) {

        for (int space = 0; space < (n - row); space++) { // Or, space = (n - row); space > 0; space--, (if space = 1, or condition space > 1. then, the extra line of spaces will not be printed.)
            cout << "  ";
        }

        for (int star = 0; star <= row; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Reverse Left Half Pyramid */

#include <iostream>
using namespace std;
    
int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        
        for (int space = 0; space <= row; space++) { // if space = 1, or condition space < row. then, the extra line of spaces will not be printed.
            cout << "  ";
        }

        for (int star = (n - row); star > 0; star--) { // Or, star = 0; star < (n - row); star++
            cout << "* ";
        }
        
        cout << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Rhombus Pattern */

#include <iostream>
using namespace std;
    
int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n; 

    for (int row = 0; row < n; row++) {
        
        for (int space = 0; space <= row; space++) { // if space = 1, condition space < row. then, the extra line of spaces will not be printed.
            cout << " ";
        }
        
        cout << "* * * *" << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */