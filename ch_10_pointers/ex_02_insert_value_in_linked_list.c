// Program to traverse a linked list

#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry ( struct entry *to_be_inserted, struct entry *insert_after_this)
{
  to_be_inserted->next=insert_after_this->next;
  insert_after_this->next=to_be_inserted;
}

int main (void)
{

     struct entry   n1, n2, n3, n4, to_be_inserted;
     struct entry   *list_pointer = &n1;

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

     to_be_inserted.value = 500;

    insertEntry ( &to_be_inserted, &n4 );

    list_pointer = &n1;

    printf("New list\n");

    while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     return 0;
}
