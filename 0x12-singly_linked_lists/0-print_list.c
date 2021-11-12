#include "lists.h"
/**
 * size_t print_list - prints all the elements of a list
 * @str: string - (malloc'ed string)
 * @n: size_t
 * @h: pointer
 * 
 * Return: the number of nodes
 **/
size_t print_list(const list_t *h)
{
    const list_t*temp= head;
    size_t n = 0;
    temp = h;

    while(temp != NULL)
    {
        if(temp->next == NULL)
        {
            printf("%d", temp->value);
        }
        else{
            printf("%d, ", temp->value);
        }
        temp = temp->next;
    }
    return (n);
}
