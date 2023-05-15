import java.util.Scanner;
import java.util.Stack;
// import java.util.ArrayList;

public class StoryBookStack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack<String> stack = new Stack<String>();
        boolean bool = true;
        while(bool)
        {
            int integer = sc.nextInt();
            if(integer == 1){
                String string = sc.nextLine().trim();
                stack.push(string);
            }
            else if(integer == 2 && (!stack.isEmpty())){
                System.out.println(stack.peek());
            }
            else if(integer == -1 && (!stack.isEmpty())){
                stack.pop();
            }
            else if(integer == 0)
                bool = false;
        }        
    }    
}
