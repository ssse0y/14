#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book {
	int number;
	char title[10];
}; 

void main(void){
	struct Book **bookshelf;
	int i;
	
	bookshelf = (struct Book**)malloc(3*sizeof(struct Book*));
	
	for (i=0; i<3; i++)
		bookshelf = (struct Book**)malloc(3*sizeof(struct Book*));
	
	bookshelf[1][3].number=5;
	strcpy(bookshelf[1][3].title,"C++ Programing");
	
	(bookshelf[2]+4)->number=3;
	strcpy((bookshelf[2]+4)->title, "Communications Theory");
	
	printf("book(1,3): %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)-> title);
	printf("book(2,4): %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title);
	
	for(i=0;i<3;i++)
	   free(bookshelf[i]);
	free(bookshelf);
	return ;
}
