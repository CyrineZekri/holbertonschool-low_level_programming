#include "main.h"
/**
 * create_file-creates file
 * @filename:file to be opened
 * @text_content:content
 * Return:nbr of letters that could conte printed.
 */
int create_file(const char *filename, char *text_content)
{
    int file, i, j;

    file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
    if (file == -1)
    {
        return (-1);
    }
    if (text_content == NULL && file != -1)
    {
        return (1);
    }
    j = strlen(text_content);
    i = write(file, text_content, l);
    if (i == -1)
    {
        return (-1);
    }
    return (1);
}
