#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *but;
	ssize_t fo;
	ssize_t w;
	ssize_t t;

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	but = malloc(sizeof(char) * letters);
	t = read(fo, but, letters);
	w = write(STDOUT_FILENO, but, t);

	free(but);
	close(fo);

	return (w);
}
