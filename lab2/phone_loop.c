#include <stdio.h>
#include <stdlib.h>

/*
Your task is to write a C program called phone_loop.c. 
This program will again read from standard input using scanf and take no command-line arguments. 
Similar to phone.c, this program reads a 10-character string as the first input value 
but then it repeatedly reads integers until standard input is closed.

After each integer the output produced is as before:

if the integer is -1, the full string is printed
if the integer is between 0 and 9, the individual character at that position is printed
if the integer is less than -1 or greater than 9, the message "ERROR" is printed (to stdout)
In each case the printing is followed by a newline character.

When the program finishes running, main returns with a 0 return code if there were no errors and with a 1 return code otherwise.
*/


int main() {
    char phone[11];
    int integer;
    int err = 0;

    scanf("%s", phone);

    while(scanf("%d", &integer) != EOF){
        if (integer == -1){
            printf("%s\n", phone);
        }
        else if (0 <= integer && integer <= 9){
            printf("%c\n", phone[integer]);
        }
        else {
            printf("ERROR\n");
            err = 1;
        }
    }

    return err;
}