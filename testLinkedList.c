#include "linkedList.h"

int main(){
	ll_h* ll = createLL();
	
	insertLL(ll, 5);
	printf("inserted 5\n");
	insertLL(ll, 8);
	printf("inserted 8\n");
	insertLL(ll, 34);
	printf("inserted 34\n");
	insertLL(ll, 7);
	printf("inserted 7\n");
	insertLL(ll, 1);
	printf("inserted 1\n");
	insertLL(ll, 2);
	printf("inserted 2\n");
	insertLL(ll, 23);
	printf("inserted 23\n");
	
	if(ll_find(ll, 5)){
		printf("\nfound 5\n");
	}
	ll = removeHead(ll);
	if(!ll_find(ll, 5)){
		printf("succesfully removed head\n");
	}
	if(ll_find(ll, 1)){
		printf("found 1\n");
	}
	
	ll_delete(ll);
}

	
