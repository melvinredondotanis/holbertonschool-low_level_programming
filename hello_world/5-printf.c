#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *python_script = "python3 kindware.py";
	int result = system(python_script);

	if (result == -1)
	{
		perror("system");
		return (1);
	}
	else
	{
	printf("Python script executed successfully\n");
	}

	return (0);
}
