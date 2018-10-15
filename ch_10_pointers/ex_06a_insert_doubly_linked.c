#include <stdio.h>

struct dlentry
{
    struct dlentry *prev;
    int value;
    struct dlentry *next;
};

void insertEntry ( struct dlentry *to_be_inserted, struct dlentry *insert_after_this )
{
    to_be_inserted->next = insert_after_this->next;
    to_be_inserted->prev = insert_after_this->prev;
    insert_after_this->next = to_be_inserted;
}

int main (void)
{
    struct dlentry n1, n2, n3, n4, head, new_entry, new_entry2, new_entry3;
    struct dlentry *list_pointer = &head;

    head.next = &n1;
    list_pointer = head.next;
    
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

    // Original list
    
    printf("Original List\n");

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    // insert head

    printf("\n");
    printf("Insert head\n");

    new_entry.value = 500;

    insertEntry ( &new_entry, &head );
    
    list_pointer = head.next;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    // insert mid
    
    printf("\n");
    printf("Insert mid\n");

    new_entry2.value = 600;

    insertEntry ( &new_entry2, &n2 );

    list_pointer = head.next;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    // insert last

    printf("\n");
    printf("Insert last\n");

    new_entry3.value = 700;

    insertEntry ( &new_entry3, &n4 );

    list_pointer = head.next;

    while ( list_pointer != 0 ) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    return 0;
}
