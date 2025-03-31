#ifndef C9A32705_16F7_4B5F_AFF2_E9C1BD984D62
#define C9A32705_16F7_4B5F_AFF2_E9C1BD984D62
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* C9A32705_16F7_4B5F_AFF2_E9C1BD984D62 */
