package com.algorithm;

import java.util.Arrays;

// 풀이 날짜: 2024-05-16
// 풀이 문제: https://school.programmers.co.kr/learn/courses/30/lessons/142086
public class practice_theClosestLetter {

    public static void main(String[] args) {
//        String s = "banana";
        String s = "foobar";

        System.out.println(Arrays.toString(solution(s)));
    }

    public static int[] solution(String s) {
        int[] answer = new int[s.length()];
        char[] arr = s.toCharArray();

        for(int i = 0; i < arr.length; i++){
            int sameIndex = -1;

            for(int j = 0; j < i; j++){
                if(arr[i] == arr[j])
                    sameIndex = i - j;
            }

            answer[i] = sameIndex;
        }

        return answer;
    }
}
