#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	uint32_t input1;
	uint32_t input2;
	uint32_t sum;

	if(argc != 3)
	{
		printf("wrong input!\n");
		exit(1);
	}

	FILE* fhd = fopen(argv[1], "rb");
	FILE* otd = fopen(argv[2], "rb");

	if((fhd == NULL) || (otd == NULL))
	{
		printf("file read error!\n");
		exit(1);
	}
	
	fread(&input1, 4, 1, fhd);	
	fread(&input2, 4, 1, otd);	

	input1 = ntohl(input1);
	input2 = ntohl(input2);
	sum = input1 + input2;

	printf("%d(%#x) + %d(%#x) = %d(%#x)\n", input1, input1, input2, input2, sum, sum);
}
