import java.util.*;
class p9
{
	public static void main(String args[])
	{
		int a,count=0;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a number: ");
		a=scan.nextInt();
		for(int i=2;i<=a/2;i++)
		{
			if(a%i==0)
			{
				System.out.println(a+" is not a prime number");
				count=1;
				break;
			}

		}
		if(count==0)
		{
			System.out.println(a+" is a prime number");
		}
    }

}