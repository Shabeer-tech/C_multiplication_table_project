#include<stdio.h>
int main (){
	int n,i;
	char choice;
	printf(" |-----------------------------|\n");
	printf(" |    MULTIPLICATION TABLE     |\n");
	printf(" |-----------------------------|\n");
	
	do {
	printf(" ➡️  enter the number :");
	scanf("%d" ,&n);
	for( i=1; i<=10;i++)
	{
		printf("  %d × %d = %d\n",n,i,n*i);
	}
		printf("-----------------------------------------\n");
		
	
	//ask again 
	printf("\n do you want to use again it?(y/n) : ");
	scanf(" %c",&choice);
	printf("\n");
} while (choice=='y' || choice =='Y');
printf("thank you & good bye ☺");
	
	return 0;
}

