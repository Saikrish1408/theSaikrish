import java.util.Scanner;

public class Rotate90DegreeClockwise {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        int arr[][] = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        for(int i = 0 ; i < c ; i++) // column
        {
            int count = 1;
            for(int j = (r-1) ; count <= r ; j--)  // row
            {
                System.out.printf("%d ",arr[j][i]);
                count++;
            }
            System.out.println();
        }
    }    
}
