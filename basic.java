import java.util.Scanner;
// Other imports go here, Do NOT change the class name
class basic
{
  public static void main(String[] args)
  {
    // Write your code here
     Scanner sc = new Scanner(System.in);
    int cases= sc.nextInt();
    while(cases != 0)
    {
      int size = sc.nextInt();
      int[][] arr = new int[size][size];
      for(int i = 0; i < size; i++)
      {
        for(int j = 0; j < size; j++)
        {
          arr[i][j] = sc.nextInt();
        }
      }
     int length = size-1;
   
  for (int i = 0; i <= (length)/2; i++) {
      for (int j = i; j < length-i; j++) {
        
       //Coordinate 1
       int p1 = arr[i][j];
        
       //Coordinate 2
       int p2 = arr[j][length-i];
        
       //Coordinate 3
       int p3 = arr[length-i][length-j];
        
       //Coordinate 4
       int p4 = arr[length-j][i];
        
       //Swap values of 4 coordinates.
       arr[j][length-i] = p1;
       arr[length-i][length-j] = p2;
       arr[length-j][i] = p3;
       arr[i][j] = p4;
      }
  }
      for(int i = 0; i < size; i++)
      {
        for(int j = 0; j < size; j++)
        {
          if(j == size - 1)
	     System.out.println(arr[i][j]);
          else
          System.out.print(arr[i][j] + "_");
        }
        System.out.println();
      }
      System.out.println();
      cases--;
  }
}
}

