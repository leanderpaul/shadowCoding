import java.util.*;
class p11
{
	public static void main(String[] args) {
		int a,rev=0,r,b;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a number: ");
		a=scan.nextInt();
		b=a;
		while(a>0)
		{
            r=a%10;
            rev=rev*10+r;
            a=a/10;
		}
		if(b==rev)
			System.out.print(b +" is a palindrome");
		else
			System.out.print(b +" is not a palindrome");

	}
}