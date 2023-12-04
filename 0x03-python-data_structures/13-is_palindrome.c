#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * is_palindrome - Determines if a singly linked list is a palindrome
  * @head: The head of the singly linked list
  *
  * Return: 0 if it's not a palindrome, 1 if it is a palindrome
  */
int is_palindrome(listint_t **head)
{
    listint_t *start = NULL, *end = NULL;
    unsigned int i = 0, length = 0, cyc_length = 0, list_length = 0;
    if (head == NULL)
    return (0);
    if (*head == NULL)
    return (1);
    start = *head;
    length = listint_len(start);
    cyc_length = length * 2;
    list_length = cyc_length - 2;
    end = *head;
    for (; i < cyc_length; i = i + 2)
    {
    if (start[i].n != end[list_length].n)
    return (0);
    list_length = list_length - 2;
    }
    return (1);
}

/**
  * get_nodeint_at_index - Retrieves a node from a linked list
  * @head: The head of the linked list
  * @index: The index to locate in the linked list
  *
  * Return: The specific node of the linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current = head;
    unsigned int iterations = 0;
    if (head)
    {
    while (current != NULL)
    {
    if (iterations == index)
    return (current);
    current = current->next;
    ++iterations;
    }
    }
    return (NULL);
}
/**
  * listint_len - Counts the number of elements in a linked list
  * @h: The linked list to count
  *
  * Return: The number of elements in the linked list
  */
size_t listint_len(const listint_t *h)
{
    int count = 0;
    while (h != NULL)
    {
    ++count;
    h = h->next;
    }
    return (count);
}
