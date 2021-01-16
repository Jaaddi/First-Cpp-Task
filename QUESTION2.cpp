#include <iostream> // Including A Library of Iostream where is the function of std::cout which is used to print anything
#include <string> // Including A string that we will use in the function
using namespace std; // picking a cout from std which we will use to print anything
// Declaring  a Function that will return an Integer value and it will take three arguments and they are all integers
int Days_Calculator(int Month, int Date, int Year)
{
    if (Month < 0 || Month > 12)
    {
        cout << "Invalid Month!" << endl;
    }
    int Final_Answer = 0; // Declare a Variable that type is integer and it can only store an integer value First we had given an Integer Value
    int Days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Array of Months That type os string
    string Months[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << "You Have Entered The Month : ";
    cout << Months[Month - 1] << endl; // Printing That Month which User has input as input
    for (int i = 0; i < Month - 1; i++) // Getting the Number of Days to that point from Where user have an enter the input
    {
        Final_Answer += Days[i]; // i will get to that point  form where the user had given an input
    } 
    if (Year % 4 == 0) // Condition for Leap Year
    {
        cout << "It's a Leap Year : "<< endl;
        cout << "The Number of Days are : ";
        return Final_Answer + Date + 1;
    }
    if (Year % 100 == 0 && Year % 400 == 0) // Second Condition for Leap Year
    {
        cout << "It's a Leap Year : "<< endl;
        cout << "The Number of Days Are : ";
        return Final_Answer + Date + 1;
    }
    cout << "It's Not a Leap Year"<< endl;
    cout << "The Number of Days Are : ";
    return Final_Answer + Date; // Printing The final Answer  
}
int main() // Main Function Where we call our Functions
{
    int Month;    // declare a variable that will take only an integer value
    int Date;    // declare a variable that will take only an integer value
    int Year;    // declare a variable that will take only an integer value
    cout << "Enter First Month  : ";
    cin >> Month; // Getting a Input from User 
    cout << "Enter the Date : "; 
    cin >> Date;    // Getting a Input from User 
    cout << "Enter the Year : ";
    cin >> Year;     // Getting a Input from User 
    cout << Days_Calculator(Month, Date, Year) << endl; // Printing A value that is coming from the function
    return 0; // Returning zero because we have declared that this main function will return an integer value
}