//merge sort on linked list (HARD)
#include <bits/stdc++.h>
using namespace std;

//creation of a Linked list structure
class Node
{
public:
    int data;
    Node *next;
};
//Divide and conquer step
void SplitLinkedList(Node *source, Node **front, Node **end);
//Merging two sorted lists
Node *sortedMerge(Node *a, Node *b);
//Recursive Calls to Split the linked list infinitely unless we reach a single list of 1 part.
void MergeSort(Node **headref)
{
    Node *head = *headref;
    Node *a, *b;
    if (!head || !head->next)
        return;
    SplitLinkedList(head, &a, &b);
    MergeSort(&a);
    MergeSort(&b);
    *headref = sortedMerge(a,b);
}
//merging two sorted linked list recursive function
Node *sortedMerge(Node *a, Node *b)
{
    Node *result=NULL;
    if(!a) return b;
    else if(!b) return a;
    if(a->data<=b->data){
        result = a;
        result->next = sortedMerge(a->next,b);
    }
    else{
        result = b;
        result->next = sortedMerge(a,b->next);
    }
    return result;
}
// To split the linked list into two parts
void SplitLinkedList(Node * source, Node **front, Node **back){
    Node *slow, *fast;
    slow = source;
    fast = source->next;
    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    *front = source;
    *back = slow->next;
    slow->next = NULL;
}

void PrintList(Node *node){
    while(node){
        cout<<node->data<<" ";
        node = node->next;
    }
}

//Function to insert node at the beginning of the linked list
void InsertAtBegin(Node **headref, int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = *headref;
    *headref = temp;
}

int main()
{
    Node *a =NULL;
    InsertAtBegin(&a,15);
    InsertAtBegin(&a,10);
    InsertAtBegin(&a,5);
    InsertAtBegin(&a,20);
    InsertAtBegin(&a,3);
    InsertAtBegin(&a,2);
    
    MergeSort(&a);

    PrintList(a);
    return 0;
}