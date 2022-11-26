#include "main.h"
/**
 * read_textfile-reads text and prints it to POSX
 * @filename:file to be opened
 * @letters:number of letters to be printed
 * Return:nbr of letters that could be printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int f;
    size_t i;
    char *b;

    if (filename == NULL)
    {
        return (0);
    }
    f = open(filename, O_RDONLY);
    if (f == -1)
    {
        return (0);
    }
    b = malloc(letters);
    if (b == NULL)
    {
        return (0);
    }
    i = read(f, b, letters);
    b[i] = '\0';
    write(STDOUT_FILENO, b, i);
    close(f);
    return (i);
}
