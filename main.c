/* fputs example */
#include <stdio.h>

int main (int argc, char **argv)
{
	if(argv[1] == NULL)
	{
		printf("Fatal Error: no file specified\n");
		return 1;
	}
	else
	{
		FILE * pFile;
		char sentence [256];

		printf ("Enter sentence to append: ");
		fgets (sentence,256,stdin);
		pFile = fopen (argv[1],"a");
		fputs (sentence,pFile);
		fclose (pFile);
	}
	return 0;
}
