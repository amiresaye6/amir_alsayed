/*
 * write a program that takes a 2D matrix from the user with unknown dimentions,
 * and then compute which column has the largest sum of elements and display the matrix
 * and the largest column and its sum, the program must have the following methos
 * #1 getMatrix
 * #2 displayMatrix
 * #3 getLargetsColumn
 * you must ask the user if he wants to exit before ending the program otherwise you should repeat the process
 */

import java.util.Scanner;
public class project1 {
    public static void main(String [] args){
        int row, col, cond = 1;
        Scanner in = new Scanner(System.in);
        do{
            System.out.println("enter the rows");
            row = in.nextInt();
            System.out.println("enter teh coulmns");
            col = in.nextInt();
            double [][] mat = getMatrix(row, col);
            System.out.println("the matrix is :");
            displayMatrix(mat);
            System.out.println("the max col is :");
            double [] maxcol =  getLargetsColumn(mat);
            for (int i = 0; i < maxcol.length; i++){
                System.out.println(maxcol[i]);
            }
            double sum = 0;
            for (int i = 0; i < maxcol.length; i++){
                sum +=maxcol[i];
            }
            System.out.println("its sum is :");
            System.out.println(sum);
            System.out.println("do you want to complate :");
            System.out.println("Yes = 1 , No = 0");
            cond = in.nextInt();
        }while(cond == 1);
    }
    public static double [][] getMatrix (int row, int col){
        Scanner in = new Scanner(System.in);
        double [][] arr = new double[row][col];
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                arr[i][j] = in.nextDouble();
            }
        }
        return arr;
    }
    public static void displayMatrix (double [][] arr){
        for(int i = 0; i < arr.length; i++){
            for (int j = 0; j < arr[0]. length; j++){
                System.out.printf("%-2.2f ", arr[i][j]);
            }
            System.out.println();
        }
    }
    public static double [] getLargetsColumn (double [][] arr){
        double max = 0;
        int num = 0;
        for (int i = 0; i < arr.length; i++){
            max += arr[i][0];
        }
        for (int i = 0; i < arr[0].length; i++){
            double sum = 0;
            for(int j = 0; j < arr.length; j++){
                sum += arr[j][i];
            }
            if ( sum > max){
                max = sum;
                num = i;
            }
        }
        double [] maxmatrix = new double[arr.length];
        for (int i = 0; i < arr.length; i++){
            maxmatrix[i] = arr[i][num];
        }
        return maxmatrix;
    }
}