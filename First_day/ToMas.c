#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>



void ToMas(int* source, int size);


int main(){
	int i;
 int source[100];
 int size = 100;
	for(i = 0;i< (size);i++)
	{
		
		source[i] = rand() %100 + 1;
	
	}
	ToMas(source,size);	
	return 0;
}



void ToMas(int* source, int size)
{
	int x,y,z;
	int i;
	x = 0;
	y= 0;
	z = 0;
	//—читаем среднее арифметическое
	for (i = 0; i < (size); i++)
	{
		x =x + source[i];
		
		
	}
	x = x / size ;

	//—читаем сумму квадратов разности
	for (i = 0; i < (size); i++)
	{
		y += pow(source[i] - x , 2);
		
	}
	//—читаем отклонение
	z = sqrt(y / size);
	printf("%d",z);
}


	

