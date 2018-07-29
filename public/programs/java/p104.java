import java.util.*;
class p104
{
	public static void main(String[] args) {
		int n,max=0,t;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter n value: ");
		n=scan.nextInt();
		int[] a=new int[n];
		System.out.println("Enter array value:");
		for(int i=0;i<n;i++)
			a[i]=scan.nextInt();
		for(int i=0;i<n;i++)
			if(max<a[i])
				max=a[i];
		t=max;	
		for(int i=0;i<max;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[j]==t)
				{
					System.out.print("* ");
					a[j]--;
				}
				else
				{
					System.out.print("  ");
				}
			}
			t--;
			System.out.print("\n");
		}
	}
}