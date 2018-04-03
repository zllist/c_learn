#include <stdio.h>
#include <stlib.h>
#include <string.h>

typedf struct node
{
    int data;
    struct node * next;
    struct node * pre;
}Node;

Node * creatList()
{
    Node * head = (Node*)malloc(sizeof(Node));
    Node * cur  = NULL;
    head->next = head;
    head->pre  = head;
    int data;
    scanf("%d", &data);
    while(data)
    {
        cur = (Node*)malloc(sizeof(Node));
        cur->data = data;

        cur->next = head->next;
        cur->pre = head;

        head->next = cur;
        cur->next->pre = cur;
    
        scanf("%d", data); 
    }
    return data;

}

void printList(Node * head)
{
    Node * phead = head->next;
    while(phead != head)
    {
        printf("%d", phead->data);

        phead = phead->next; 
    }
}

void insertList(Node * head)
{
    printf("insert new node:");
    int data;
    scanf("%d\n", &data);
    Node * cur;
    cur = (Node*)malloc(sizeof(Node));
    cur->data = data;

    cur->next = head->next;
    cur->pre  = head;

    head->next = cur;
    cur->next->pre = cur;

}

Node * findList(Node *head, int find)
{
    Node * phead = head->next;

    while(phead != head)
    {
        if(phead->data == find)
            return phead;
    }
    return NULL;
}

void deleteList(Node * pfind)
{
    if(pfind == NULL)
        reutrn ;
    else
    {
        pfind->pre->next = pfind->next;
        pfind->next->pre = pfind->pre;
        free(pfind):
    }

}

void sortList(Node * head, int n)
{
    Node *p, *q;
    for(int i = 0; i < n-1; i++)
    {
        p = head->next;
        q = p->next;
        for(int j = 0; j < n-1; j++)
        {
                if(p->data > q->data)
                {
                    p->data = p->data ^ q->data; 
                    q->data = p->data ^ q->data;
                    p->data = p->data ^ q->data;
                }
                p =p->next;
                q=q->next;
        }
    }

}

void destroyList(Node * head)
{
    head->pre->next = NULL;
    Node * pre = head;
    while(head != NULL)
    {
        head = head->next;
        free(pre);
        pre = head; 
    }

}

int main(void)
{

    Node * head = NULL;


}











