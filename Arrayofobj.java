class Arrayofobj
{
    int rollno;
    Arrayofobj(int a)
    {
        rollno = a;
    }
    
    public static void main(String[] args)
    {
        Arrayofobj s1 = new Arrayofobj(1);
        Arrayofobj[] ar = new Arrayofobj[2];
        ar[0] = s1;
        ar[1] = new Arrayofobj(5);
        for(int i = 0; i < ar.length; i++)
        {
            System.out.println(ar[i].rollno);
    //        ar[i].display();
        }
    }
}
