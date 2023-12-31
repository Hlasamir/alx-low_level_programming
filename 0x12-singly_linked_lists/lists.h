#ifndef LISTS_H
#define LISTS_H

/**
 * @len: length of string.
 * @next: Points_to_next_node.
 * @str: String (malloc'ed string).
 * Description: Singly linked - list node structure.
 * Holberton project.
 * STRUCT LISTS: SiNGLY LINKED LISTS.
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void free_list(list_t *head);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
#endif
