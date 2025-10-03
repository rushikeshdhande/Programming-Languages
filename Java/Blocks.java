class Demo {
    public int i; // instance variable
    static public int j; // class Variable

    static {
        j = 21;
        System.out.println("Inside Static Block");
    }

    public Demo() {
        System.out.println("Inside Constructor");
        this.i = 11;

    }

}

class Blocks {
    public static void main(String A[]) {
            System.out.println("Inside Main ");
            Demo dobj1= new Demo();
            Demo dobj2= new Demo();
            Demo dobj3= new Demo();
    }
}
