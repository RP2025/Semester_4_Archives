#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
        int data;
        struct node *next;
} node;


node * create(node *start, int arr[], int n)
{
        start = (node *)malloc(sizeof(node));
        start->data = arr[0];
        start->next = NULL;
        node *last = start;
        for(int i=1;i<n;i++)
        {
                node *temp = (node *)malloc(sizeof(node));
                temp->next = NULL;
                temp->data = arr[i];
                last->next = temp;
                last = temp;
        }
        return start;
}



node *sort(node *start, node *trev)
{
        if(trev == NULL)
                return start;
        else
        {
        int min = trev->data;
        node *min_loc = trev;
	node *t = trev->next;
        while(t)
        {
                if(t->data<min)
                {
                        min_loc = t;
                        min = t->data;
                }
                t = t->next;
        }
        min_loc->data = trev->data;
        trev->data = min;
        return sort(start, trev->next);
        }
}

void display(node *start)
{
        while(start)
        {
                printf("%d ", start->data);
                start = start->next;
        }
        printf("\n");
}

int main()
{
        node *start = NULL;
        int n;
        printf("Enter the no of elements: ");
        scanf("%d", &n);
        int arr[n];
        printf("Give elements: ");
        for(int i=0;i<n;i++)
        	scanf("%d", &arr[i]);
        start = create(start, arr, n);
        start = sort(start, start);
        display(start);
}
