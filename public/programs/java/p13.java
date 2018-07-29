import java.util.*;
class p13
{
	public static void main(String[] args) {
		int n,f1=0,f2=1;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter n value: ");
		n=scan.nextInt();
		System.out.print("The fibonacci series is ");
		for(int i=1;i<=n;i++)
		{
			System.out.print(f1+" ");
			int sum=f1+f2;
			f1=f2;
			f2=sum;
		}
	}
}