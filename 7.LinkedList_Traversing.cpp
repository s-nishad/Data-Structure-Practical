#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void printList(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d", n->data);
        n = n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 500;
    third->next = NULL;

    printList(head);

    return 0;
}
