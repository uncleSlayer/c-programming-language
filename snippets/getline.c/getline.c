int get_line(char line[]){

    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        line[i++] = c;
    }
    
    if (c == '\n')
    {
        line[i++] = c;
    }

    if (c == '\0')
    {
        line[i] = c;
    }
    
    return i;
}
