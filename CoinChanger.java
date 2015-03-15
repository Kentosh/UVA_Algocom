import java.util.Scanner;


public class CoinChanger {

	public static long[] numWays= new long[8000];
	public static final int[] coins= {1,5,10,25,50};

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		numWays[0] = 1;
		for(int i = 0; i < 5; i++){
			for(int j = 1; j < numWays.length - 1; j++) {
				if(j >= coins[i]) {
					numWays[j] += numWays[j - coins[i]];
				}
			}
		}
		
		int n;
		while(sc.hasNext()) {
			n = sc.nextInt();
			if(n >= 0)
				System.out.println(numWays[n]);
			else
				System.out.println(0);
		}
		
		sc.close();
	}
}
