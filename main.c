#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * First C program in VSCode.
 */
int main(int argc, char const *argv[])
{

    // **** initialization ****
    int  response;

    // **** display message ****
    printf("main <<< !!! First C program in VSCode !!!\n");

    // **** prompt user for input ****
    printf("main >>> enter integer: ");
    scanf("%d", &response);

    // **** display response ****
    printf("main <<< you entered: %d\n", response);

    // **** all done ****
    return 0;
}
