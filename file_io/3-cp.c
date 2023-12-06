#include "main.h"

/**
* main - entry point
* @argc: arguments
* @argv: arguments number
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int source, destination, readFile, writeFile;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Ouvrir le fichier source */
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Création du fichier de destination */
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* Copie depuis source dans destination */
	while ((readFile = read(source, buffer, sizeof(buffer))) > 0)
	{
		writeFile = write(destination, buffer, readFile);
		if (writeFile != readFile)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (readFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(source) == -1 || close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}
	return (0);
}
