/*
Main.cpp
Week 10, Cpp review 
@author Liam Cannon
@assignment Lab 10.1
@date 11/2/2020
*/
#include <iostream>
#include <vector>
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */
#include "util.h"

using namespace std;

int main()
{
    // initializing the vector and just adding some elements
    srand(time(NULL));
    string multiWord = "A little bird with a yellow bill";

    cout << "Dumping the Vector of 6 Elements: dog, cat, turtle, rat, mouse";
    vector<string> myVector;
    myVector.push_back("dog");
    myVector.push_back("cat");
    myVector.push_back("turtle");
    myVector.push_back("rat");
    myVector.push_back("mouse");
    cout << "calling randomElement" << endl;
    int num = rand() % (myVector.size() + 1);
    cout << randomElement(myVector, num) << endl;

    vector<double> myOtherVector;
    cout << "dumping the vector of doubles" << endl;
    myOtherVector.push_back(3.14);
    myOtherVector.push_back(5.56);
    myOtherVector.push_back(7.72);
    myOtherVector.push_back(9);
    myOtherVector.push_back(-4);
    myOtherVector.push_back(99.99);
    myOtherVector.push_back(22);
    myOtherVector.push_back(30);

    cout << "Sum: " << sum(myOtherVector) << endl;
    cout << "Avg: " << avg(myOtherVector) << endl;
    cout << "lowest: " << lowest(myOtherVector) << endl;

    cout << "Calling camelCase with: " << multiWord << endl;

    cout << "strMessage after camelCase: " << camelCase(multiWord) << endl;
}
