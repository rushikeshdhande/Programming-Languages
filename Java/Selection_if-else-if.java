import java.util.Scanner;
//if else if ladder
class SelectionDemo2 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        int iStd = 0;

        System.out.println("Enter your std: ");
        iStd = sobj.nextInt();

        if (iStd == 1) {
            System.out.println("Exam at 9am");
        }
       
         else if(iStd == 2)
         {
             System.out.println("Exam at 10am");
            }
        
         else if(iStd == 3)
         {
             System.out.println("Exam at 11am");
            }
        
        else if(iStd == 4)
        {
            System.out.println("Exam at 12am");
        }
        else {
            System.out.println("Invalide std !");
        }
    
    }
}

