#include "main.h"

/***/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t caracs_write;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		caracs_write = dprintf(file_descriptor, "%s", text_content);

		if (caracs_write == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
