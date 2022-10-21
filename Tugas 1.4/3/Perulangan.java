public class Perulangan {
    public static void main(String[] args) {
        int l = 0;

        for (int j = 0; j <= 10; j++) {
            for (int k = j; k <= l; k++) {
                System.out.print(Integer.toString(k) + ' ');
            }

            l += 2;
            System.out.print("\n");
        }
    }
}