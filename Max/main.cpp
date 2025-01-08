/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yasmeen Allahaleh
 *
 * Created on April 9, 2024, 11:48 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int array[] = {2,4,7,3,2,5,6,3};
    
    for(int i : array)
    {
        cout << i << " ";
    }
    
    cout << endl;
    cout << "Max: " << *max_element(begin(array), end(array)) << endl;
    
    
    return 0;
}

