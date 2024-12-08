import java.util.Scanner;

public class _11 {
	private static int OperationsBinarystring(String str) {
		int currNum = str.charAt(0) - '0';
		for (int i = 1; i < str.length(); i++) {
			if (str.charAt(i) == 'C') {
				currNum ^= (str.charAt(++i) - '0');
			} else if (str.charAt(i) == 'A') {
				currNum &= (str.charAt(++i) - '0');
			} else {
				currNum |= (str.charAt(++i) - '0');

			}
		}
		return currNum;
	}

	public static void main(String a[]) {
		Scanner io = new Scanner(System.in);
		System.out.println(OperationsBinarystring(io.next()));
		io.close();

	}
}