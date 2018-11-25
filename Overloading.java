class Overloading
  {
    static void demo()
    {
        System.out.println("1");
    }
    static void demo(int a)
    {
        System.out.println("2");
    }
    static void demo(int a, int b)
    {
        System.out.println("3");
    }
    static void demo(double a)
    {
        System.out.println("4");
    }
    static void demo(int ... v)
    {
        System.out.println("5");
    }
/*    static void demo(int i, int ...v)
    {
        System.out.println("6");
    }*/
    public static void main(String[] args)
    {
        demo();
        demo(3);
        demo(4, 'd');
        demo(2.03f);
        demo(3, 2, 4, 1);
    }
}
























