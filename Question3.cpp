#include <iostream>      // Including A Library of iostream in which we have std::cout function which we will use in the function to print any value 
#include <string>        // Including a string that we will use in the function
using namespace std;  // Including a Box of std where we will find cout now we have not need of writting std::cout we can print by cout 
// Name of our Function that we will use to call our function and its return type is void it will not return 
// anything and it is given an stirng of Number
void Odd_Even_Zeros(string Number) 
{
    int Even_counter = 0;
    int Odd_counter = 0;
    int Zero_counter = 0;
    int length = Number.length(); // Calculting the length of a number which user have entered as an input
    for (int i = 0; i < length; i++ && i > 2) // Loop will pick all integers one by one 
    {
        if (Number.at(i) % 2 == 0) // Checking if integers any integer is even 
        {
           Even_counter += 1;           //If number is even comes from integer then it cause to increment 
        }
    }
    for (int j = 0; j < length; j++) // Loop will run and pick all values of given integer onebyone
    {
        if (Number.at(j) % 2 == 1) // Checking if ant integer is odd
        {
           Odd_counter += 1;    // If number is odd comes from integer then it cause to increment 
        }
    }
    for (int z = 0; z < length; z++) // Loop will run and pick all values to the integer given
    { 
        if (Number.at(z) == 0)// Checking if any given integer is zero
        {
            Zero_counter += 1; // If number zero comes from integer then it cause to increment 1
        }
    }
    cout << "Even Numbers in the Given Integer are : ";
    cout << Even_counter << endl; // Printing that how many even values in the integer
    cout << "Odd Numbers in the Given Integer are : ";
    cout << Odd_counter << endl;  // Printing that how mant odd values in the integer
    cout << "Zero Numbers in the Given Integer are : ";
    cout << Zero_counter << endl;  // Printing that how many zero values in the integer
}
int main() // Our Main Function where we call our all functions 
{
    string Number; // Number has a type of string n
    cout << "Enter an integer : ";
    cin >> Number; // Getting number from user as an input 
    Odd_Even_Zeros(Number); // Calling our Function 
    return 0; // Returning zero because we have declared that our function will return an integer value

}