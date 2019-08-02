#include <stdio.h>
#include "list.h"

typedef struct TEST {
	LIST task_list;
	int number;
} TEST;

TEST a;
TEST b;
TEST c;

int main()
{
	a.number = 10;
	b.number = 20;
	c.number = 30;

	list_init(&a.task_list);
	list_insert_spec(&a.task_list, &c.task_list);
	list_insert_spec(&c.task_list, &b.task_list);
	LIST *tmp = &a.task_list;
	TEST *d;
	while (!is_list_last(tmp)) {
		d = list_entry(tmp, TEST, task_list);
		tmp = tmp->next;
		printf("%d\n", d->number);
	}
	d = list_entry(tmp, TEST, task_list);
	printf("%d\n", d->number);
	return 0;
}
