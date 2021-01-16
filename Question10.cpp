#include <iostream> // Included a Library of iostream in which there is a built_in_Function std::cout for print
using namespace std;// Used a std box where we pick a cout now we will use cout for print
void Possibilities(int number) // telling that this will not return anything and this function will given as parameter an integer value
{
    int ARRAY[number]; // Array Which Has Size of Which we Had given a number 
   for (int i = 0; i <= number; i++) // This will append all values less than equal to that number which we had passed in the parameters
   {
       ARRAY[i]; // one By one Values comes and stored in ARRAY
   }
   for (int i = 0; i <= number; i++) 
   {
       ARRAY[i] = i;
   }
   for (int j = 0; j < number; j++) // Now one By one Value Comes and checks is it Equal to number that is given as input
   {
       for (int z = 0; z < number; z++)
       if (ARRAY[j] + ARRAY[z] == number)
       {
           cout << "The Possibilities of the targeted values are :";
           cout << ARRAY[j];
           cout << "+" << ARRAY[z];
           cout << "=" << number << endl; // Printing All Possible Values that can take to that number that is given as a parameter
       }
   } 
} 
  
int main() // Main Function in Which we call our Function
{
    int number; // We are telling that the type of this number is integer that we are going to give as parameter
    cout << "Enter the Number : ";
    cin >> number; // Getting Input from the User
    Possibilities(number); // Calling a Function
    return 0; // returning zero Because we had said that this function will reuturn an integer value
}   