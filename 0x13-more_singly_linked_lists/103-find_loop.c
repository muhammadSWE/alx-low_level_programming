#include "lists.h"
/**
 *find_listint_loop - finds the loop in a linked list
 *@head: linked list to search for
 *
 *Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *detector1 = head;
	listint_t *detector2 = head;

	if (!head)
	{
		return (NULL);
	}

	while (detector1 && detector2 && detector2->next)
	{
		detector2 = detector2->next->next;
		detector1 = detector1->next;
		if (detector2 == detector1)
		{
			detector1 = head;
			while (detector1 != detector2)
			{
				detector1 = detector1->next;
				detector2 = detector2->next;
			}
			return (detector2);
		}
	}
	return (NULL);
}
