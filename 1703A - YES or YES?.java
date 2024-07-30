import java.util.*;

public class problemSolving{

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        int temp = scanner.nextInt();

        int count = 0;
        
        for(int i = 0 ; i < temp; i++){
            String store = scanner.next();

            store = store.toUpperCase();

            if (store.contains("YES")) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }

} 
}
