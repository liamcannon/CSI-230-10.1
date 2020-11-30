#include "util.h"

string randomElement(vector<string> myVector, int num) {
    return myVector[num];
}

double sum(vector<double> myVector)
{
    double total;
    for (double num : myVector)
    {
        total += num;
    }
    return total;
}
double avg(vector<double> myVector)
{
    double avg;
    for (double num : myVector)
    {
        avg += num;
    }
    return avg / (myVector.size() - 1);
}
double lowest(vector<double> myVector)
{
    double lowest = myVector[0];
    for(int i = 1; i < myVector.size(); i++) {
        if(myVector[i] < lowest) {
            lowest = myVector[i];
        }
    }
    return lowest;
}
string camelCase(string input)
{
    int l = input.length();
    int index;

    for (int i = 0; i < l; i++)
    {
        if (input[i] == ' ')
        {
            input[i + 1] = toupper(input[i + 1]);
        }
        else {
            input[index++] = input[i];     
        }
    }
    return input.substr(0, index); 
    //https://www.geeksforgeeks.org/camel-case-given-sentence/
}