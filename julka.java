import java.util.Scanner;
import java.math.BigInteger;
class Julka {

	static void findXY(BigInteger total, BigInteger diff) {
		BigInteger y, x;
		y = total.add(diff);
		y = y.divide(BigInteger.valueOf(2));
		x = total.subtract(y);
		System.out.println(y);
		System.out.println(x);
	}

	public static void main(String args[]) {
		BigInteger total, diff, x, y;
		Scanner sc = new Scanner(System.in);
		for(int i = 0; i < 10; i++) {
			total = sc.nextBigInteger();
			diff = sc.nextBigInteger();
			findXY(total, diff);
		}
	}
	
}


