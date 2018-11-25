class Outer
{
    int x = 2;
    static int y;
    static class Inner
    {
        static int z = 1;
        void display()
        {
            System.out.println(y);
            Outer o = new Outer();
            System.out.println(o.x);
        }
    }
    void print()
    {
        System.out.println(Inner.z);
    }
}
class StaticInner
{
    public static void main(String[] args)
    {
        Outer obj = new Outer();
        Outer.Inner in = new Outer.Inner();
        in.display();
        obj.print();
    }
}
