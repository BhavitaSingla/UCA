/*class swap
{
    public static void main(String[] args){
    int num1 = 2;
    int num2 = 3;
//    swap(num1, num2);
    int[] a = new int[2];
    a[0] = num1;
    a[1] = num2;
    swap(a);
    System.out.println(a[0]+" "+a[1]);
}
static void swap(/*int num1, int num2 int a[])*/
//{
/*    int temp = num1;
       num1 = num2;
       num2 = temp;
       System.out.println(num1+" "+num2);*/
/*    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}
}*/
/*class swap
{
    public static void main(String[] args)
    {
        int num1 = 2;
        int num2 = 3;
        num1 = swap(num2, num2 = num1);
        System.out.println(num1+" "+num2);
    }
    static int swap(int num1, int num2)
    {
        return num1;
    }
}*/
class Swap2
{
    int a, b;
    Swap2(int a, int b)
    {
        this.a = a;
        this.b = b;
    }
    void change(Swap2 s1, Swap2 s2)
    {
        Swap2 temp;
        temp = s1;
        s1 = s2;
       s2 = temp;
    }
    public static void main(String[] args)
    {
        Swap2 s1 = new Swap2(2, 3);
        Swap2 s2 = new Swap2(10, 20);
        s1.change(s1, s2);
    }
}
