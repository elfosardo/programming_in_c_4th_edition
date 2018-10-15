#include <stdio.h>

struct dlentry
{
    struct dlentry *prev;
    int value;
    struct dlentry *next;
};

int main (void)
{
    struct dlentry n1, n2, n3, n4, *list_pointer;
    
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;

    n1.prev = (struct dlentry *) 0;
    n2.prev = &n1;
    n3.prev = &n2;
    n4.prev = &n3;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = (struct dlentry *) 0;

    // Print forward

    list_pointer = &n1;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    printf("\n");

    // Print backward
    
    list_pointer = &n4;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->prev;
    }

    return 0;
}
