public class example
{
public static void main(String[] args)
{
if(args.length==0)
return;
for(int i=0;i<args.length;i++)
{
System.out.println(args[i]);
System.out.println(args[0]+args[i]);
}
int i=Integer.parseInt(args[0]);
int j=Integer.parseInt(args[1]);
System.out.println(i+j);
String str1="Hello java";
String str2=new String("Hello java");
System.out.println(str1);
System.out.println(str2);
}
}
