#include "main.h"

/**
 * append_text_to_file - function that add text to an already existing file
 *
 * @filename: the name of the file to append content to
 * @text_content: THE CONTENT TO BE APPENDED TO THE FILE
 *
 * Return: 1 on success and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (bletters = 0; text_content[bletters]; bletters++)
			;
		rwr = write(fd, text_content, bletters);

		if (rwr == -1)
			return (-1);
	}
	
	close(fd);

	return (1);
}
