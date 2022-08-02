class tophan{
int a,b;
tophan()
{
a=100;
b=20;
}
tophan(int x)
{
a=x;
b=x+x;
}
tophan(int x,int y)
{
a=y;
b=x*y;
}
tophan(int x,int y,int z)
{
a=z;
b=x*y*z;
}
void show()
{
System.out.println(a);
System.out.println(b);

}
}
class ajit

{
public static void main(String args[])
{
tophan ob=new tophan();
ob.show();
tophan ob1=new tophan(5);
ob1.show();
tophan ob2=new tophan(6,7);
ob2.show();
tophan ob3=new tophan(6,7,8);
ob3.show();


}
}