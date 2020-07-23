#include <int_list.h>

#define null NULL

struct Node *get_tail(struct Node *node)
{
    while (node->next != NULL)
    {
        node = node->next;
    }
    return node;
}
struct Node *get_node(struct Node *node, int index)
{
    if (index == 0)
        return node;
    else if (index < 0)
        return NULL;
    int i;
    for (i = 0; i < index && node->next != NULL; i++)
    {
        node = node->next;
    }
    return node;
}

/***********/
struct Node *new_list()
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = NULL;
    node->next = NULL;
    return node;
}

void add(struct Node *node, int data)
{
    if (node->data == NULL)
    {
        node->data = data;
        node->next = NULL;
        return;
    }
    struct Node *tail = get_tail(node);
    struct Node *n = new_list();
    n->data = data;
    tail->next = n;
}

int get(struct Node *node, int index)
{
    return get_node(node, index)->data;
}

void set(struct Node *node, int index, int data)
{
    get_node(node, index)->data = data;
}

int count(struct Node *node)
{
    int i = 0;
    if (node->data != NULL)
        i++;
    while ((node = node->next) != NULL)
        i++;
    return i;
}

struct Node *del(struct Node *node, int index)
{
    struct Node *pervious = NULL;
    struct Node *current = NULL;
    if (index == 0) //no pervious nodes
    {
        current = node;
        node = node->next;
    }
    else
    {
        pervious = get_node(node, index - 1);
        current = pervious->next;
        pervious->next = current->next;
    }
    free(current);
    return node;
}

void list_print(struct Node *n)
{
    int i = 0;
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
        if (++i == 50)
            break;
    }
    printf("\n");
}

void list_println(struct Node *n)
{
    int i = 0;
    while (n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
        if (++i == 50)
            break;
    }
}
