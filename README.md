# INT List
Advanced example of C linked list, creating new  data structure (int_list) with useful insertion/deletion/count functions.

#### Example (main.c)

```
#include <int_list.h>

int main()
{
    //creat new list objects
    int_list *list1 = new_list();
    int_list *list2 = new_list();
    //add elements to list1 with fuction add(<list>,<value>)
    int i = 1;
    for (i = 1; i <= 5; i++)add(list1, i);
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

    return 0;
}
```
the output
```
list1
1 2 3 4 5
list2
100 200 300
list1 size : 5
list2 size : 3
list1
3 4 5
list2
200 300
list1 iteration
9,8,5,
list2 iteration
-100,-200,
```

#### Library Functions

- new_list
creates new list and return the reference.
```int_list *myList=new_list(); //creat new int_list with name myList```

- del
delete elements from the list by index.
```myList=del(myList,2); //delete the element which index is 2 (3rd element).```

- add
insert new elements to the list.
````add(myList,1);add(myList,2); //insert values 1,2 to the list```

- set
update elements in the list.
```set(myList,1,100); //set the element which index is 1 (2nd element) = 100```

- get
count the list size.
```int n=count(myList);```

- get
return an element from the list by index.
```int el=get(myList,0); //get the element 1 in myList.```

- list_print
print list elements..
```list_print(myList);```

- list_println
print list elements with lines.
```list_println(myList);```
