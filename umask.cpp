void umask(Funix *funix, int argCount, const char *arguments[])
{
  // Assuming the command doesn't count as an argument
  int i;
  if (argCount != 1)
    printf("usage: umask octal");
  else
  {
    // Parse through value in *arguments
    // if (*argument[0] != '0'||*argument[0] != '1' \
	||*argument[0] != '2'||*argument[0] != '3'\
	||*argument[0] != '4'||*argument[0] != '5'\
	||*argument[0] != '6'||*argument[0] != '7'\
    //   printf("umask: octal must be between 0 and 7");
    // else
    // { 
    //   i = atoi(argument);
    //   funix->umask = i;
    //   funix->time = funix->time + 1;
    // }
  }
}
