#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
 
void my_handler(int sig_num) {
    printf("Received %d\n", sig_num);
}

int main() {
    struct sigaction sa;

    /*
    struct sigaction {
        void    (*sa_handler)(int);
        void    (*sa_sigaction)(int, siginfo_t *, void *);
        sigset_t sa_mask;
        int     sa_flags;
        void    (*sa_restorer)(void);
    };
    */
   
    // Fill the memory space of the struct with 0, its clean
    memset(&sa, 0, sizeof(sa));
    
    printf("My PID is: %d\n", getpid());

    // Pointer to my function, I assign the handler my_handler
    sa.sa_handler = &my_handler;

    /*
    int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);

    signum: signal to catch (a SIG_* constant)
    act: new settings to apply to register a handler function
    oldact: output variable, it saves the old settings if not NULL
    
    */
    sigaction(SIGUSR1, &sa, NULL);

    while(1) { sleep(1); }
    return 0;
}
