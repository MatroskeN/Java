package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    Person vlad = new Person();
        System.out.println("Высота Влада - "+vlad.height+" сантиметра");
        System.out.println("Вес Влада - "+vlad.weight+" килограмм");
        func (2,2);
	    readArray();
    }
    public static int [] readArray (){
        int[] arr;
        int n;
        System.out.println("Введите размерность массива");
        Scanner name = new Scanner(System.in);
        n = name.nextInt();
        System.out.println("Заполните массив");
        arr = new int [n];
        for (int i = 0; i < n; i++) {
            arr[i] = name.nextInt();
        }
        return arr;
    }
    public static void func (int a, int b) {
        int result = 1;
        for (int i = 0; i < b; i++)
            result *= a;
        System.out.println(result);
    }
}
