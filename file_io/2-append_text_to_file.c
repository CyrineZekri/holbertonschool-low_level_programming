#include "main.h"
/**
 *  append_text_to_file-appends file
 * @filename:file to be opened
 * @text_content:content
 * Return:nbr of letters that could conte printed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;
	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	len = strlen(text_content);
	write(file, text_content, len);
	close(file);
	return (1);
}
