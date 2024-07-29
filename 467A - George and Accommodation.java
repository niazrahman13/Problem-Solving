import java.util.*;

public class problemSolving{

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        int store = scanner.nextInt();
        
        int count = 0;

        for(int i = 0; i < store; i++){
        
            int x = scanner.nextInt();
            int y = scanner.nextInt();

            if(y - x >= 2){
                count+= 1;
            };
        };
        System.out.print(count);
} 
}
