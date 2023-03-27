import java.util.Scanner;

/*
 * this is an oop example
 * this project is to try classes
 * we will try it by making a class to calculate the area of a circule;
 */
public class clases {
    public static void main(String[] args){
            Scanner in = new Scanner(System.in);
            System.out.println("hellow, world");
            System.out.println("enter the radius :");
            // declaration and creation at the same time.
            Circule c = new Circule(in.nextDouble());
            System.out.printf("%4.2f\n", c.area());

    }
}

class Circule {
    // this part is for declaration of variables
    private double radius;
    // static variable is hsared between all opjects
    //we can access it using the class name or the opject name
    static int counter = 0;
    
    // this is a defalt constructor
    public Circule(){
        radius = 1;
        counter++;
    }
    // this is an insturctor
    // instructors are used to initialise a value
    public Circule(double r){
        // lets make sure that the radius is positife
        if (r > 0){
            radius = r;
        }
        else {
            radius = 1;
        }
        counter++;
    }

    // this public method is to get the radius
    public void setRadius (double r){
        // make sure not to accept forbedden input
            if (r > 0){
                radius = r;
            }
            else {
                radius = 1;
            }
    }
    // this methos is to show the radius
    public double getRadius (){
        return radius;
    }
    // this method is to calculate the area
    public double area (){
        double value;
        value = radius * radius * Math.PI;
        return  value;
    }
}
