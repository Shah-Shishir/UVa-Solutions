/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
	public static void main (String[] args)
	{
		Scanner in = new Scanner (System.in);

		BigInteger[] arr = new BigInteger[1001];
		int i;
		BigInteger zero = BigInteger.valueOf(0);
		BigInteger one = BigInteger.valueOf(1);
		BigInteger two = BigInteger.valueOf(2);

		arr[1] = arr[0] = zero;

		for (i=2; i<1001; i++)
		{
			if (i % 2 == 1)
				arr[i] = (arr[i-1].multiply(two)).subtract(one);
			else
				arr[i] = (arr[i-1].multiply(two)).add(one);
		}

		while (in.hasNext())
		{
			i = in.nextInt();
			System.out.println (arr[i]);
		}

		System.gc();
	}
}
