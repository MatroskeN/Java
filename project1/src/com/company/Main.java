package com.company;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner num = new Scanner(System.in);
        int first;
        boolean isTrue;
        System.out.print("Enter first num: ");
        first = num.nextInt();

        isTrue = first == 51;

        if (first == 10 || isTrue) {
            System.out.println("Num is 10 or 51");
            System.out.println("\n");
        } else {
            System.out.println("Num isn't 10");
        }
        switch (first) {
            case 100:
                System.out.println("1");
                break;
                default:
                    System.out.println("Neliquid");
        }
        }
    }
