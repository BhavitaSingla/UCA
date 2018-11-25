public class Example
{
public static void main(String[] args)
{
String str1="Hello java";
String str2=new String("Hello java");
String str3="Hello java";
String str4=new String("Hello java");

System.out.println(str1==str3);
System.out.println(str2.equals(str4));
System.out.println(str3==str4);
System.out.println(str3.equals(str4));

System.out.println("hello"+"java");
}
}
