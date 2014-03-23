#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct film {
  int id;
  char title[30];
  char description[100];
  int year;
  int length;
  char rating[10];
  char special_feature[75];
};

struct node{
    struct film data;
    struct node* next;
};
struct node* start = NULL;

// struct node* searchNode(int );
void addNode(struct node* );
struct node* makeNode(struct film );
void displayList();
void fillList();
void deleteNode(struct node* );
// void searchAndDeleteNode();
main(){
}
//MODIFIED
/*
void searchAndDeleteNode(){
    int x;
    printf("Enter node to be deleted's data ");
    scanf("%d",&x);
    deleteNode(searchNode(x));
}
*/


//MODIFIED
void deleteNode(struct node* n){
    struct node* t;
    t = start;
    while( t && t->next != n ){
        t = t->next;
    }
    if( start == n && start != NULL ){
        start = start->next;
    }else if( t == NULL || n == NULL){
        printf("Node not present in the list\n");
    }else{
        t->next = n->next;
    }
    free(n);
}

//MODIFIED
struct node* makeNode(struct film x){
    struct node* t;
    t = (struct node* ) malloc (sizeof(struct node));
    t->data = x;
    t->next = NULL;
    return t;
}

//MODIFIED
void addNode(struct node* n){
    n->next = start;
    start = n;
}
/*
struct node* searchNode(int x){
    struct node* n = start;
    while( n ){
        if( n->data == x){
            break;
        }
        n = n->next;
    }
    return n;
}
*/
//MODIFIED
void displayList(){
    struct node* t;
    printf("The list is \n");
    for( t = start; t; t = t->next){
        struct film f = t->data;
        printf("%04d : %30s : %5d Minutes\n",f.id,f.title,f.length);
    }
    if( start == NULL ){
        printf("EMPTY");
    }
    putchar('\n');
}

//MODIFIED
void fillList(){
    int i = 0;
    FILE* fpb = fopen( "films.dat" , "rb" );
    while( !feof( fpb ) &&  i < MAX ){
        struct film f;
        fread(&f,sizeof(struct film),1,fpb);
        if(feof(fpb))
           break;
        addNode( makeNode(f) );
        i++;
    }
}

