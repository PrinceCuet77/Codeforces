import java.util.Scanner;
import java.util.Vector;

public class A556 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		char[] ch = input.next().toCharArray();
		int o = 0, z = 0; 
		for ( int i = 0; i < n; i++ ) {
			if ( ch[i] == '0' ) z++; 
			else o++;
		}
		
		System.out.println(Math.abs(z-o));
	}

}
