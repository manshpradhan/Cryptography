//LAB_1
//WAP to generate the Ceaser ciper text of given plain text and als decrypt the generated ciper text.Also giv the user the facility to change 
//the value of key.

//TESTING DATA:
	//PLAIN_TEXT: MEET ME AFTER THE TOGA PARTY
	//CHIPERTEXT: PHHW PH DIWHU WKH WRID SDUWB(N=3) KEY

//ENCRYPTION:	e^k(x+k)(mode26)=y
//DECRYPTION:	d^k(e^k(x))=(y-k)(mod26)=x

#include<conio.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

char alpha[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int k=3;
int getpos(char ch)
{
	int i;
	int n=strlen(alpha);
	for(i=0;i<n;i++)
	{
		if(ch==alpha[i])
		return i ;
	}
}	
void encrypt(char ch)
{
	int pos =getpos(ch);
	char l= alpha[(pos+k)%26];
	printf("%c",l);
}
int main()
{
	char input[100];
	printf("\n Please Enter a string: ");
	gets(input);
	int i=0;
	int len = strlen(input);
	for(i=0;i<len;i++)
	{
		char ch = input[i];
		encrypt(ch);
	}
}

