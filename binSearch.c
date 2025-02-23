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
