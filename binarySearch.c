#include <stdio.h>
void selectionSort(int array[],int array_limit)
{
    for (int i=0;i<array_limit-1;i++) {
        int minIndex=i;
        for (int j=i+1;j<array_limit;j++) {
            if (array[j]<array[minIndex]) {
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int temp=array[i];
            array[i]=array[minIndex];
            array[minIndex]=temp;
        }
    }
}
int binarySearch(int array[],int ar_lmt,int data)
{
	int low=0,high=ar_lmt-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(data==array[mid])
			return mid;
		else if(data>array[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}
int main()
{
	int inpArray[200],i,varBin,arraySize,searchData;
	printf("Enter the Size of the Array: ");
	scanf("%d",&arraySize);
	printf("Enter the Elements of the Array: \n");
	for(i=0;i<arraySize;i++)
	{
		printf("Enter Element #%d: ",i);
		scanf("%d",&inpArray[i]);
	}
	printf("Enter the Element You Want to Search for in the Array: ");
	scanf("%d",&searchData);
	selectionSort(inpArray,arraySize);
	int commaCounter=0;
	printf("The Sorted Array: [");
	for(i=0;i<arraySize;i++)
        {
                printf("%d",inpArray[i]);
		commaCounter++;
		if(commaCounter!=arraySize)
			printf(",");
        }
	printf("]\n");
	varBin=binarySearch(inpArray,arraySize,searchData);
	if(varBin!=-1)
		printf("The Element %d was found in the %d index of the array!",searchData,varBin);
	else
		printf("Element %d Was Not Found in the Array!",searchData);
	return 0;
}
