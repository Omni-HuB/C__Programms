//
// Created by shariq20220 on 06-Jul-22.
//

#include<stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* allocate_node(int data) {
    struct node  *n= (struct node* )malloc(sizeof (struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

//void print_tree(struct node *head){
//    struct node *tmp=head;
//    while(tmp!=NULL){
//        printf("%d",tmp->data);
//        tmp=tmp->left;
//        tmp=tmp->right;
//    }
//    printf("\n");
//
//}

int  main() {
    /*
     *
// constructing the root  node
    struct node  *p= (struct node* )malloc(sizeof (struct node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;

// constructing the first node
    struct node  *p1= (struct node* )malloc(sizeof (struct node));
    p1->data=1;
    p1->left=NULL;
    p1->right=NULL;

// constructing the second node
    struct node  *p2= (struct node* )malloc(sizeof (struct node));
    p2->data=4;
    p2->left=NULL;
    p2->right=NULL;

    */

    struct node *p= allocate_node(2);
    struct node *p1= allocate_node(1);
    struct node *p2= allocate_node(4);

// linking the root node , first node and second node

    p->left=p1;
    p->right=p2;

  //  print_tree(*p);
  return 0;
}
