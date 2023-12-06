#include "main.h"

/***/

void print_error(int number, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(number);
}

/***/

int main(int argc, char *argv[])
{
	int file_source, file_destination;
	const char *file_from = argv[1], *file_to = argv[2];
	ssize_t caracs_read, caracs_write;
	char buffer[1024];

	if (argc != 3)
		print_error(97, "Usage: %s file_from file_to\n", argv[0]);

	file_source = open(argv[1], O_RDONLY);
	if (file_source == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);

	file_destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_destination == -1)
		print_error(99, "Error: Can't write to %s\n", file_to);

	while ((caracs_read = read(file_source, buffer, 1024)) != -1)
	{
		caracs_write = write(file_destination, buffer, caracs_read);

		if (caracs_write != caracs_read)
			print_error(99, "Error: Can't write to %s\n", file_to);
	}
	if (caracs_read == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);

	if (close(file_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source);
		exit(100);
	}
	if (close(file_destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_destination);
		exit(100);
	}

	return (0);
}
