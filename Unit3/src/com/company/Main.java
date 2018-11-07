package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	int [] a;
	int n;
	Scanner in = new Scanner(System.in);
        System.out.println("Enter numbers of array: ");
        n = in.nextInt();
        a = new int [n];
        for (int i = 0; i < n; i++) {
            System.out.println("Enter a["+i+"]= ");
            a [i] = in.nextInt ();
        }
        char [][] array = new char[3][3];
        array [0][0] = 'C';
        System.out.println(array [0][0]);
    }
}
