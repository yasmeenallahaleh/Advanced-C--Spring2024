/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: YasmeenAllahaleh
 *
 * Created on April 9, 2024, 11:02 AM
 */

#include <cstdlib>
#include <list>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    list<int> numlist;
    
    for (int i=0; i<6; ++i) {
        numlist.push_back(i);
    }
    
    for (auto i : numlist) {
        cout << i << ' ';
    }
    
    return 0;
}

