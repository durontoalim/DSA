#include <bits/stdc++.h>

using namespace std;

struct Node{

    int data;

    struct Node *next;
};

int main()
{
   
    struct Node * first = NULL;
    struct Node * second = NULL;
    struct Node * third = NULL;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    first->data = 5;
    first -> next = second;


    second -> data = 50;
    second -> next = third;

    third ->data = 500;
    third ->next = NULL;


    cout<<first<<endl;
    cout<<first->data<<endl;
    cout<<first->next<<endl;

    cout<<second<<endl;


    return 0;
}