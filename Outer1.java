class O;;;;;;luter
{
/*    static int x1 = 3;
    private int x2;
    int x3;
    class Inner
    {
        int y;
        void display()
        {
            System.out.println(x1+" "+x2+" "+x3+" "+y);
        }
    }
    void print()
    {
        Inner i = new Inner();
//        i.display();
        System.out.println(x1);
        i.display();
    }
}*/
    int x = 2;
    class Inner
    {
        int x = 8;
        void display()
        {
            System.out.println(x+" "+this.x+" "+Outer.this.x);
        }
    }
    void print()
    {
        System.out.println(x);
        Inner i = new Inner();
        System.out.println(i.x);
    }
}
class Outer1
{
    public static void main(String[] args)
    {
        Outer obj = new Outer();
//        System.out.println(obj.x1+" "+obj.x3);
        Outer.Inner in = new Outer().new Inner();
        in.display();
        obj.print();
    }
}
