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
    for(n->next = start; n->next != NULL ; n = n->next ){
        struct node* m = n->next;
        if( x < m->data )
            break;
    }
    struct node* m;
    m = ( struct node *) malloc (sizeof(struct node));
    m->data = x;
    m->next = n->next;
    n->next = m;
    if( m->next == start )
        start = m;
    return start;
}
display(struct node *start){
    printf("The linked list is \n");
    struct node* n;
    for ( n = start; n != NULL ; n = n->next){
        printf("%d -> ", n->data);
    }

}
