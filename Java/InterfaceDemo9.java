interface A {
    int no = 11;

    void fun(); // this is function

    private void Display() {
        System.out.println("Inside private display");
    }

    default void gun() // Concrite method default inite create in body
    {
        System.out.println("inside gun");
        Display();
    }

}

class Demo implements A // Single lavel
{
    public void fun() {
        System.out.println("Inside fun ");
    }
}

class InterfaceDemo9 {
    public static void main(String A[]) {
        Demo dobj = new Demo();
        dobj.fun();
        dobj.gun();
        // dobj.Display(); Error
    }
}