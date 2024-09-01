import java.util.*;

class test{

    public static void main(String[] args){
    
    Scanner scanner = new Scanner(System.in);

    int x = scanner.nextInt();
    int number = scanner.nextInt();

    int arr[] = new int[x];

    for(int i = 0 ; i < x; i++){
        arr[i] = scanner.nextInt();
    }

    int count = 0;

    for(int i = 0; i < arr.length; i++){
        if (arr[i] == number) {
            count+=1;
            break;
        }
    }
    if (count > 0) {
        System.out.print("YES");
    }else{
        System.out.print("NO");
    }

    }
}
