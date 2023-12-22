#ifndef LL_H_
#define LL_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct ll_h{
	int val;
	struct ll_h* next;
}ll_h;

ll_h* createLL(void);

void insertLL(ll_h* ptr, int val);

ll_h* removeHead(ll_h* ptr);

bool ll_find(ll_h* ptr, int val);

void ll_delete(ll_h* ptr);

#endif
