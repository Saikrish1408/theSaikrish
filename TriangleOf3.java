public class Main
{
	public static void main(String[] args) {
        int n = 5, star = 1;
        for(int i = 0 ; i < n ; i++) {
            int space_count = 1, star_count = 1;
            for(int j = 0 ; j < 5 ; j++) {
                while(space_count < (n - i)) {
                    System.out.print("  ");
                    space_count++;
                }
                while(star_count <= star) {
                    System.out.print("*" + " ");
                    star_count++;
                }
            }
            System.out.println();
            star += 2;
        }
	}
}


















// int n = 4;
//         for(int i = 1 ; i <= n ; i++) {
//             int con  = (n - i - 1), space_count = 0, star_count = 1;
//             for(int j = 1 ;  ; ) {
//                 while(space_count <= con) {
//                     System.out.print(" ");
//                     space_count++;
//                 }
//                 while(star_count <= i) {
//                     System.out.print("*" + " ");
//                     star_count++;
//                 }
//                 break;
//             }
//             System.out.println();
//         }
