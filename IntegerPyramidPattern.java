// SKILLRACK ID => 9255

import java.util.Scanner;

public class IntegerPyramidPattern {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int rows = scanner.nextInt(), StopJLoop = rows;
        for(int i = 1 ; i <= rows ; i++, StopJLoop++){
            int increment = 1;
            for(int j = 1; j <= StopJLoop; j++){
                if(j <= (rows-i))
                    System.out.print("*" + " ");
                else
                    System.out.print(increment++ + " ");
            }
            System.out.println();
        }
        scanner.close();
    }   
}


// OUTPUT
// ROWS = 5

// * * * * 1
// * * * 1 2 3
// * * 1 2 3 4 5
// * 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

// OUTPUT
// ROWS = 7

// * * * * * * 1
// * * * * * 1 2 3
// * * * * 1 2 3 4 5
// * * * 1 2 3 4 5 6 7
// * * 1 2 3 4 5 6 7 8 9
// * 1 2 3 4 5 6 7 8 9 10 11
// 1 2 3 4 5 6 7 8 9 10 11 12 13
