/*(Odd or Even) Write a program that reads an integer and
determines and prints whether it’s odd or even. [Hint: Use the
remainder operator ( % ). An even number is a multiple of two.
Any multiple of 2 leaves a remainder of zero when divided by
2.] (c++ how to program)*/
//program prints wether or even
#include <iostream>
using namespace std ;
int main () {
    int a(0) , b(0) ;
    cout << " Enter number : " ;
    cin >> b ;
    a = b % 2 ; 
    // if the result equal 0 the number is even and if not the number is Odd
    if(a==0){
        cout << " The number is Even "<<endl;
    }
    if(a!=0){
        cout << " The number is Odd "<<endl;

    }

}