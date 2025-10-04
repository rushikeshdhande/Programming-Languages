class Base 
{


    public int i,j;

}

class Derived extends Base
{
    public int x;

}

class RMD_Demo1 {
    public static void main(String A[]  ) {
        Base bp1 = new Base(); // No Casting
        Derived dp1 = new Derived(); // No Casting
        Base bp2 = new Derived(); // Up Casting
        Derived dp2 = new Base(); // Down Casting // Error
    }
}
