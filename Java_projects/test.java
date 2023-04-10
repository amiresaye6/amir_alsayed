public class test{
    public static void main(String [] args){
        int x = 0, y = 0;

        for (x =1; x < 4; x++){
            for (y = 1; y < 5; y++)
                if (x % 2 == 0)
                    System.out.print("x");
                else
                    System.out.print("y");
            System.out.println();
            
        }
        System.out.println("x = " + x + "y = " + y);
    }
}