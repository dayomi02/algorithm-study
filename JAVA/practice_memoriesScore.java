
package com.algorithm;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// 풀이 날짜: 2024-05-13
// 풀이 문제: https://school.programmers.co.kr/learn/courses/30/lessons/176963
public class practice_memoriesScore {
    public static void main(String[] args) {
        String[] name = {"may", "kein", "kain", "radi"};
        int[] yearning = {5, 10, 1, 3};
        String[][] photos = {{"may", "kein", "kain", "radi"}, {"may", "kein", "brin", "deny"}, {"kon", "kain", "may", "coni"}};

        int[] result = {};
        result = solution(name, yearning, photos);
    }

    public static int[] solution(String[] name, int[] yearnings, String[][] photo) {
        int[] answer = new int[photo.length];
        List<String> nameList = new ArrayList<>(Arrays.asList(name));

        for(int i = 0; i< photo.length; i++){
            int score = 0;
            for(int j  = 0; j < photo[i].length; j++){
                if(!nameList.contains(photo[i][j]))
                    continue;
                score += yearnings[nameList.indexOf(photo[i][j])];
//                System.out.println(yearnings[nameList.indexOf(photo[i][j])]+"\n");
            }
            answer[i] = score;
        }
//        System.out.println(Arrays.toString(answer) +"\n");

        return answer;
    }
}
