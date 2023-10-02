import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class LCDC021023 {
    public static void main(String[] args) throws IOException{
        BufferedReader inputObject = new BufferedReader(new InputStreamReader(System.in));
        String string = inputObject.readLine();
        String[] reversedString = string.split(" ");
        StringBuffer strBuff = new StringBuffer();
        int count = 1;
        for(String stringIterator : reversedString) {
            if(count <= reversedString.length) {
                for(int i = (stringIterator.length()-1) ; i > -1 ; i--) {
                    strBuff.append(stringIterator.charAt(i));
                }
                if(count <= (reversedString.length - 1))    
                    strBuff.append(" ");
            }
            count++;
        }
        System.out.println(strBuff);
    }    
}
