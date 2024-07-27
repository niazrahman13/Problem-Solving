import java.util.*;

public class test{

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        int store = scanner.nextInt();

        int array[] = new int[store];

        for(int i = 0; i < store; i++){
            array[i] = scanner.nextInt();
        }
        
        int total = 0;

        for(int i = 0;i < array.length; i++){
            if (array[i] == 1) {
                total +=1;
            }
        }
        if (total > 0) {
            System.out.println("Hard");
        }else{
            System.out.println("Easy");
        }
}
}
