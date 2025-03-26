#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number>0) {
        goto positive;
    } else if(number<0) {
        goto negative;
    }
    
    positive:
      printf("the number is positive");
      goto end;

    negative:
     printf("the number is negative");
      goto end;
    end:
    return 0;
}