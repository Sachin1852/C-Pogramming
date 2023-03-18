#include<stdio.h>
#include<stdbool.h>
void main(){
	
	//logical operator  && ||
bool a =true;
bool b=false;



printf("check a& b : %d\n",a&&b);
printf("check b&a : %d\n",b&&a);
printf("check a&a: %d\n",a&&a);
printf("check b&b: %d\n",b&&b);

printf("check a||b : %d\n",a||b);
printf("check b||a : %d\n",b||a);
printf("check a||a: %d\n",a||a);
printf("check b||b: %d\n",b||b);



getch();	
}
