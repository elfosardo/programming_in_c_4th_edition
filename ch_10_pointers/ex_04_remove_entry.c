#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void removeEntry ( struct entry *remove_after_this)
{
  remove_after_this->next=remove_after_this->next->next;
}

int main (void)
{
    struct entry n1, n2, n3, n4;
    struct entry head;
    struct entry *list_pointer = &head;

    head.next = &n1;
    list_pointer = head.next;

    n1.value = 100;
    n1.next  = &n2;

    n2.value = 200;
    n2.next  = &n3;

    n3.value = 300;
    n3.next  = &n4;

    n4.value = 400;
    n4.next  = (struct entry *) 0;    // Mark list end with null pointeri

    printf("Original list\n");

    while ( list_pointer != (struct entry *) 0 ) {
        printf ("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    removeEntry ( &n1 );

    list_pointer = head.next;

    printf("New list\n");

    while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     return 0;
}
