import java.util.Scanner;

public class DailyChallenege1607 {
    public static void main(String[] args) {
        Scanner scannerObject = new Scanner(System.in);
        String string = scannerObject.next();
        int flag = 0;
        for(int i = 0 ; i < string.length() ; i++) {
            char currentCharacter = Character.toLowerCase(string.charAt(i));
            if(currentCharacter == 'a' || currentCharacter == 'e' || currentCharacter == 'i' || currentCharacter == 'u' || currentCharacter == 'o'){
                System.out.print((i+1) + " ");
                flag = 1;
            }
        }
        if(flag == 0)
            System.out.println("-1");
        scannerObject.close();
    }
}
