
public class Multiplication {

    public static void main(String[] args) {
        int n = 10;
        if (n == 0) {
            System.out.println("Not valid for multiplication");

        } else {

            for (int i = 1; i <= 10; i++) {
                System.out.println(n + " x " + i + " = " + (n * i));
            }
        }
    }
}
