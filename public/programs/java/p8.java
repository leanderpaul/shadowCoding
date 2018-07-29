import java.util.*;
class p8
{
	public static void main(String args[])
	{
		int a,count;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a number: ");
		a=scan.nextInt();
		for(int i=1;i<=a;i++)
		{
			count=0;
			for(int j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					count++;
					break;
				}
			}
			if(count==0)
			{
              
              System.out.println(i);
            }
		}
	}


}