/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yasmeen Allahaleh
 *
 * Created on April 9, 2024, 4:29 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

struct Link {
    
    int data;
    struct Link* next;
    struct Link* prev;
    
};

/*
 * 
 */
int main(int argc, char** argv) {

    Link *l1 = new Link;
    Link *l2 = new Link;
    Link *l3 = new Link;
    Link *l4 = new Link;
    
    l1->data=1;
    l2->data=2;
    l3->data=3;
    l4->data=4;
    
    l1->next=l2;
    l1->next->next=l3;
    l1->next->next->next=l4;
    l1->next->next->next->next=NULL;
    
    l4->prev=l3;
    l4->prev->prev=l2;
    l4->prev->prev->prev=l1;
    l4->prev->prev->prev->prev=NULL;
    
    Link *lnext=l1;
    while(lnext!=NULL)
    {
        cout<< lnext->data<<endl;
        lnext=lnext->next;
    }
    
    
    delete l1,l2,l3,l4;
    
    return 0;
}

