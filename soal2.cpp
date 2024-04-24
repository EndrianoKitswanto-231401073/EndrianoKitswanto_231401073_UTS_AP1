#include <iostream>
using namespace std;

int main(){
    int i;
    string input;
    cout << "Input : ";
    getline(cin, input);
    for (i = 0; i < input.length(); i++){
        input[i] = toupper(input[i]);
    }
    cout << "Output : " << input;
    return 0;
}