
import java.util.Scanner;
public class main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        // int total = 400;
        // System.out.print("Enter first number:");
        // float a= sc.nextFloat();
        // System.out.print("Enter second number:");
        // float b= sc.nextFloat();
        // System.out.print("Enter third number:");
        // float c= sc.nextFloat();
        // System.out.print("Enter fourth number:");
        // float d= sc.nextFloat();
        // float sum= a+b+c+d;
        // System.out.println("percentage: ");
        // System.out.println((sum/total)*100);
        int n = sc.nextInt();

    //     for(int row = 1; row<=n; row++){
    //         for(int col=1; col<=n-row+1; col++){
    //                 if(row == 1 || row == n || col == 1 || col == n-row+1){
    //                     System.out.print("* ");
    //                 }
    //                 else{
    //                     System.out.print(" ");
    //                 }
                
    //         }
    //         System.out.println();

    // }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            System.out.print(" ");
        }
        for(int j=1; j<=n; j++){
            System.out.print("* ");
        }
        System.out.println( );
    }

}
}