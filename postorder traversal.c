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
void postorder(struct node *root)
{
    if(root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
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
    printf("POSTORDER TRAVERSAL IS \n");
    postorder(root);
}
