//wap to checkif a number is porsitve and even using logical operators
import java.util.Scanner;
public class Logical {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            int number = sc.nextInt();

            if (number > 0 && number % 2 == 0) {
                System.out.println(number + " is a positive even number.");
            } else if (number > 0) {
                System.out.println(number + " is a positive odd number.");
            } else if (number < 0 && number % 2 == 0) {
                System.out.println(number + " is a negative even number.");
            } else if (number < 0) {
                System.out.println(number + " is a negative odd number.");
            } else {
                System.out.println("The number is zero, which is neither positive nor negative, and is considered even.");
            }
        }
    }
}