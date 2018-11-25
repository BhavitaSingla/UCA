class Box
{
    double height;
    double width;
    double length;
    Box()
    {
        length = 0;
        width = 0;
        height = 0;
    }
    Box(double height, double width, double length)
    {
        this.length = length;
        this.width = width;
        this.height = height;
    }
    Box(double value)
    {
       length = value;
       width = value;
       height = value;
    }
    double volume()
    {
        return (height * width * length);
    }
    void display()
    {
        System.out.println( length + " " + width + " " + height );
    }
}
class Boxexample
{
    public static void main( String[] args )
    {
        Box b1 = new Box();
        b1.display();
        Box b2 = new Box(2.0);
        b2.display();
        Box b3 = new Box(2.0, 3.0, 4.0);
        double vol = b3.volume();
        System.out.println( vol );
    }
}
