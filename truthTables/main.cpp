/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: YasmeenAllahaleh
 *
 * Created on February 23, 2024, 2:15 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void truthTable(bool x, bool y)
{
   
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y? 'T':'F')<<"   "
        <<(x^y? 'T':'F')<<"    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"       "
        <<(!(x&&y)? 'T':'F')<<"      "
        <<(!x||!y? 'T':'F')<<"        "
        <<(!(x||y)? 'T':'F')<<"      "
        <<(!(x||y)? 'T':'F')
        <<endl;
    
}

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Display the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y "<<
          " !(X||Y) !X&&!Y"<<endl;
    
    while(cin >> x >> y){
        truthTable(x, y);
    }
    
    cout << endl;

    //Exit
    return 0;
}