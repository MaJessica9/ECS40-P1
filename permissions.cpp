#include "permissions.h"

typdef struct{
  short umask_val;
}Permissions

void createPermissions(Permissions *permissions, int octal)
{
  permissions->umask_val = (short) octal;
}

void printPermissions(Permissions *permissions)
{
  switch(octal)
  {
    case 0:
      printf("rwx ");
      break;
    case 1:
      printf("rw- ");
      break;
    case 2:
      printf("r-x ");
      break;
    case 3:
      printf("r-- ");
      break;
    case 4:
      printf("-wx ");
      break;
    case 5:
      printf("-w- ");
      break;
    case 6:
      printf("--x ");
      break;
    case 7:
      printf("--- ");
      break;
  }
}
