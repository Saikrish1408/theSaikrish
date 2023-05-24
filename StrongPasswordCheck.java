import java.util.Scanner;


public class StrongPassWordCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String password = sc.next();
        int flag = 0, specialCharacterCheck=0,lengthCheck=0,lowerCaseCheck=0,numberCheck=0,upperCaseCheck=0;
        for(int i = 0 ; i < password.length() ; i++)
        {
            if(password.charAt(i) == '#' || password.charAt(i) == '$' || password.charAt(i) == '!' || password.charAt(i) == '_' || password.charAt(i) == '@')
                specialCharacterCheck = 1;
            if(password.charAt(i) >= '0' && password.charAt(i) <= '9')
                numberCheck++;
            if(password.length() >= 8 && password.length() <= 25)
                lengthCheck = 1;
            if(password.charAt(i) >= 'A' && password.charAt(i) <= 'Z')
                upperCaseCheck = 1;
            if(password.charAt(i) >= 'a' && password.charAt(i) <= 'z')
                lowerCaseCheck = 1;
        }
        if(specialCharacterCheck == 1 && numberCheck >= 2 && lengthCheck == 1 && upperCaseCheck == 1 && lowerCaseCheck == 1)
        System.out.println("VALID");
        else
        System.out.println("INVALID");
    }    
}
