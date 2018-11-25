class Vars
{
    void test(int ...v)
    {
        System.out.println(v.length);
    }
    for(int i : v)
    System.out.println(i);
}
class Varsexample
{
    public static void main(String[] args)
    { 
        Vars vr = new Vars();
        vr.test();
        vr.test(1);
        vr.test(2, 3, 4, 5);
        vr.test new int[]={1, 2, 3, 4};
    }
}
