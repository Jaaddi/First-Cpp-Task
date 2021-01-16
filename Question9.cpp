#include <iostream> // Including a Library of iostream where is the print Built_in Function std::cout
#include <string> // Using a string Because we are going to use the string in the function
using namespace std; // Using a box form iostream where we can find a cout function now there is no need of std::cout we can use "cout" only to print any value
string Check_Prime_Number(int NUMBER) // This function will going to return a string and it will given a integer value named NUMBER
{
    int d = NUMBER - 1; // Subtracting 1 from a Number
    if (NUMBER == 1)
    {
        return "It's Not a Prime Number";
    }
    if (NUMBER == 2 || NUMBER == 3) // if Number is 2 or 3 return it's a Prime Number
    {
        return "Its a Prime Number";
    }
    if (NUMBER > 3) // if Number is Greater then 3 then 
    {
        for (int i = 2; i <= d; i++)
        {
            if (NUMBER % i == 0) // Take the mode if it is equals to zero not including the number and 1 because an prime number is only divisible by 1 and itself
            {
                return "It's not a prime number";
            }
            else // if Number is not Divisible any other number then it's a Prime number
            {
                return "It's a prime number";
            }
            
        }
    }
}
int main() // Function of Main where we call our all function and give values as parameters
{
    int NUMBER; // Declare a Number that will be given an Integer Value  
    cout << "Enter the number which you want to check = ";
    cin >> NUMBER;  // Taken a number as an input 
    cout << Check_Prime_Number(NUMBER) << endl; // Calling our Function 
    return 0; // Returning Zero Because we have said that this function will return integer value at the end
}