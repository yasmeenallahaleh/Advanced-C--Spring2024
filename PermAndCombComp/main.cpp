/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yasmeen Allahaleh
 *
 * Created on April 10, 2024, 9:44 AM
 */

#include <cstdlib>
#include<iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
float factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    
    float fac = 1;
    for(int i = n;i >= 2 ; i--)
    {
       fac = fac * i;
    }
    return fac;
}

//Prototype;
float factorial(int n);


int main(int argc, char** argv) {

    //Output header
    cout<<"P -> Permutation(Order Matters)"<<endl;
    cout<<"C -> Combination(Order does not matter)"<<endl;
    cout<<"Rep -> with replacement"<<endl;
    cout<<"no Rep -> no replacement"<<endl;
    cout<<"N -> Number of total elements"<<endl;
    cout<<"M -> Number of elements to take from the total"<<endl<<endl;
    cout<<"   N   M                P Rep        P no Rep          C Rep             C no Rep"<<endl;
    cout<<"                        N^M          N!/(N-M)!    (N+M-1)!/((N-1)!M!)    N!/((N-M)!M!)"<<endl<<endl;
    
    
    
    for(int i = 2; i <= 26; i++)
    {
        for(int k = 0; k <= i;k++)
        {
            //Single vars
            int n = i;
            int m = k;

            //Factorial sums
            float nf = factorial(n);
            float mf = factorial(m);
            float nSm = factorial(n-m);
            float nAm = factorial(n+m-1);
            float nSf = factorial(n-1);
            
            //Results for Perm, Comb, Perm without rep, and Comb without rep
            float a = pow(n, m);
            float b = nf/nSm;
            float c = nAm/(nSf*mf);
            float d = nf/(nSm*mf);
            
            //Output
            cout << setw(4) << n << setw(4) << m << setw(18);
            cout << a << setw(18) << b << setw(18) << c << setw(18) << d << endl;
        }
        cout << endl;
    }
    
    
    
    return 0;
}

