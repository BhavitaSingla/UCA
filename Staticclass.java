class Static1
{
    static int count;
    int x;
    static void method()
    {
        count++;
//        x = 1;
  //      System.out.println(x);
        Static1 s1 = new Static1();
        s1.x++;
        s1.method1();
    }
    void method1()
    {
        System.out.println(count);
    }
}
class Staticclass
{
    public static void main(String[]args)
    {
        System.out.println(Static1.count);
        Static1.method();
        System.out.println(Static1.count);
        Static1 s = new Static1();
        s.method();
    }
}
