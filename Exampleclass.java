class Student
{
    String name;
    int age;
    Student()
    {
        name = "no_name";
        age = -1;
        System.out.println("const");
    }
    Student(String name, int age)
    {
        this.name = name;
        this.age= age;
        System.out.println(name+" "+ age);
    }
    /*private String name;
    String name;
    int age;*/
    void display()
    {
        System.out.println( name + " " + age );
    }
/*    void setValues(String str,int a)
    {
        name = str;
        age = a;
    }
    void changeValues(int a)
    {
        age = a;
    }
    int printAge()
    {
        return age;
    }*/
}
class Exampleclass
{
    public static void main( String[] args )
    {
        Student s1 = new Student();  //s1->reference variable dynamically allocated to heap memory
        /*s1.display();
        Student s2 = new Student();
        s2.name = "Student1";
        s2.age = 21;
        s2.display();*/
/*        s1.setValues("hello", 21);
        s1.display();
        s1.changeValues(4);
        int m = s1.printAge();*/
        Student s2= new Student("hello", 21);
        s2.display();
    }
}
