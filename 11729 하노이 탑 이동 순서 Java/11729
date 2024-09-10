import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println((int)Math.pow(2, n)-1);
		
		StringBuilder sb = new StringBuilder("");
		hanoi(n, 1, 2, 3, sb);
		System.out.println(sb);
	}
	
	static void hanoi(int n, int from, int tmp, int to, StringBuilder s) {
		if (n == 1) {
			s.append(from + " " + to + "\n");
			return;
		}
		
		hanoi(n-1, from, to, tmp, s);
		s.append(from + " " + to + "\n");
		hanoi(n-1, tmp, from, to, s);
	}
}
