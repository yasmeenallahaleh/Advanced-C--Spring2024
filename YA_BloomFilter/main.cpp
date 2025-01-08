/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yasmeen Allahaleh
 *
 */

#include <cstdlib>
#include <bitset>
#include<iostream>
#include <string>
#include <cstring>

using namespace std;

class bloom{
    private:
        std::bitset<10> bitset;
        size_t a(const string& num);
    public:
        bloom();
        void put(const string& num);
        bool find(const string& num);
};

/*
 * 
 */
int main(int argc, char** argv) {

    bloom b;

    b.put("Aaron");
    b.put("Zane");
    b.put("Travis");
    b.put("Zoe");

    cout << "Zane: " << b.find("Zane") << endl;
    cout << "Travis: " << b.find("Travis") << endl;
    cout << "Mark: " << b.find("Mark") << endl;
    cout << "Aaron: " << b.find("Aaron") << endl;

    return 0;
}


bool bloom::find(const string& num) {
    size_t loc = a(num) % bitset.size();
    return bitset[loc];
}

void bloom::put(const string& num) {
    size_t loc = a(num) % bitset.size();
    bitset[loc] = 1;
}

bloom::bloom() {
    bitset = std::bitset<10>();
}

size_t bloom::a(const std::string& num) {
    size_t a = 0;
    for (char x : num) {
        a += static_cast<size_t>(x);
    }
    return a;
}


