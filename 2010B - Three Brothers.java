import java.util.*;

public class test{

   public static void main(String[] args) {
       
    Scanner scanner = new Scanner(System.in);
    
    int x = scanner.nextInt();
    int y = scanner.nextInt();

    if(x == 1 & y == 2 || y == 1 & x == 2){
        System.out.println(x+y);
    }else if (x == 1 & y == 3 || y == 1 & x == 3) {
        System.out.println(Math.abs(x-y));
    }else if (x == 2 & y == 3 || y == 2 & x == 3) {
        System.out.println(Math.abs(x-y));
    }

   }

}
