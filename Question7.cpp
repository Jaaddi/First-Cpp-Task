#include <iostream> // Including A Library Of iostream Which contains std::cout Builtin-Function 
#include <string> // Including a String That we can use in the Function
using namespace std; // Including std box Where is a cout Function
void Numbers_Reverse_Forward(string NUMBER) // this Function Will not return anything because we declared that it will not return anything
{
    cout << "Your Number in Forward Order is : " << NUMBER << endl; // Printing the numbers in forward case
    cout << "Your Number in Reverse Case is = ";
    for (int i = 2; i >= 0; i--)
    {
        cout << NUMBER.at(i); // Printing the numbers in Reverse Case
    }
}
int main() // Main Function Where we call our Functions and give values
{
    string NUMBER; // Type Given that given in the parameter is String
    cout << "Enter Three Numbers : "; 
    cin >> NUMBER; // Getting Number as an input 
    Numbers_Reverse_Forward(NUMBER); // Calling A Function 
    return 0; // Returning Integer value because we have declared that this Function will return Integer Values  
}
