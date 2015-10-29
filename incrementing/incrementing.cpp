#include <iostream>

using namespace std;

int main(){
    

    int a = 10;
    int x, y;

    x += 4; //equivalent to x = x + 4

    x -= 5; //equivalent to x = x - 5

    x++; //equivalent to x = x + 1;
    x--; //equivalent to x = x - 1;


    --x; // same as x--, however, when used as a variable, the -1 will occur before it is assigned. As opposed to x-- where variable x is used in the assignment and then -1 occurs.

    //example prefix --x
    x = 5;
    y = --x;
        //y = 4

    x = 5;
    y = x--;
        //y = 5

    


    //example postfix x++

    cout<<"a: "<< a << " x:" << x << " y: "<< y <<endl;



    return 0;


}
