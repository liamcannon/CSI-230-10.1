#include <iostream>
#include <vector>
using namespace std;

string randomElement(vector<string> myVector, int num);
/**
 * @brief returns a random element of the vector
 * @date 11/5/2020
 * @param vector myVector is the vector filled with elements to pick from
 * @param num is the random element to access at
 * @returns a random element in the vector
*/
double sum(vector<double> myVector);
/**
 * @brief determines the sum of the vectors elements
 * @date 11/5/2020
 * @param vector myVector is full of doubles 
 * @returns the sum of all doubles in the vector
*/
double avg(vector<double> myVector);
/**
 * @brief determines the avg of the numbers in the vector
 * @date 11/5/2020
 * @param vector myVector is full of doubles 
 * @returns the avg of the doubles in the vector
*/
double lowest(vector<double> myVector);
/**
 * @brief determines the lowest number in the vector
 * @date 11/5/2020
 * @param vector myVector is full of doubles 
 * @returns the lowest number in the vector
*/
string camelCase(string input);
/**
 * @brief puts the string into a camel case 
 * @date 11/5/2020
 * @param string input is the input string to be converted
 * @returns the new string in camel case
*/
