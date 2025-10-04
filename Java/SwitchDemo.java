import java.util.Scanner;

//if else if ladder
class SwitchDemo {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        int iStd = 0;

        System.out.println("Enter your std: ");
        iStd = sobj.nextInt();

        switch (iStd) {
            case 1:
                System.out.println("Exam at 9am");
                break;
            case 2:
                System.out.println("Exam at 10am");
                break;
            case 3:
                System.out.println("Exam at 11am");
                break;
            case 4:
                System.out.println("Exam at 12NOON");
                break;

            default:
                System.out.println("Enter vailide standard ..! ");
                break;
        }

    }
}

/*
Jump Table

Input  GoTo
   1   22
   2   26
   3   30
   4   34
other
 */

