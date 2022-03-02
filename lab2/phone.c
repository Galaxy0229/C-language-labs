#include <stdio.h>
#include <stdlib.h>

/*
Your task is to write a small C program called phone.c that uses scanf to read two values from standard input. 
The first is a 10 character string and the second is an integer. The program takes no command-line arguments. 
(You will write this program from scratch, so remember to add, commit, and push.)

If the integer is -1, the program prints the full string to stdout. 
If the integer is between 0 and 9 the program prints only the corresponding digit from the string to stdout. 
In both of these cases the program returns 0.

If the integer is less than -1 or greater than 9, the program prints the message "ERROR" to stdout and returns 1.
*/



int main() {
    char phone[11];
    int integer;

    scanf("%s%d", phone, &integer);

    if (integer == -1){
        printf("%s\n", phone);
        return 0;
    }
    else if (0 <= integer && integer <= 9){
        printf("%c\n", phone[integer]);
        return 0;
    }
    else {
        printf("ERROR\n");
        return 1;
    }
}
