#include "main.h"
/**
 * read_textfile-reads text and prints it to POSX
 * @filename:file to be opened
 * @letters:number of letters to be printed
 * Return:nbr of letters that could be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    char *container;
    size_t i;

    if (filename == NULL)
    {
        return (0);
    }
    file = open(filename, O_RDONLY);
    if (file == -1)
    {
        return (0);
    }
    container = malloc(letters);
    if (container == NULL)
    {
        return (NULL);
    }
    i = read(file, container, letters);

    write(STDOUT_FILENO, container, i);
    close(file);
    return (i);
}
