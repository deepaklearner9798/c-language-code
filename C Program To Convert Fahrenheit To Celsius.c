#include <stdio.h> 
  
// Function to convert Degree 
// Fahrenheit to Degree Celsius 
float fahrenheit_to_celsius(float f) 
{ 
    return ((f - 32.0) * 5.0 / 9.0); 
} 
  
// Driver code 
int main() 
{ 
    float f = 40; 
  
    // Passing parameter to function 
    printf("Temperature in Degree Celsius : %0.2f", 
           fahrenheit_to_celsius(f)); 
    return 0; 
