#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	FILE* file = fopen("G:\\Users\\Nigel\\Code\\Rec0ver_H4rv4rd\\rsc\\card.raw", "rb");
	if (!file) {
		exit(-1);
	}

	const char* ReadBuffer = malloc(sizeof(char) * 512);
	if (ReadBuffer == NULL) {
		exit(-2);
	}
	

	int read = 0 ;
	int total_read = 0;
	do { 
		read = fread(ReadBuffer, sizeof(char), 512, file);
		total_read += read;
		printf("==============Begin Block==============\n");
		for (int i = 0; i < 512 ; i++)
		{
			if ( i % 50 == 0){
				printf("\n");
			}
			printf("%x", ReadBuffer[i]);
		}
		printf("==============End Block===============\n");

		printf("Bytes read total : %X\n", total_read);

	} while (read != 0);

	printf("Total read: %i bytes\n", total_read);

	free(ReadBuffer);
	fclose(file);
}
