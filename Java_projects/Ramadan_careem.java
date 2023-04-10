import java.util.Random;

public class Ramadan_careem{
    public static void main(String [] args)
    {
            // draw_fanoos(11, '*');
            draw_fanoos(11);
    }
    
    public static void draw_fanoos(int length, char c)
    {
        int i, j, s;
        
        for (i = 0; i < length-1; i+=2)
        {
            for (s = 0; s < ((length - i) / 2)+9; s++)
            {
                System.out.print(' ');
            }
            for (j = 0; j <= i; j++)
            {
                System.out.print(c);
            }
            System.out.println();
        }
        for (i = 0; i < length-2; i+=2)
        {
            for (s = 0; s < (i/2)+9; s++)
            {
                System.out.print(' ');
            }
            for (j = 0; j < (length - i); j++)
            {
                System.out.print(c);
            }
            System.out.println();
        }
        for (i = 0; i < length-5; i+=2)
        {
            for (s = 0; s < ((length - i) / 2)+9; s++)
            {
                System.out.print(' ');
            }
            for (j = 0; j <= i; j++)
            {
                System.out.print(c);
            }
            System.out.println();
        }
        System.out.println("       Ramadan Kareem  :)");
    }
    public static void draw_fanoos(int length)//overloading
    {
        char c, ch = '0';
        int i, j, s;
        Random r = new Random();
        for (i = 0; i < length-1; i+=2)
        {
            for (s = 0; s < ((length - i) / 2)+9; s++)
            {
                System.out.print(' ');
            }
            for (j = 0; j <= i; j++)
            {
                c = (char)(r.nextInt(26) + ch);
                System.out.print(c);
            }
            System.out.println();
        }
        for (i = 0; i < length-2; i+=2)
        {
            for (s = 0; s < (i/2)+9; s++)
            {
                System.out.print(' ');
            }
            for (j = 0; j < (length - i); j++)
            {
                c = (char)(r.nextInt(26) + ch);
                System.out.print(c);
            }
            System.out.println();
        }
        for (i = 0; i < length-5; i+=2)
        {
            for (s = 0; s < ((length - i) / 2)+9; s++)
            {
                System.out.print(' ');
            }
            for (j = 0; j <= i; j++)
            {
                c = (char)(r.nextInt(26) + ch);
                System.out.print(c);
            }
            System.out.println();
        }
        System.out.println("       Ramadan Kareem  :)");
    }
}
