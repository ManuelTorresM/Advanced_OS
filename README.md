# Summary of codes and notes

1. Fork: 
    - There are some troubles when I try to run the code with a task, so I tried directly through the console without problems.
    - ```fork() == 0``` is for the child, ```fork() < 0``` is for errors and ```fork() > 0``` is for the father.

2. Excec:
    - I just tried the command ```excevp``` with a list of command to execute
    - Important to remember that exec allows us to replace the actual excetuing process for the process we select.

3. Wait:
    - In this case, wait function will work just as a way to make the father program to wait the termination of the child.

4. Signals:
    - The function ```kill()``` is used to send a signal.
    - The function ```memset()``` is usefull to fill a memory space with some values or chanche the memory space. In this case, clean the struct ```sigaction```.
    - We replace the handler of the struct.
    - with the function ```sigaction()``` we assign the struct we created before to a signal, in this case ```SIGUSR1```.

