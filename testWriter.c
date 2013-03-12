#include <stdio.h>
#include <stdlib.h>
#include "scoReader.h"
#include "scoWriter.h"

int main(int argc, char **argv)
{
	if(argc < 3)
	{
		printf("Usage: %s filename\n", argv[0]);
		return EXIT_FAILURE;
	}

	FILE *in = fopen(argv[1], "rb");
	FILE *out = fopen(argv[2], "wb");

	if(!in || !out)
	{
		printf("ERROR: file %s or %s not found\n", argv[1], argv[2]);
		return EXIT_FAILURE;
	}

	printf("Reading %s\n", argv[1]);
	sco_file_t sco_file;
	read_sco_file(in, &sco_file);

	printf("Writing %s\n", argv[2]);
	write_sco_file(out, &sco_file);

	return EXIT_SUCCESS;
}

