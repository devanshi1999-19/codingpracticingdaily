#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <fstream>
using namespace std;
int main()
{
    std::fstream myfile("file1.txt", std::ios_base::in);
    //We are reading the file from the input using fstream

    int a;
    vector<int> v;      //vector which will store the numbers
    while (myfile >> a) //reading the file
    {
        v.push_back(a); //pushing the numbers in to the vector from the file
    }
    int sum = 0, x = 0, largest = -10000, smallest = 10000;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i]; //adding the numbers to the sum
        x++;         //creating a count of numbers
        if (v[i] > largest)
            largest = v[i]; //updating largest if we see, any number greater then the previous largest number
        if (v[i] < smallest)
            smallest = v[i]; // updating the smallest, if we see any number smaller than the previous smallest number.
    }
    double average = double(sum) / double(x); //typecasting to get correct average of these numbers.
    cout << "Average of all the numbers is: " << average << endl;
    cout << "Smallest of all the numbers is: " << smallest << endl;
    cout << "Largest of all the numbers is:" << largest << endl;
    cout << "Total number of characters in the file are:  " << x << endl;
    cout << "Sum is:  " << sum;
    return 0;
}