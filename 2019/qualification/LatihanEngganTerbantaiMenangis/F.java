import java.io.*;
import java.math.*;
import java.util.*;

public class F {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    int n = Integer.parseInt(scanner.next());
    int m = Integer.parseInt(scanner.next());

    String s = scanner.next();

    HashMap<String, BigInteger> dict = new HashMap<String, BigInteger>();
    for (int i = 65; i <= 90; i++) {
      dict.put(String.valueOf((char) i), new BigInteger("0"));
    }

    for (int i = 0; i < s.length(); i++) {
      String x = String.valueOf(s.charAt(i));
      dict.put(x, dict.get(x).add(new BigInteger("1")));
    }

    while (m > 0) {
      String t = scanner.next();
      String x = scanner.next();

      BigInteger p = dict.get(t);
      dict.put(t, new BigInteger("0"));

      if (p.compareTo(new BigInteger("0")) == 1) {
        for (int i = 0; i < x.length(); i++) {
          String c = String.valueOf(x.charAt(i));
          dict.put(c, dict.get(c).add(p));
        }
      }

      m -= 1;
    }

    BigInteger ans = new BigInteger("0");
    for (String i : dict.keySet()) {
      if (dict.get(i).compareTo(new BigInteger("0")) == 1) {
        ans = ans.add(dict.get(i));
      }
    }

    System.out.println(ans);
  }
}
