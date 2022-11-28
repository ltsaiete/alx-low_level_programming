#ifndef _lists_h
#define _lists_h
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
int _putchar(char c);
int _putnumber(int n);
size_t print_listint(const listint_t *h);
#endif
