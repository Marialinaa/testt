#include <iostream>

using namespace std;

int main () {
    string palavra;
    int cont = 0;

    cin >> palavra;

    for (int i = 0; i < palavra.size(); i++){
        if(palavra[i] == 'a' || palavra[i] == 'A'){ 
            cont++;
        }
    }

    if(cont > 0){
        cout << "A letra 'a' foi encontrada " << cont<< "vezes.";
    } else {
        cout << "A letra 'a' não foi encontrada";
    }

    return 0;
}
