/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: YasmeenAllahaleh
 *
 * Created on February 22, 2024, 8:07 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables for input
    float num0, num1, num2, num3;
    
    //Set variables to set width
    int w1 = 9;
    int w2 = 10;
    
    //Declare variables to set precision
    int set0 = 0;
    int set1 = 1;
    int set2 = 2;
    
    //Input the numbers
    cin >> num0 >> num1 >> num2 >> num3;

    
    //These sections utilizes the formatting aspects in order
    //to output the numbers with the correct format/
    cout << setw(w1) << num0 << fixed << setprecision(set1) << setw(w2) << num0 << 
        fixed << setprecision(set2) << setw(w2) << num0 << endl;
    cout << fixed << setprecision(set0) << setw(w1) << num1 << fixed << setprecision(set1) << setw(w2) << num1 << 
        fixed << setprecision(set2) << setw(w2) << num1 << endl;
    cout << fixed << setprecision(set0) << setw(w1) << num2 << fixed << setprecision(set1) << setw(w2) << num2 << 
        fixed << setprecision(set2) << setw(w2) << num2 << endl;
    cout << fixed << setprecision(set0) << setw(w1) << num3 << fixed << setprecision(set1) << setw(w2) << num3 << 
        fixed << setprecision(set2) << setw(w2) << num3 ;
    
    return 0;
}

