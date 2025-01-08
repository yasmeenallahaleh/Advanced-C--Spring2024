/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yasmeen Allahaleh
 *
 * Created on April 14, 2024, 12:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

struct Link{
    int data;  
    int pri;
 
    Link *next;
    Link *prev;

};

//Prototypes:
Link* swap(Link* p1, Link* p2);
void display(Link* n, int x);
Link* sortLink(Link** start, int n);
Link* priority(Link** start, int n);
void displayPri(Link* n);


/*
 * 
 */
int main(int argc, char** argv) {

    Link *l1=new Link;
    Link *l2=new Link;
    Link *l3=new Link;
    Link *l4=new Link;
    
    l1->data=30;
    l2->data=20;
    l3->data=10;
    l4->data=40;
    
    l1->pri=4;
    l2->pri=1;
    l3->pri=2;
    l4->pri=3;
    
    l1->next=l2;
    l1->next->next=l3;
    l1->next->next->next=l4;
    l1->next->next->next->next=nullptr;
    
    //Doubly Link List
    l4->prev=l3;
    l4->prev->prev=l2;
    l4->prev->prev->prev=l1;
    l4->prev->prev->prev->prev=nullptr;
    
    cout << "Original Linked List: " << endl;
    
    Link *lnext=l1;
    display(lnext, 0);
    cout << endl << endl;
    
    
    cout << "Doubly Linked List: " << endl;
    Link *lprev=l4;
    display(lprev, 1);
    
    //Sorted Link List
    cout << endl<< endl << "Sorted list: " << endl;
    sortLink(&l1,5);
    display(l1, 0);
    cout << endl << endl;
    

    //Priority List
    cout << "Priority List: " << endl;
    cout << "Data:   Pri Number:" << endl; 
    priority(&l1,5);
    displayPri(l1);
    
    delete l1,l2,l3,l4;
    
    return 0;
}

//Swaps two values with each other
Link* swap(Link* p1, Link* p2)
{
    Link* temp = p2->next; 
    p2->next = p1;
    p1->next = temp;
    return p2;
            
}

//Sorts the data in the linked list based on value
Link* sortLink(Link** start, int n)
{
    Link** s;
    int c;
    
    for(int i =0; i < n; i++)
    {
        s = start;
        c = 0;
        
        for(int j =0; j < i-1; j++)
        {
            Link* one = *s;
            Link* two = one->next;
            
            if(one->data > two->data)
            {
                *s = swap(one, two);
                c = 1;
            }
            
            s = &(*s)->next;  
        }
    }
}

//Orders the original linked list based o it priority
Link* priority(Link** list, int n) {

    Link** s;
    int c;
    
    for(int i =0; i < n; i++)
    {
        s = list;
        c = 0;
        
        for(int j =0; j < i-1; j++)
        {
            Link* pt1 = *s;
            Link* pt2 = pt1->next;
            
            if(pt1->pri > pt2->pri)
            {
                *s = swap(pt1, pt2);
                c = 1;
            }
            
            s = &(*s)->next;  
        }
    }
    
    
}

//Displays the linked lists
void display(Link* n, int x)
{
    if (x == 1)
    {
        while(n!=nullptr){
          cout<< n->data <<" ";
          n=n->prev;
      }
    }
    else 
    {
       while(n!=nullptr){
          cout<< n->data <<" ";
          n=n->next; 
       }
    }
}

//displays the prioritized list
void displayPri(Link* n)
{
       while(n!=nullptr){
          cout<< n->data <<setw(8) << n->pri << endl;
          n=n->next; 
       }

}



