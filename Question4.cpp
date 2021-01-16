#include <iostream> // Including a Library of iostream in which there is a built in function of cout
using namespace std; // including a Box from iostream in there is std if you not import this then you have to write std::cout
string Check_For_Perfect_Integer(int num) // Telling that this Function will return a string and integer value is given to it
{
    int L_C_M; // Declaring a variable that can only store a int value
    int Factors_adder = 0;  // Declaring a Variable Named Factors Adder that can only store a int value
    for (int i = 2; i < num; i++) // Using a For Loop
    {
        if (num % i == 0) // Checking if the number is given as input and checking for all numbers that is less than the given number and find numbers where the mod comes zero 
        {
            Factors_adder += i; // if Condition is true then it will add that number to Factors_adder variable that value which get the mode zero
        }
    }
    L_C_M = Factors_adder + 1;  // Adding one 
    if (L_C_M == num) // Checking that if the L_C_M is equal to the number that is given then its a perfect integer
    {
        return "It's a Perfect Integer";
    }
    if (L_C_M != num) // if the given number and L_C_M are not equal then its not a perfect integer
    {
        return "It's not a Perfect Integer";
    }
}
int main() // Main Function Where we call our all functions and give values
{
    int num; // Declaring num which can only store an int value
    cout << "Enter the number that You want to check  = "; 
    cin >> num; // Getting the number form user an input
    cout << Check_For_Perfect_Integer(num) << endl; // Calling a function and printing the value that it return
    return 0; // returning zero because we have said that this function will return an integer value at the end
}