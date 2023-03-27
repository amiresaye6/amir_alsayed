import java.util.Scanner;
public class plandrome {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int num = 0;
        System.out.println("Enter the number of strings you want to chick :");
        num = in.nextInt();
        String [] array = new String [num];
        for (int i = 0; i < num; i++){
            array[i] = in.next();
        }
        for (int i = 0; i < num; i++){
            if (checkPlaindrome(array[i]) == true){
                System.out.println("s"+(i+1)+" "+ array[i]+ " -> palindrome");
            }
            else{
                System.out.println("s"+(i+1)+" " + array[i]+ " -> not palindrome");
            }
        }
    }
    public static boolean [] get (String [] arr){
        boolean [] res = new boolean [arr.length];
        for (int i = 0; i < arr.length; i++){
            if (checkPlaindrome(arr[i])){
                res[i] = true; 
            }
        }
        return res;
    }
    public static boolean checkPlaindrome (String str){
        for(int i = 0; i< str.length()/2; i++){
            if (str.charAt(i) != str.charAt(str.length()-i-1)){
                return false;
            }
        }
        return true;
    }
}
