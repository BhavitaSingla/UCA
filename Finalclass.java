class Finalclass
{
 /*   final int VAR_1;
    final int VAR_2 = 5;
    Finalclass()
    {
        VAR_1 = 3;
    }*/
    static final pi = 3.14;
    final StringBuilder sb = new StringBuilder();
    Finalclass()
    {
        sb.append("hi");
    }
    void vol()
    {
        
    }
    void method()
    {
        sb.append("3");
        StringBuilder s1;
        sb = s1;
    }
    public static void main(String[]args)
    {
        Finalclass f = new Finalclass();
//        System.out.println(f.VAR_2);
        System.out.println(sb);
    }
}
