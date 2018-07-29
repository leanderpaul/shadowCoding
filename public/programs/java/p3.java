import java.util.*;
class p3
{
	public static void main(String args[])
	{
		int a,b;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter first number: ");
		a=scan.nextInt();
		System.out.print("Enter last number: ");
		b=scan.nextInt();
		for(int i=a;i<=b;i++)
		{
			if(i%2!=0)
			 System.out.println(i);
		}

	}
}