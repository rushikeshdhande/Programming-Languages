// User define exception

import java.util.*;

class AgeInvalideException extends Exception {
    public AgeInvalideException(String str) {
        super(str);
    }
}

class ThrowDemo {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your age");

        int iAge = sobj.nextInt();
        try {
            if (iAge < 18) {
                throw new AgeInvalideException("Your age is bellow 18");

            }
        } catch (AgeInvalideException aobj) {
            System.out.println(aobj);
        }

    }
}
