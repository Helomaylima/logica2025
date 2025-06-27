#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;    
    int correct_time; 
} Problem;

int main() {
    while (1) {
        int submissionCount;
        scanf("%d", &submissionCount);
        if (submissionCount == 0)
            break;

        Problem problems[MAX_PROBLEMS];
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
            problems[i].correct_time = 0;
        }

        for (int i = 0; i < submissionCount; i++) {
            char problem_id;
            int time;
            char verdict[10];
            scanf(" %c %d %s", &problem_id, &time, verdict);

            int idx = problem_id - 'A';

            if (problems[idx].solved == 0) {
                if (strcmp(verdict, "correct") == 0) {
                    problems[idx].solved = 1;
                    problems[idx].correct_time = time;
                } else {
                    problems[idx].penalty += 20;
                }
            }
        }

        int totalSolved = 0;
        int totalTime = 0;
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            if (problems[i].solved) {
                totalSolved++;
                totalTime += problems[i].correct_time + problems[i].penalty;
            }
        }

        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}
