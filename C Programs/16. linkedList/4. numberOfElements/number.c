#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void addNode(struct node* );
struct node* makeNode(int );
int displayList();
void fillList();
struct node* start = NULL;

main(){
    fillList();
    int x;
    x = displayList();
    printf("The number of nodes is %d\n",x);
}

struct node* makeNode(int x){
    struct node* t;
    t = (struct node* ) malloc (sizeof(struct node));
    t->data = x;
    t->next = NULL;
    return t;
}

void addNode(struct node* n){
    n->next = start;
    start = n;
}

int displayList(){
    struct node* t;
    printf("The list is \n");
    int i = 0;
    for( t = start; t; t = t->next){
        printf("%2d\t",t->data);
        i++;
    }
    putchar('\n');
    return(i);
}

void fillList(){
    printf("Input elements for the list and enter -1 to stop\n");
    while(1){
        int input = 0;
        printf("? ");
        scanf("%d", &input);
        if( input == -1 ){
            break;
        }
        addNode( makeNode(input) );
    }
}
