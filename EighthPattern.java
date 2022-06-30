public class EighthPattern
{
public static void main(String[] args)
{

int myrows = 4;
System.out.println("\nThe star pattern is... ");
for (int m = 2; m <= myrows; m++)
{
for (int n = m; n >= 1; n--)
{
System.out.print("*");
}
System.out.println(" ");
}

for (int m = myrows; m >= 1; m--)
{
for (int n = m; n >= 1; n--)
{
System.out.print("*");
}
System.out.println(" ");

}


}
}