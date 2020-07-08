#include<stdio.h>

//Create a structure that consists cars for sale with feature of brand, model and price. 
//Receive some cars’ information and save them first in an array then a text file neatly. 

struct car{
	char brand[50];
	char model[50];
	char price[50];
};

int main(){
	
	FILE *f=fopen("cars.txt","w");
	struct car c;
	printf("Enter brand of car:");
	scanf("%s",&c.brand);
	printf("Enter model of car:");
	scanf("%s",&c.model);
	printf("Enter price of car:");
	scanf("%s",&c.price);
	
	
	fprintf(f,"BRAND:%s\nMODEL:%s\nPRICE%s",c.brand,c.model,c.price);
	
	fclose(f);
	
	return 0;
}
