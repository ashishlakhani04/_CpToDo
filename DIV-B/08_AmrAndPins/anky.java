package contests.gym._12Sep;
/**
 * @author avcbcoder
 * last modified @12-Sep-2018 @11:23:20 PM
 * ACM ICPC (practice) - contests.gym._12Sep
 * TODO
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Scanner;

public class A {
	public static void main(String[] args) throws Exception {
		int t = new Integer(br.readLine());
		while (t-- > 0) {
			dis = 0;
			solve();
		}
	}

	public static int dis = 0;

	// *SOLUTION*
	public static void solve() throws Exception {
		String[] ip = br.readLine().split(" ");
		int n = new Integer(ip[0]), q = new Integer(ip[1]);
		int[] arr = new int[n];
		HashMap<Integer, Integer> hm = new HashMap<>();
		ip = br.readLine().split(" ");
		for (int i = 0; i < arr.length; i++) {
			arr[i] = new Integer(ip[i]);
			put(hm, arr[i]);
		}

		while (q-- > 0) {
			ip = br.readLine().split(" ");
			int t = new Integer(ip[0]);
			if (t == 1) {
				int p = new Integer(ip[1]) - 1;
				int v = new Integer(ip[2]);
				rem(hm, arr[p]);
				arr[p] = v;
				put(hm, arr[p]);
			} else {
				System.out.println(dis);
			}
		}
	}

	private static void put(HashMap<Integer, Integer> hm, int x) {
		if (x == 0)
			return;
		if (!hm.containsKey(x)) {
			hm.put(x, 0);
			dis++;
		}
		hm.put(x, hm.get(x) + 1);
	}

	private static void rem(HashMap<Integer, Integer> hm, int x) {
		if (x == 0)
			return;
		int f = hm.get(x) - 1;
		if (f == 0) {
			hm.remove(x);
			dis--;
		} else
			hm.put(x, f);
	}

	public static InputStreamReader r = new InputStreamReader(System.in);

	public static BufferedReader br = new BufferedReader(r);

	public static Scanner sc = new Scanner(System.in);
}