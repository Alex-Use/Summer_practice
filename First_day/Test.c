#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>



int ToMas(int* source, int size);
void TestToMas(int* source, int size);

int main(){
	int mas[1000];
	int size =1000;
	TestToMas(mas,size);
	return 0;
}



int ToMas(int* source, int size)
{
	double x,y;
	double z;
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
	z = sqrt(y / size) ;
	
	return z;
}

void TestToMas(int* source, int size)
{
	int i;
 
	for(i = 0;i< (size);i++)
	{
		
		source[i] = rand() %100 + 1;
	
	}	
	if (ToMas(source,size) >=0){
		printf("OK\n");
		printf("%d\n",ToMas(source,size));
		}
	else {
		printf("FALL");
	}
}
