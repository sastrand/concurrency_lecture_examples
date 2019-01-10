/* This application demonstrates how PIDs can be accessed
 * in a parent or child process.
 * From: https://www.gnu.org/software/libc/manual/html_node/
 *       Creating-a-Process.html
*/

#include <stdio.h>
#include <unistd.h> 

int main(void) {
    int pid;
    if ((pid=fork())==0){
        printf("I'm a child process. I think my PID is: %u and my parent's is: %u\n",getpid(),getppid());
    }
    else{ /* does no error checking*/
        printf("I'm the parent of process %d with PID: %u\n", pid, getpid());
    }
    return 0;
}

