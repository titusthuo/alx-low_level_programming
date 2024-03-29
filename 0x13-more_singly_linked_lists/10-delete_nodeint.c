#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp_node = *head;
listint_t *current = NULL;
unsigned int k = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp_node);
return (1);
}

while (k < index - 1)
{
if (!temp_node || !(temp_node->next))
return (-1);
temp_node = temp_node->next;
k++;
}


current = temp_node->next;
temp_node->next = current->next;
free(current);

return (1);
}

