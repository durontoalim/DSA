#include <bits/stdc++.h>

using namespace std;


#define STACK_MAX 5

typedef struct {
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item)
{
    if( s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else{
        cout<<"Stack Is Full"<<endl;
    }
}

int pop(Stack *s){
    int item;

    if(s->top == 0){
        cout<<"Stack Is empty"<<endl;

        return -1;
    }
    else{
        s->top = s->top - 1;
        item = s->data[s->top];
    }

    return item;
}

int main()
{
    Stack my_stack;
    int item;

    my_stack.top = 0;

    push(&my_stack, 1 );
    push(&my_stack, 2 );
    push(&my_stack, 3 );
    push(&my_stack, 4 );
    push(&my_stack, 5 );
    push(&my_stack, 6 );
    push(&my_stack, 7 );
    push(&my_stack, 8 );

    item = pop(&my_stack);
    cout<<item<<endl;



    return 0;

    
}