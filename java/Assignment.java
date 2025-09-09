//wap to input float abd use assignment operators to update its value
import java.util.Scanner;
public class Assignment {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a float value: ");
            float value = sc.nextFloat();

            System.out.println("Original value: " + value);

            value += 5.5f;
            System.out.println("After += 5.5: " + value);

            value -= 2.0f;
            System.out.println("After -= 2.0: " + value);

            value *= 3.0f;
            System.out.println("After *= 3.0: " + value);

            value /= 4.0f;
            System.out.println("After /= 4.0: " + value);

            value %= 3.0f;
            System.out.println("After %= 3.0: " + value);
        }
    }
}