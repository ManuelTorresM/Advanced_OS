# Summary of codes and notes

1. Fork: 
    - There are some troubles when I try to run the code with a task, so I tried directly through the console without problems.
    - ```fork() == 0``` is for the child, ```fork() < 0``` is for errors and ```fork() > 0``` is for the father.

2. Excec:
    - I just tried the command ```excevp``` with a list of command to execute
    - Important to remember that exec allows us to replace the actual excetuing process for the process we select.

3. Wait:
    - In this case, wait function will work just as a way to make the father program to wait the termination of the child.

