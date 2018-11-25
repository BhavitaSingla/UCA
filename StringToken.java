import java.util.StringTokenizer;
class StringToken
{
    public static void main(String[] args)
    {
        int count = 0;
        String str = "MOM AND DAD ARE MY BEST FRIENDS";
        StringTokenizer st = new StringTokenizer(str);
        while(st.hasMoreTokens())
        {
            String str1 = st.nextToken();
//            System.out.println(str1);
            StringBuilder sb = new StringBuilder(str1);
//            System.out.println(str1 + " " + sb.reverse());
//            String str2 = sb.reverse(str1);
            if(str1.equals(sb.reverse().toString()))
                count++;
        }
        System.out.println(count);
    }
}
