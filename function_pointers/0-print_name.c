/**
 * print_name - Print a name
 *
 * Description: 'This function prints a name with the f function return nothing
 * and have a char pointer in argument. She return nothing'
 *
 * @name: Char pointer
 * @f: f funtion pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
