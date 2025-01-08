/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yasmeen Allahaleh
 *
 * Created on April 9, 2024, 11:41 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <list>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    list<int> numbers;
    int num = 4;
    
    for (int i=0; i<6; ++i) {
        numbers.push_back(i);
    }
    
    list<int>::iterator location;
    location = find (numbers.begin(), numbers.end(), num);  
    
    cout << "The location of the number " << num <<" is at index " << 
            distance(numbers.begin(), location) + 1 << endl;

    return 0;
}

