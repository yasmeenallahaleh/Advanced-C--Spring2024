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


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int array[] = {3,1,2,8,56,3,2};
    
     
    cout << "Unsorted: " << endl;
    for(int i : array)
    {
        cout << i << " ";
    }
    cout << endl << endl;
    
    sort(begin(array), end(array));
    
    
    cout << "Sorted: " << endl;
    for(int i : array)
    {
        cout << i << " ";
    }
    
    return 0;
}
