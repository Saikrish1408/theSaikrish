// SKILLRACK ID => 14395
// PROBLEM => integerDiagonalPatternPrinting => ZOHO
import java.util.Scanner;

public class IntegerDiagonalPatternZOHO {
    public static void main(String[] args) {
        // use the scanner object reference variable given below comment line, this had done for experimental
        // use this => Scanner scannerObject = new Scanner(System.in);
        // int rows = scannerObject.nextInt();
        int rows = new Scanner(System.in).nextInt(), decrement = rows, count = 1;  
        for(int i = 1 ;  i <= rows ; i++){
            int valueWillDecrement = i;
            decrement = rows;
            count = 1;
            for(int j = 1 ;  count <= rows ; j++, count++){
                if(j <= (rows-i))
                    System.out.print("*" + " ");
                else{
                    System.out.print((valueWillDecrement) + " ");
                    valueWillDecrement += (--decrement);
                }
            }
            System.out.println();

            // scannerObject.close();
        }
    }
}

// SAMPLE TESTCASE 1
// INPUT => 5
// OUTPUT
// * * * * 1
// * * * 2 6
// * * 3 7 10
// * 4 8 11 13
// 5 9 12 14 15 


// SAMPLE TESTCASE 2
// INPUT => 8
// OUTPUT
// * * * * * * * 1
// * * * * * * 2 9
// * * * * * 3 10 16
// * * * * 4 11 17 22
// * * * 5 12 18 23 27
// * * 6 13 19 24 28 31
// * 7 14 20 25 29 32 34
// 8 15 21 26 30 33 35 36
