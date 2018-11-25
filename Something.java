import java.util.Arrays;
import java.lang.Math;
class Something
{
    public static void main(String[] args)
    {
        int[] arr = {1, 3, 2, 4, 5};
        System.out.println(arr.length);
	Arrays.sort(arr, 1, 3);
	for(int i = 0; i < 5; i++)
	System.out.println(arr[i]);
	int[] arr1 = {9, 8, 7, 6, 5};
	Arrays.sort(arr);
	for(int i = 0; i < 5; i++)
	{
	    System.out.println(arr[i]);
	}
	System.out.println(Arrays.binarySearch(arr, 3));
	System.out.println(Math.abs(5.43));
	
    }
}
