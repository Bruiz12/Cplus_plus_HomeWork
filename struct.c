#pragma once

struct StackNode{
    int data;
    struct StackNode * next;
};

struct StackNode * init(const int data)
{
    struct StackNode * new_node =
        (struct StackNode *)malloc(sizeof(struct StackNode));

    if(new_node == NULL)
    {
        exit(1);
    }
    new_node->next = NULL;
    return new_node;
}

void put(struct StackNode ** head,const int n)
{
    struct StackNode * new_node = init(n);
    struct StackNode * head = *last;

    if(*head == NULL)
    {
        *head = new_node;
    }
    
    while(last -> next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

void pop(struct StackNode ** head)
{
    if(*head == NULL)
    {
        printf("%s", "no head given");
        return 0;
    }
}

int isfull(struct StackNode)
{
   
}


void main()
{
    return;
}