#include <stdio.h>
void bubbleSort(int array[],int array_lmt)
{
	int i,j,temp; 
	for(i=0;i<array_lmt;i++)
	{
		for(j=0;j<array_lmt;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}
