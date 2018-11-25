import java.util.Scanner;
class Scanexample
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string");
        String s = sc.nextLine();
        System.out.println("enter word");
        String s1 = sc.next();
        System.out.println("enter integer");
        int i = Integer.parseInt(sc.next());
        System.out.println("enter char");
        char c = sc.next().charAt(0);
        System.out.println("enter float");
        double d = sc.nextFloat();
        System.out.println(s+" "+s1+" "+i+" "+c+" "+d);
        sc.close();
    }
}
