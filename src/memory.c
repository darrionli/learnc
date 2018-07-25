#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char name[100];
	char *desc;

	strcpy(name, "zhangsan");

	desc = malloc(200 * sizeof(char));
	if(desc == NULL){
		fprintf(stderr, "Error");
	}else{
		strcpy(desc, "Zara ali a DPS student in class 10th");
	}

	printf("name = %s\n", name);
	printf("desc = %s\n", desc);
}
