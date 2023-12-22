#include <stddef.h>
#include "linkedList.h"

ll_h* createLL(void){
	ll_h* ptr;
	ptr = (ll_h*)malloc(sizeof(ll_h));
	ptr->val = NULL;
	ptr->next = NULL;
	return ptr;
}

void insertLL(ll_h* ptr, int val){
	if(ptr == NULL){
		printf("inavlid linked list");
	}else if(ptr->val == NULL){
		ptr->val = val;
	}else{
		ll_h* node = createLL();
		node->val = val;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = node;
	}	
}

ll_h* removeHead(ll_h* ptr){
	if(ptr != NULL){
		ll_h* temp;
		temp = ptr->next;
		free(ptr);
		return temp;
	}else{
		return NULL;
	}
}

bool ll_find(ll_h* ptr, int val){
	if(ptr == NULL){
		return 0;
	}else{
		while(ptr != NULL){
			if(ptr->val == val){
				return 1;
			}
			ptr = ptr->next;
		}
		return 0;
	}
}

void ll_delete(ll_h* ptr){
	while(ptr != NULL){
		ll_h* temp;
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}


