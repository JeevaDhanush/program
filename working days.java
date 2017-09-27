import java.util.*;
public class days 
{
    public static void main(String args[])
    {
        String me;
        Scanner ss = new Scanner(System.in);
        me = ss.next();
        if (me.equals("sunday")||me.equals("SUNDAY"))
        {
            System.out.println("FALSE");
        }
        else
        {
            System.out.println("TRUE");
        }
    }
}
