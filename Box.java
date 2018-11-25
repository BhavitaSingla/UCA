class Box
{
    int height;
    void method(Box b)
    {
        Box b1 = new Box();
        b = b1;
    }
    Box b = new Box();
    method(b);
}
