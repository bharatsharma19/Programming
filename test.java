import java.util.*;

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int lo = 1, hi = 1000000;
        int ans = -1;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            System.out.println(mid);
            System.out.flush();

            String s;
            s = sc.next();

            if (s.equals("<")) {
                hi = mid - 1;
            } else {
                ans = Math.max(ans, mid);
                lo = mid + 1;
            }

            System.out.print(" !");
            System.out.println(ans);
            System.out.flush();
        }
    }
}
