/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: YasmeenAllahaleh
 *
 * Created on April 9, 2024, 10:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    map<string, int> mp;
 
    mp["Max"] = 1;
    mp["Shelby"] = 2;
    mp["Storm"] = 3;
 

    cout << "Number of Particpants: " << mp.size() << endl << endl;
 
    map<string, int>::iterator x = mp.begin();
    
    while (x != mp.end()) {
        cout << "Name: " << x->first
             << ", Number in line: " << x->second << endl;
        ++x;
    }
    
    
    return 0;
}

