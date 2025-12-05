#include "main.h"
/**
 * read_textfile - Reads a text file and prints
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 *         or 0 if the file cannot be opened or read,
 *         or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytesRead;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);
	buffer[bytesRead] = '\0';
	fwrite(buffer, sizeof(char), bytesRead, stdout);
	free(buffer);
	fclose(file);
	return (bytesRead);
}
