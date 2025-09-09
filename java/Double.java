//wap to input a double value from user and use ++ and -- operators and show before and after values
import java.util.Scanner;
public class Double {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a double value: ");
            double value = sc.nextDouble();

            System.out.println("Original value: " + value);

            double incrementedValue = value;
            System.out.println("Value before increment: " + incrementedValue);
            incrementedValue++;
            System.out.println("Value after increment: " + incrementedValue);

            double decrementedValue = value;
            System.out.println("Value before decrement: " + decrementedValue);
            decrementedValue--;
            System.out.println("Value after decrement: " + decrementedValue);
        }
    }
}