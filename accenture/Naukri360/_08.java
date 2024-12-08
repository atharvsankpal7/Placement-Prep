
import java.util.Scanner;

public class _08 {
   static int operationchoices(int var0, int var1, int var2) {
      switch(var2) {
      case 1:
         return var0 + var1;
      case 2:
         return var0 - var1;
      case 3:
         return var0 * var1;
      case 4:
         return var0 / var1;
      default:
         return -1;
      }
   }

   public static void main(String[] var0) {
      Scanner var1 = new Scanner(System.in);
      System.out.println(operationchoices(var1.nextInt(), var1.nextInt(), var1.nextInt()));
      var1.close();
   }
}
