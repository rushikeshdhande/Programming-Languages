class Demo {
    public int i = 21; 
    final public int j = 21; 
 
}

class FinalData1 {
    public static void main(String A[]) {
        Demo dobj = new Demo();
        System.out.println(dobj.i); // 11
        System.out.println(dobj.j); // 21

        dobj.i++;    
        // dobj.j++; // ❌ error 
    }
}
