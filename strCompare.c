
#include<stdio.h>
#include<string.h>

int main(){
	
	//Create two strings to be compared
	char a[100], b[100];
	
	//Ask the user to enter the first string
	printf("Enter the first string: ");
	
	//Get the string and store it into a
	gets(a);
	
	//Ask the user to enter the second string
	printf("Enter the second string: ");
	
	//Get the string and store it into b
	gets(b);
	
	
	//Compare the strings
	if( strcmp(a,b) == 0 ){
		printf("The strings are equal. \n");
	}
	else{
		printf("The strings are NOT equal. \n");
	}
	
	
	return 0;
}
