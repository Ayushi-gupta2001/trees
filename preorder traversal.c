#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;
struct node *newnode(int x)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data part");
    scanf("%d",&x);
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
};
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return ;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void main()
{
    int y;
    root=newnode(y);
    root->left=newnode(y);
    root->right=newnode(y);
    root->left->right=newnode(y);
    root->left->right->left=newnode(y);
    root->right->left=newnode(y);
    root->right->left->right=newnode(y);
    printf("PREORDER TRAVERSAL IS \n");
    preorder(root);
}

