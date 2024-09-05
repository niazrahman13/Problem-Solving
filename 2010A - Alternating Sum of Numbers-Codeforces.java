import java.util.*;

public class test{

    public static void main(String[] args){
    
    Scanner scanner = new Scanner(System.in);

    int test = scanner.nextInt();
    int total = 0;

    for(int i = 0 ; i < test; i++){
    
        int temp = scanner.nextInt();

        for(int j = 0; j < temp; j++){
            int sum = scanner.nextInt();

            if(j % 2 == 0){
                total = total + sum;
            }else{
                total = total - sum;
            }

        }
        System.out.println(total);
        total = 0;

    }

    }
}
