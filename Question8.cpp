#include <iostream> // Including a Library of iostream where we find a std::cout BuiltinFunction 
#include <cmath> // Including cmath so that we can use pow Function
using namespace std; // Using a Box std and we pick up a Function
void Three_Decimal(float Number_a, float Number_b, float Number_c) // Declaring the Function That Will Take Three Parameters and it will not return anything beacuse we write void and void means that it will return Nothing
{
    float Multiplying_Result = Number_a * Number_b; // Multiply Two Number a,b and Store its result in variable Multiplying_Result and it will give float
    float Equation_Result = pow(Multiplying_Result, Number_c); // Take the power of the reult after Multiplying and store it in Variable Named Equation_Result and it will Give Float
    cout << "The Result of the Equation (a*b)c Is = "; // Printing the Final Result 
    cout << Equation_Result << endl;  
}
int main() // Main Function Where we call our Function and pass the value
{
    float Number_a; // Declaring the Number_a and it is Given a float Number
    float Number_b; // Declaring the Number_b and it is Given a float Number
    float Number_c; // Declaring the Number_c and it is also Given a Float Number
    cout << "Enter The Number a = ";
    cin >> Number_a; // Getting as input the Number_a From User
    cout << "Enter The Number b = ";
    cin >> Number_b; // Getting the Number_b from User as input
    cout << "Enter the Number c = ";
    cin >> Number_c; // Getting the Number_c from User as input
    Three_Decimal(Number_a, Number_b, Number_c); // Calling our Function 
    return 0; //Returning Zero Because We have declared that this Function will return integer value so we have to return a value

}