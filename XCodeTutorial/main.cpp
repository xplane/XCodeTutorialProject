#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int choice;
    double dollar = 0, peso = 0;
    char Quit = ' ';
    while (Quit != 'n'){
        
        cout << "Press 1 to convert Dollars to Pesos or press 2 to convert Pesos to Dollars: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter how many dollars you want to convert: ";
            cin >> dollar;
            peso = dollar * 14.87;
            cout << dollar << " dollars converts to " << peso << endl;
        }
        if (choice == 2) {
            cout << "\nEnter how many Pesos you want to convert: ";
            cin >> peso;
            dollar = peso / 14.87;
            cout << "Pesos converts to: " << dollar;
        }
        
        
        cout << "\nDo you want to run again? Y/N? ";
        cin >> Quit;
    }
    
    return 0;
}
