#include "main.h"
/**
 * read_textfile-reads text and prints it to POSX
 * @filename:file to be opened
 * @letters:number of letters to be printed
 * Return:nbr of letters that could conte printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t i;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	str = malloc(letters);
	if (str == NULL)
	{
		return (0);
	}
	i = read(file, str, letters);
	str[i] = '\0';
	write(STDOUT_FILENO, str, i);
	close(file);
	return (i);
}
