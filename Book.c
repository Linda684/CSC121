#include <stdio.h>

struct book
{
    char title[100];
    char author[100];
    float price;
    // structure for book records
};

//function to input book details
int main() 
{
    struct book b;
    printf("\nEnter title\n");
    gets(b.title);
    printf("\nEnter author\n");
    gets(b.author);
    printf("\nEnter book_price\n");
    scanf("%.2f", &b.price);

    printf("\nBook details...\n");
    printf("\nBook title = %s, b.title");
    printf("\nBook author = %s, b.author");
    printf("\nBook price = %f, b.price");

    return 0;
    
    };
    
     


    
 
    





    

        
    
