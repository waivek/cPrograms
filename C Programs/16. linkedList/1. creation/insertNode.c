#include<stdio.h>
#include<stdlib.h>
//#define NULL 0
struct node* add(struct node* , int );
struct node{
    int data;
    struct node* next;
};
main(){
    struct node *start;
    start = NULL;
    while(1){
        int input;
        printf("? ");
        scanf("%d", &input);
        if(input == -1){
            break;
        }
        start  = (struct node* ) add(start, input);
    }
    display(start);
}
struct node* add(struct node* start, int x){
    struct node* n;
    n = ( struct node *) malloc (sizeof(struct node));
    n->data = x;
    n->next = start;
    start = n;
    return start;
}
display(struct node *start){
    printf("The linked list is \n");
    struct node* n;
    for ( n = start; n != NULL ; n = n->next){
        printf("%d -> ", n->data);
    }

}
