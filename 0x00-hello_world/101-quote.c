#include <unistd.h> 
#include <sys/syscall.h> 
#include <stdio.h>
int main(void) 
{
const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO,msg, sizeof(msg));
return 1;
}
