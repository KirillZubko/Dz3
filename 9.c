#include <stdio.h> 
#include <limits.h>
#include <unistd.h>
#include <sys/utsname.h>

int gethostname(char *name, size_t namelen);
long gethostid(void);
int uname(struct utsname *name);


int main(void) {
    struct utsname uts;
    
  char hostname[HOST_NAME_MAX + 1];
  gethostname(hostname, HOST_NAME_MAX + 1);
  printf("hostname: %s\n", hostname);
  
  long id = gethostid();
  printf("hostid: %ld", id);
  
  if (uname(&uts) < 0)
    perror("\nuname() error");
  else {
    printf("\nSysname:  %s\n", uts.sysname);
    printf("Nodename: %s\n", uts.nodename);
    printf("Release:  %s\n", uts.release);
    printf("Version:  %s\n", uts.version);
    printf("Machine:  %s\n", uts.machine);
  }
  }
