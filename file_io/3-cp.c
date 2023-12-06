#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Liste of char pointer arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_source, file_destination, caracs_read, caracs_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_source = open(argv[1], O_RDONLY);

	if (file_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((caracs_read = read(file_source, buffer, sizeof(buffer))) > 0)
	{
		caracs_write = write(file_destination, buffer, caracs_read);

		if (caracs_write != caracs_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (caracs_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_destination);
		exit(100);
	}

	if (close(file_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source);
		exit(100);
	}

	return (0);
}
