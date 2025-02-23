void selectionSort(int array[],int array_limit)
{
    for (int i = 0; i < array_limit - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < array_limit; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}
