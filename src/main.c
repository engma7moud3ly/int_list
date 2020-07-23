#include <int_list.h>

int main()
{
    //creat new list objects
    int_list *list1 = new_list();
    int_list *list2 = new_list();
    //add elements to list1 with fuction add(<list>,<value>)
    int i = 1;
    for (i = 1; i <= 5; i++)
        add(list1, i);
    //add elements to list2
    add(list2, 100);
    add(list2, 200);
    add(list2, 300);

    //print all element in the list1/2
    printf("list1\n");
    list_print(list1);
    printf("list2\n");
    list_print(list2);

    //get list size by function count(<list>)
    printf("list1 size : %i\n", count(list1));
    printf("list2 size : %i\n", count(list2));

    //delete elements from the list by index list=del(<list>,<index>)
    //note : assignment is a must  list=del()...
    list1 = del(list1, 1);
    list1 = del(list1, 0);
    list2 = del(list2, 0);

    printf("list1\n");
    list_print(list1);
    printf("list2\n");
    list_print(list2);

    //change elements in the list by index set(<list>,<index>,<new_value>)
    set(list1, 0, 9);
    set(list1, 1, 8);
    set(list2, 0, -100);
    set(list2, 1, -200);

    //print list elements one by one..
    printf("list1 iteration\n");
    for (i = 0; i < count(list1); i++)
        printf("%i,", get(list1, i));
    printf("\nlist2 iteration\n");
    for (i = 0; i < count(list2); i++)
        printf("%i,", get(list2, i));
        
    printf("\n");
    return 0;
}