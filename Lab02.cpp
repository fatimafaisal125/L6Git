#include <iostream>
using namespace std;

int main() {
    double firstNumber;      
    cout << "Enter first number: ";
    cin >> firstNumber;                    //the double data type allows operations for floating point numbers too
    double secondNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;   
    
    cout<<"Sum: "<< firstNumber + secondNumber;      //displays the sum of the two numbers
    cout<<"\nDifference: "<< firstNumber - secondNumber;
    cout<<"\nProduct: "<< firstNumber * secondNumber;

    return 0;

}
