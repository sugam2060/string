#include<stdio.h>
#include<string.h>
int main(){
	char string[] = "Hello world";
	int len = strlen(string);
	int ind = len - 1;
	
	printf("last char %c",string[ind]);
	
	return 0;
}
