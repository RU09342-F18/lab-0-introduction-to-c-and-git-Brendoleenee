

/**
 * main.c
 */
#include "math.h"
int math(int num1, int num2, char Operator) //Pulled from the header used
{
    if Operator == "+" //Addition Math Function
    {
         return (num1 + num2)
    };
    else if Operator == "-" //Subtraction Math Function
    {
         return (num1 - num2)
    };
    else if Operator == "*" //Multiplication Math Function
        {
         return (num1 * num2)
        };
    else if Operator == "/" //Division Math Function
        {
         return (num1 / num2)
        };
    else if Operator == "%" //Modulus Math Function
        {
         return (num1 % num2)
        };
    else if Operator == "<" //Left Shift Function
        {
         return (num1 << num2)
        };
    else if Operator == ">"//Right Shift Function
        {
         return (num1 >> num2)
        };
    else if Operator == "&"//Bitwise AND Function
        {
         return (num1 & num2)
        };
    else if Operator == "|"//Bitwise OR Function
        {
         return (num1 | num2)
        };
    else if Operator == "^"//Bitwise XOR Function
        {
         return (num1 ^ num2)
        };
    else if Operator == "~"//Bitwise Inverse Function
            {
         return (~num1)
            };
}
