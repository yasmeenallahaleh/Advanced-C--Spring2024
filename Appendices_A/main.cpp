/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jamalelhaleyih
 *
 * Created on February 29, 2024, 10:05 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Solution 1:(For-loop)
    int m, n, c;
    int sum = 0;

    cout << "Please enter a number for C:";
    cin >> c;
    
    cout << "Please enter a number for m:";
    cin >> m;
    
    cout << "Please enter a number for n:";
    cin >> n;
    
    
    for(int i = m; i <= n; i++)
    {
        sum = sum +c;
    }
    
    cout << "Sum for Solution One: " << sum << endl;
    
    //Solution two:
    
    int sum1 = 0;
    
    sum1 = c*(n-m+1);
    
    cout << "Sum for Solution Two: " << sum1 << endl;
    

    return 0;
}

