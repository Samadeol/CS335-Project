public class Sample3 {
    public static int sumTill(int n) {
        if (n == 1) return 1;
        else return n + sumTill(n - 1);
    }
    public static void main(String[] args) {
        int n = sumTill(5);
        //System.out.println(n);
    }
}