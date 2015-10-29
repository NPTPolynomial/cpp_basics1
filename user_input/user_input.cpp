#include <iostream>

using namespace std;

int main(){
    
    cout << "Asking for user input, and putting it into variable userInput" <<endl;

    //we are expecting a number.
    int userInput;

    cout << "Please enter a number: "<<endl;
    cin >> userInput;

    cout << "The number you ented is: " << userInput << endl;
    return 0;
}
