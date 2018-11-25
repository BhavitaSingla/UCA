import java.util.ArrayList;
import java.util.Scanner;
class ArrayLists
{
    public static void main(String[] args)
    {
	ArrayList<Integer> arl = new ArrayList<Integer>();
	Scanner sc = new Scanner(System.in);	
	for(int i = 0; i < 10; i++)
	{
	    int input = sc.nextInt();
	    arl.add(input);
	}
	System.out.println(arl.size());
	System.out.println(arl);
	int num = sc.nextInt();
	System.out.println(arl.contains(num));
    }
}
