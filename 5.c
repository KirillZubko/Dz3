#include <stdio.h> 

char *getenv(const char *name);
int setenv(const char *envname, const char *envval, int overwrite);

int main(void) {
   char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    
    //setenv("HELLO", "xxx",0);
    
    char *pathvar;
    
    if(getenv(name) == NULL){
        printf("\nThere is no such variable!\n");
    }else{
        pathvar = getenv(name);
        printf("Variable value: %s\n", pathvar);
    }

  return 0;
}
