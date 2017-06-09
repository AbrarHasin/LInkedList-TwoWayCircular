#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int info;
    node* forwardLink;
    node* backwardLink;
};

node* head = NULL , *temp;

void insertFirst(int data);
void insertion(int data);


int main()
{


    return 0;
}

void insertion(int data)
{
    node* ptr = new node();
    ptr->info = data;
    ptr->forwardLink = head;
    ptr->backwardLink = head;

    if(head == NULL)
    {
        head = ptr;
    }
    else
    {
        for(node* srt = head; srt->forwardLink = head; )
        {
            ptr->backwardLink = srt;
            srt->forwardLink = ptr;
        }
    }
}

void traverse(int data)
{

}

void insertFirst(int data)
{
    node* ptr = new node();
    ptr -> info = data;
    ptr -> forwardLink = head;
    ptr -> backwardLink = head;
    if(head == NULL)
    {
        head = ptr;
    }
    else
    {
        ptr->backwardLink = head->backwardLink;
        head->backwardLink = ptr;
        ptr ->forwardLink = head;

        head = ptr;

    }
}
