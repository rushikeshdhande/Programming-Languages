class Demo {
    public int i;
    static public int j = 21;

    public Demo() {
        this.i = 11;

    }

    public void fun ()  //Instance method
    {
        System.out.println("Fun i :"+this.i);
        System.out.println("Fun j :"+Demo.j);
    }
    public static void gun ()  //Class method
    {
        // System.out.println("Gun i :"+this.i);  Not Allowed
        System.out.println("Gun j :"+Demo.j);
    }
}

class StaticMethod {
    public static void main(String A[]) 
    {
        Demo.gun(); 
        System.out.println(Demo.j);
        Demo dobj = new Demo();
        System.out.println(dobj.i);
        dobj.fun();
    }
}
