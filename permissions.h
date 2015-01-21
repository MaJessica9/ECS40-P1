#ifndef PERMISSIONS_H
  #define PERMISSIONS_H

typdef struct{
  short umask_val;
}Permissions

createPermissions(Permissions *permissions, int octal);

printPermissions(Permissions *permissions);

#endif
