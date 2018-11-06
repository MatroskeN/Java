package com.company;

public class Main {

    public static void main(String[] args) {
        for (int i = 0; i < 10; i++) {
            System.out.println(i);

        }
        int j = 0;
        while (j < 50) {
            j++;
                if (j % 2 == 0)
                    continue;
                if (j != 0)
                System.out.println(j);
            }
            int x = 1;
            do {
                x++;
                System.out.println("x");
            } while (x < 0);
        }
    }
