class Temp1
{
    public static void main(String[] args)
    {
        first:{
            int a = 10;
            System.out.println("First");
            second:{
                System.out.println("c");
                if(a == 10)
                break first;
            }
        System.out.println("done 2");
        }
        System.out.println("done1"); 
    }
}
