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
int binSearch(int array[],int ar_lmt,int searchData)
{
	int low=0,high=ar_lmt-1,mid=(low+high)/2;
	while(array[mid]!=searchData)
	{
		if(searchData>array[mid])
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else if(searchData<array[mid])
		{
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	return mid;
}
int main()
{
	int inpArray[100],limit,i,bSearch,searchElm;
	printf("Enter the Number of Elements in the Array: ");
	scanf("%d",&limit);
	printf("Enter the Elements of the Array: \n");
	for(i=0;i<limit;i++)
	{
		printf("Enter the Element #%d: ",i);
		scanf("%d",&inpArray[i]);
	}
	printf("\nEnter the Element You Want To Search For: ");
	scanf("%d",&searchElm);
	bubbleSort(inpArray,limit);
	printf("\nThe Sorted Array: [");
	int commaCount=0;
	for(i=0;i<limit;i++)
	{
		printf("%d",inpArray[i]);
		commaCount++;
		if(commaCount!=limit)
			printf(",");	
	}
	printf("]\n");
	bSearch=binSearch(inpArray,limit,searchElm);
	if(bSearch>-1)
		printf("The Element %d is at the index %d of the array!\n ",searchElm,bSearch);
	else
		printf("Element Was Not Found in Array!");
	return 0;
}
