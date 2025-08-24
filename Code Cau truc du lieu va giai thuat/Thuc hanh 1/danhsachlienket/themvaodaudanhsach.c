#include <stdio.h>
#include <stdlib.h>
struct node //
{
    int node;
    struct node *next; // Khai bao con tro kieu struct
};

struct node *tao_newnode(struct node *head, int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Khong du bo nho de cap phat\n");
        return head;
    }
    newnode->node = data;
    newnode->next = head;
    return newnode;
}
void in_danhsach(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->node);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    int n, x; // n la so phan tu can them, x la phan tu can them vao danh sach
    struct node *head = NULL;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        head = tao_newnode(head, x);
    }
    in_danhsach(head);
    return 0;
}
