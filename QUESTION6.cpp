#include <iostream> //Including a Library where is the Built Function of std::cout
#include <string>   //Including a String Because We need to use in the Function 
using namespace std; // Picking a Box where is the std now we can only use cout to print
string Check_Alphabet(char INPUT_CHARACTER)
{
    char A[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; // Including an Array Where I stored Vowels
    for (int i = 0; i < 10; i++)
    { 
        if (A[i] == INPUT_CHARACTER)  // Checking if the Given the input of the user is equals to the Given Array of Vowels 
            return "It's a Vowel"; // If it is True then it will return It's a Vowel
    }
    for (int c = 0; c < 10; c++)
    {
        if (A[c] != INPUT_CHARACTER) // Else if the Given input Character is not equals to the given input then it will return it's Consonent
            return "It's a Consonent";
    }    
} 
int main() // Main Function where i call my Function and give it a parameter value
{
    char INPUT_CHARACTER; // Using a Character Named INPUT_CHARACTER
    cout << "Enter the Character that you want to check  : ";
    cin >> INPUT_CHARACTER; // Taking a Value from User 
    cout << Check_Alphabet(INPUT_CHARACTER) << endl; // Printing the Value 
    return 0; // Returning Zero Because we Have said that we will return an  Integer Value
}