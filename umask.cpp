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
      printf("YAY!\n");
    // { 
    //   i = atoi(argument[0][0]);
    //   funix->umask = i;
    //   funix->time = funix->time + 1;
    //
    // }

  }
}
