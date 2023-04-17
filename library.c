#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_books 100
struct book
{
	char title[100];
	char author[100];
	int isbn;
	float price;
};
struct book library[max_books];
int num_books = 0;

void add_book() 
{
    if (num_books >= max_books) 
	{
        printf("Sorry, the library is full.\n");
    }
    
    printf("Enter book title: ");
    scanf("%s", library[num_books].title);
    printf("Enter author name: ");
    scanf("%s", library[num_books].author);
    printf("Enter ISBN number: ");
    scanf("%d", &library[num_books].isbn);
    printf("Enter price: ");
    scanf("%f", &library[num_books].price);
    
    num_books++;
    printf("Book added to library.\n");
}

void display_book(struct book b)
{
	printf("%sby%s(isbn:%d,price:%d)\n",b.title,b.author,b.isbn,b.price);
}void display_books() {
    if (num_books == 0) {
        printf("The library is empty.\n");
        return;
    }
    int i;
    printf("Library contents:\n");
    
    for (i = 0; i < num_books; i++) {
        display_book(library[i]);
    }
}

void list_books_by_author() 
{
    char author[100];
    int found = 0;
    
    printf("Enter author name: ");
    scanf("%s", author);
    int i;
    for (i = 0; i < num_books; i++) 
	{
        if (strcmp(library[i].author, author) == 0) 
		{
            display_book(library[i]);
            found = 1;
        }
    }
    if(!found)
    {
    	printf("no book found by author%s\n",author);
	}
}
void list_book_count() 
{
    printf("There are %d books in the library.\n", num_books);
}


