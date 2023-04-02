#include<stdio.h>
#include<stdlib.h>

int multiple(int num);

int main(int argc, char *argv[])
{

	const int DEC_SIZE = 32;
	int num = atoi(argv[1]), bin[4], dec[DEC_SIZE], counter;

	if(num > DEC_SIZE)
	{
		printf("Префикс не может быть больше 32.\n");
		return 1;
	}

	printf("Decimal: %d\n", num);

	for(counter = 0; counter < num; ++counter)
		dec[counter] = 1;

	for(counter = num; counter < DEC_SIZE; ++counter)
		dec[counter] = 0;
 
	bin[0] = multiple(multiple(multiple(multiple(multiple(multiple(multiple(dec[0]) + dec[1]) + dec[2]) + dec[3]) + dec[4]) + dec[5]) + dec[6]) + dec[7];
	bin[1] = multiple(multiple(multiple(multiple(multiple(multiple(multiple(dec[8]) + dec[9]) + dec[10]) + dec[11]) + dec[12]) + dec[13]) + dec[14]) + dec[15];	
	bin[2] = multiple(multiple(multiple(multiple(multiple(multiple(multiple(dec[16]) + dec[17]) + dec[18]) + dec[19]) + dec[20]) + dec[21]) + dec[22]) + dec[23];
	bin[3] = multiple(multiple(multiple(multiple(multiple(multiple(multiple(dec[24]) + dec[25]) + dec[26]) + dec[27]) + dec[28]) + dec[29]) + dec[30]) + dec[31];

	printf("%d.%d.%d.%d\n", bin[0], bin[1], bin[2], bin[3]);

}

int multiple(int num)
{
	return num * 10;
}
