/* fputs example */
#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
	FILE * pFile;
	if(argv[1] == NULL)
	{
		printf("Fatal Error: no file specified\n");
		return 1;
	}
	else if(strcmp(argv[1], "-lines") == 0)
	{
		int c;
 		int n = 0;
  		pFile=fopen (argv[2],"r");
  		if (pFile==NULL) perror ("Error opening file");
  		else
  		{
    		do {
      				c = fgetc (pFile);
      				if (c == '\n') n++;
    				} while (c != EOF);
    		fclose (pFile);
    		printf ("The file contains %d lines.\n",n);
  		}
  		return 0;
	}
	else
	{
		char sentence [256];

		printf ("Enter sentence to append: ");
		fgets (sentence,256,stdin);
		pFile = fopen (argv[1],"a");
		fputs (sentence,pFile);
		fclose (pFile);
	}
	return 0;
}
