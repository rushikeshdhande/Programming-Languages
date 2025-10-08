class Hello {
    public int i;

    public Hello(int no) {
        System.out.println("Inside Hello constructor");
        this.i = no + 1;
    }
    public void Display() {
        System.out.println(" inside Hellow Display ");
    }
}

class Demo extends Hello {
    public int i;

    public Demo(int a) {
        super(a);           // First use
        System.out.println("Inside Deme Constructor");
        this.i = a;
    }

    public void Display() {
        int i = 0;
        System.out.println("Inside Display" + i);
        System.out.println("Inside Display" + this.i);
        System.out.println("Inside Display" + super.i);   // Second use
        super.Display();  // Third Use
    }
}

class SuperDemo {
    public static void main(String[] args) {
        Demo dobj = new Demo(51);
        dobj.Display();
    }
}
