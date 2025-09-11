//wap to print 1 to 10 using for loop
public class Count {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            if (i < 10) {
                System.out.print(i + ","+" ");
            }
            else {
                System.out.print(i);
            }
        }
    }
}