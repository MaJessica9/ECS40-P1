// Author: Jessica Ma

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
//  Directory *currentDirectory;
  int umask;
  int time;
} Funix;

void umask(Funix *funix, int argCount, const char *arguments[]);

int main(void) 
{
  Funix *funixi = (Funix*) malloc(sizeof(Funix));
  Funix funix;
  int num_arg = 1;		// ex. umask 7
  const char *array_arg[] = {"7"};		
  		
  funixi->umask = 0;		// 0 = rwx
  funixi->time = 10;		// will be 11th command

  printf("num_arg		= 	%d\n", num_arg);
  printf("argument[0]	=	%s\n", *array_arg);
  printf("current umask	=	%d\n", funixi->umask);
  printf("current time	=	%d\n\n", funixi->time);

  umask(funixi, num_arg, array_arg);

  free(funixi);

  return 0;
}



void umask(Funix *funix, int argCount, const char *arguments[])
{
  // Assuming the command doesn't count as an argument
  int i;
  if (argCount != 1)
    printf("usage: umask octal\n");
  else
  {
    printf("%c\n", *arguments[0]);

    // Parse through value in *arguments
    if (arguments[0][0] < '0'||arguments[0][0] > '7')
       printf("umask: octal must be between 0 and 7\n");
    else
    { 
      i = atoi(arguments[0]);
      funix->umask = i;
    }//else
  }//else
}//umask
