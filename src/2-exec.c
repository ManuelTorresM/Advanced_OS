#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main() {
    char * arg_list[] = { "ls", "-l", "/", NULL };

    if (fork() != 0) {              // 2nd part
        execvp ("ls", arg_list);
    }                               // 2nd part

   /*
   char * arg_list[] = {"./out" ,NULL };

   if(fork() != 0){
    execvp(arg_list[0], arg_list);
   }
   */

    printf ("Main program exiting.\n");

    return 0;
}