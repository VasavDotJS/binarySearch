#include <stdio.h>
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
