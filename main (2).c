int find_and_check(char * str, char symbol, char space)
{
    int index = -1;
    while (str[index] != symbol)
    {
        if (str[index] == '\0')
        {
            return -1;
        }
        if (str[index] != space)
        {
            printf("map error");
            exit(1);
        }
        ++index;
    }

    return index;
}

int find_in_line(char * str, char symbol);

unsigned int get_squre_size(char * str, int size_line, char separator)
{
    int square_size = -1;
    int line_index = 0;
    
    while (*str != SEPARATOR && line_index <= square_size)
    {
        int len_in_line = find(str, separator);
        if (square_size == -1 || square_size > len_in_line)
        {
            square_size = len_in_line;
        }
        str += size_line + 1;
        ++line_index;
    }

    return min(square_size, line_index);
}
