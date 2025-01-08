/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yasmeen Allahaleh
 *
 * Created on March 26, 2024, 12:06 PM
 */

#include <cstdlib>
#include<iostream>
#include<fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ifstream file1;
    ifstream file2;
    
    file1.open("FAR.txt");
    file2.open("CEL.txt");
 
    int SIZE =2;

    float value;
    float value2;
    
    float celSum = 0;
    float farSum = 0;
    float sqFar = 0;
    float both = 0;
    float x = 37;
    
    float m;
    float b;
    
    //Sum of X/Fahrenheit values
    while(file1 >> value && file2 >> value2)
    {
        farSum = farSum + value; 
        sqFar = sqFar + (value*value);
        celSum = celSum + value2;
        both = both + (value * value2);
    }
      
    cout << "Sum X: " << farSum << endl; 
    cout << "Sum Y': " << celSum << endl; 
    cout << "Sum X*X: " << sqFar << endl;
    cout << "Sum X*Y: " << both << endl << endl;
    
    m=(farSum*celSum-x*both)/(farSum * farSum- x*sqFar);
    b=(celSum-m*farSum)/x;
    
    cout << "Slope: " << m << endl;
    cout << "Y-intercept: " << b << endl;
    
    file2.close();
    file1.close();
    
    return 0;
}

