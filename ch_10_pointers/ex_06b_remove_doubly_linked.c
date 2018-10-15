#include <stdio.h>

struct dlentry
{
    struct dlentry *prev;
    int value;
    struct dlentry *next;
};

struct dlentry head;

void removeEntry ( struct dlentry *remove_this)
{
    if ( remove_this->prev == (struct dlentry *) 0 ) {
        remove_this->next->prev = NULL;
        head.next = remove_this->next;
    }
    else
        remove_this->prev->next = remove_this->next;
}

int main (void)
{
    struct dlentry n1, n2, n3, n4, n5;
    struct dlentry *list_pointer = &head;

    head.next = &n1;
    list_pointer = head.next;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;
    n5.value = 500;

    n1.prev = (struct dlentry *) 0;
    n2.prev = &n1;
    n3.prev = &n2;
    n4.prev = &n3;
    n5.prev = &n4;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = (struct dlentry *) 0;

    // Original list
    
    printf("Original List\n");

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    // remove mid
    printf("\n");
    printf("Remove mid\n");

    removeEntry ( &n3 );

    list_pointer = &n1;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    // remove first
    printf("\n");
    printf("Remove first\n");

    removeEntry ( &n1 );

    list_pointer = head.next;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    // remove last
    printf("\n");
    printf("Remove last\n");

    removeEntry ( &n5 );

    list_pointer = head.next;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    return 0;
}
