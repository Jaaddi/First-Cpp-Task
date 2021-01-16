#include <iostream> // Including a Library of IOSTREAM In which We Have cout Function
#include <string>   // Including a String a that i will use in my code
using namespace std; // std is a box where we find cout if we not use it we print by std::cout
void Check_Vowel(string STRING)  //Void means that it will not return anythin and it will get a string in the Parameter
{
    int counter = 0; //counter that will count all Vowel in the loop 
    string Vowels = {'a', 'e', 'i', 'o', 'u'}; //Its an Array of Vowel
    int Length = STRING.length(); // Finding the Length of a String that will user give as input
    string S[Length]; // Its an Array which i will use further and it is equal to the length of the user input
    for (int i = 0; i < Length; i++)   // For loop and this loop will keep using until i is less then the lenght
    {
        S[i] = STRING.at(i);   //This loop will store all user input character in the Array named S
    }
    for (int j = 0; j < Length; j++) // Using a loop that will also run to the less then the length of user input
    {
        for (int z = 0; z < Length; z++) // Again Using loop 
        {
            if (Vowels[j] == STRING[z]) // Now it will get Vowels onebyone and given user input characters onebyone and check is it a vowel if it is it will add 1 in the counter 
            {
                counter += 1; // After the loop ended in the counter there are counted the number of vowels which are in the string
            }
        }
    }
    cout << counter << endl; // And at last the counter counted all the vowels which are in the sting and it will print all
}
int main() // Main Function Where we call our Function 
{
    string STRING ; // We are the giving the in parameter you will get a sting 
    cout << "Enter Your String Here : ";
    getline (cin , STRING); // Asking that get the input the line that user had gave you and store it to STRING
    Check_Vowel(STRING); // We had Called our Function and gives the user input as a STRING
    return 0; // AS we have said this function will return integer value
}