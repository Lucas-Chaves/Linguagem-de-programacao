#include <stdio.h>

using namespace std;
int main() {
    int x;
    cout << "Digite o numero: ";
    cin >> x;
    if(x%2 == 0)
    	cout << "Seu numero digitado foi par";
    else
    	cout << "Seu numero digitado foi impar";
}
