interface A {
    int no = 11;

    void fun(); // this is function

    default void gun() // Concrite method inite create in body 
    {
        System.out.println("inside gun");
    }
}

class Demo implements A // Single lavel
{
    public void fun() {
        System.out.println("Inside fun ");  
    }
}

class InterfaceDemo8 {
    public static void main(String A[]) {
        Demo dobj = new Demo();
        dobj.fun();
        dobj.gun();
    }
}