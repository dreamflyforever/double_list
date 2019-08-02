#ifndef _LIST_H_
#define _LIST_H_

#define BOOL unsigned char

#define list_entry(node, type, member) ((type *)((unsigned char*) (node) -\
		(unsigned int)(&((type *)0)->member)))

typedef struct LIST {
	struct LIST *prev;
	struct LIST *next;
} LIST;

void list_init(LIST *head);
void list_insert_spec(LIST *spec_node, LIST *node);
void list_delete(LIST *node);
void list_insert_behind(LIST *head, LIST *node);
BOOL is_list_last(LIST *node);

#endif
