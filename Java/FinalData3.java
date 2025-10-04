class Demo {
    public int i = 21; 
    final public int j = 21;

     
    public Demo() {
        this.i = 11;
        // this.j = 21; // final   initialization constructor  
    }
}

class FinalData1 {
    public static void main(String A[]) {
        Demo dobj = new Demo();
        System.out.println(dobj.i); // 11
        System.out.println(dobj.j); // 21

        dobj.i++;   
        // dobj.j++; //   error  
    }
}
