#include<stdio.h>
int x =20;
int num=20;
 int y;
 extern int z;
int main(){
	//same name concept
	int num=20;
	int num1;
	printf("same name %d\n",num);
	printf("Enter the two number");
	scanf("%d %d",&y,&num1);
	
	printf("Global number is %d\n local number is %d\n",y,num1);
	
	printf("outside %d",z);
	return 0;
}
int z=20;
