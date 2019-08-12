// Matthew Young
// Temperature Conversion

/* Summary: This program is made to convert temperatures between
            Celius and Fahrenheit. */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double userTemp; // Variable for user inputed temperature. 
char userDegree; // Variable for user inputed degree type. 
double fahTemp;  // Variable for Farenheit temperature. 
double celTemp;  // Variable for Celsius temperature. 

int main()
{  //Beginning of Main Function

    cout << "What Temperature do you want to convert? "; // Ask user for temperature. 
        cin >> userTemp;                                 // User inputed temperature. 
    
    cout << "Is this temperature Celsius (C) or Fahrenheit (F) ? "; // Ask user what temperature type.   
        cin >> userDegree;                                          // User inputed temperature type. 
        
    cout << " " << endl;                                   // Space in between input and output. 

     if (userDegree == 'C' || userDegree == 'c') {         // If statement for Celsius 
        
        fahTemp = (userTemp * 9/5 +32);                    // Equation to convert Celsius to Fahrenheit. 
        
            cout << "The temperature you entered is ";       // Tell user what they entered. 
            cout << userTemp << " degrees Celsius." << endl; // Tell user what they entered.
            
            cout << "The corresponding temperature in Fahrenheit is ";          // Tell user what new temperature is. 
            cout << fixed << setprecision(2) << fahTemp << " degrees." << endl; // Set decimals and output converted temperature.
        
    }
    
    else if (userDegree == 'F' || userDegree == 'f') {    // Else if statement for Fahrenheit 
        
        celTemp = (userTemp - 32 * 5/9);                  // Equation to convert Fahrenheit to Celsius.
        
            cout << "The temperature you entered is ";          // Tell user what they entered.
            cout << userTemp << " degrees Fahrenheit." << endl; // Tell user what they entered.
        
            cout << "The corresponding temperature in Celsius is ";             // Tell user what new temperature is. 
            cout << fixed << setprecision(2) << celTemp << " degrees." << endl; // Set decimals and output converted temperature.
    }
    
    else { 
            cout << "C or F was not entered! No temperature was calculated!" << endl; // Else statement for wrong input. 
                                                                                  
        }
        
        return 0;
        
} // End of Main Function. 
    
