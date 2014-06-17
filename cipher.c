//Transposition cipher

// Inputs : string, choice of whether to encrypt or decrypt it.

#include<stdio.h>
#include<string.h>

char str[1000];
char cipher[100][100];
int i,j,k=0;
int row;

int nrows()
{
	//Returns number of rows of cipher text
	int length;

		length = strlen(str);
	if(length % 3 == 0) 
		row = length / 3 ;
	else
		row = (length / 3) + 1;
}

void encrypt()
{
	//generates encypted text in cipher[][]

	row = nrows();
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(str[k] != '\0')
				cipher[i][j] = str[k++];
			else 
				cipher[i][j] = '*';
		}
	}

	//displays output

	for(j = 0; j < 3; j++)
		for(i = 0; i < row; i++)
			printf("%c",cipher[i][j]);		
}

void decrypt()
{
	//generates decrypted text in cipher[][]
	row = nrows();
	for(j = 0; j < 3; j++)
		for(i = 0; i < row; i++)
			cipher[i][j] = str[k++];
		
	//display output

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(cipher[i][j] != '*')
				printf("%c",cipher[i][j]);
		}
	}

}

int main()
{
	int choice;
	printf("Enter string");
	scanf("%s",str);
	printf("\nEnter choice \n 1 : Encrypt  2: Decrypt"); 
	scanf("%d",&choice);
	printf("\nOutput : ");
	if(choice == 1)
		encrypt();
	else
		decrypt();
	return 0;
}
	
