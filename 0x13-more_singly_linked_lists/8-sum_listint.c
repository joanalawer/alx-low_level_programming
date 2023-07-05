#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Function returns the sum of all the data in a linked list.
 * @head: Pointer to first node
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->data;
		temp = temp->next;
	}

	return (sum);
}
