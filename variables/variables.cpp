#include <iostream>

using namespace std;

int main(){

    cout << "This is the variable example"<<endl;
    cout << "This is an integer (int)"<<endl;

    int myInt = 5;

    cout << "Printing myInt: " << myInt << endl;


    string myStr = "mystring";

    cout << myStr << endl;
    

    //declaring two of the same type variables

    int a, b;

    a = 3;
    b = 9;

    int c;
    
    cout << "a: " << a << " b: "<< b << endl;

    //operators +

    cout << "a +  b = "<< a + b << endl;

    //operator -

    cout << "a - b = "<< a - b << endl;

    //operator * multiplication


    cout << "a * b = "<< a * b << endl;

    //operator / division
    // notice for the division to work correctly, we must conver the integers into doubles.
    cout << "a / b = "<< ((double) a) / ((double) b) << endl;
    
    return 0;
}
