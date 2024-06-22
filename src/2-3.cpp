/*
The compiler ignores this part
*/

#include <iostream>
using namespace std;

int main()
{
    //declaration
    int num1;
    int num2;
    int sum;
    //input
    cout << "First Number: ";
    cin >> num1;
    cout << "Second Number: ";
    cin >> num2;
    //Compute and save
    sum = num1 + num2;
    //output
    cout << "The Sum of Two Numbers: " << sum; 
    return 0;
}