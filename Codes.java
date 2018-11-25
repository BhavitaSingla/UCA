class Codes
{
    static int one;
    private int count;
    Codes()
    {
        System.out.println("one");
    }
    {
        count = 0;
        System.out.println("two");
    }
    static{
        System.out.println("three");
    } 
    public static void main(String[] args)
    {
        Codes c = new Codes();
    }
}
