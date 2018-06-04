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

		int n,i;

		while (in.hasNext())
		{
			n = in.nextInt();

			BigInteger a = BigInteger.valueOf(1),b=a,sum;

			if (n == 0)
				System.out.println ("The Fibonacci number for 0 is 0");
			else
			{
				for (i=1; i<=n; i++)
				{
					if (i == n)
						System.out.println ("The Fibonacci number for " +n+ " is " +a);

					sum = a.add(b);
					a = b;
					b = sum;
				}
			}
		}
	}
}