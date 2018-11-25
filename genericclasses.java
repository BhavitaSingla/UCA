class gen<t, v> {
    t val;
    v value;
    gen(t val, v value)
    {
        this.val = val;
        this.value = value;
    }
    t getData1()
    {
        return val;
    }
    v getData2()
    {
        return value;
    }
    void getData(t i, v j)
    {
        val = i;
        value = j;
    }
    void display()
    {
        System.out.println(val + " " + value);
    }
}
class genericclasses
{
    public static void main(String[] args)
    {
        gen<Integer, String>
            g = new gen<>(4, "H");

        gen<Integer, Boolean>
            g1 = new gen<>(4, true);

        gen<Integer, String>
            g3 = new gen<>(5, "Hello");
        g.display();
        g1.display();
        g3.display();
  
    }
}
