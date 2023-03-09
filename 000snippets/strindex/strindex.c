int strindex(char source[], char pattern[])
{
  int i, j, k;

  printf("line len: %lu\n", strlen(source));

  for (i = strlen(source); i >= 0; --i)
  {
    for (j = i, k = 0; pattern[k] != '\0' && source[j] == pattern[k]; ++j, ++k)
      ;

    if (k > 0 && pattern[k] == '\0')
    {
      return i;
    }
  }

  return -1;
}
