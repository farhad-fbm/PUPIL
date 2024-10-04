#include <stdio.h>
#include <limits.h>

struct Process {
    int pid; // Process ID
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
    int waiting_time;
    int turnaround_time;
};

void findAverageTime(struct Process proc[], int n){
    int total_waiting_time = 0, total_turnaround_time = 0;

    // Calculate total waiting time and turnaround time
    for(int i = 0; i < n; i++){
        total_turnaround_time += proc[i].turnaround_time;
        total_waiting_time += proc[i].waiting_time;
    }

    printf("\nAverage Waiting Time: %.2f", (float)total_waiting_time / n);
    printf("\nAverage Turnaround Time: %.2f\n", (float)total_turnaround_time / n);
}

void calculateTimes(struct Process proc[], int n){
    int completed = 0, current_time = 0, shortest = 0, min_time = INT_MAX;
    int is_completed[n], remaining_processes = n;
    int gantt_chart[100], gantt_index = 0;

    for(int i = 0; i < n; i++){
        proc[i].remaining_time = proc[i].burst_time;
        is_completed[i] = 0;
    }

    while(remaining_processes > 0){
        shortest = -1;
        min_time = INT_MAX;

        // Find the shortest process that has arrived
        for(int i = 0; i < n; i++){
            if(proc[i].arrival_time <= current_time && !is_completed[i] && proc[i].remaining_time < min_time && proc[i].remaining_time > 0){
                min_time = proc[i].remaining_time;
                shortest = i;
            }
        }

        if(shortest == -1){
            gantt_chart[gantt_index++] = -1;  // No process running at this time
            current_time++;
            continue;
        }

        gantt_chart[gantt_index++] = proc[shortest].pid;
        proc[shortest].remaining_time--;
        current_time++;

        if(proc[shortest].remaining_time == 0){
            proc[shortest].completion_time = current_time;
            proc[shortest].turnaround_time = proc[shortest].completion_time - proc[shortest].arrival_time;
            proc[shortest].waiting_time = proc[shortest].turnaround_time - proc[shortest].burst_time;
            is_completed[shortest] = 1;
            remaining_processes--;
        }
    }

    printf("\nGantt Chart: ");
    for(int i = 0; i < gantt_index; i++){
        if(gantt_chart[i] == -1){
            printf(" Idle ");
        }
        else{
            printf(" P%d ", gantt_chart[i]);
        }
    }
    printf("\n");

    // Calculate average times
    findAverageTime(proc, n);
}

int main(){
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process proc[n];

    for(int i = 0; i < n; i++){
        proc[i].pid = i + 1;
        printf("Enter arrival time of process P%d: ", i + 1);
        scanf("%d", &proc[i].arrival_time);
        printf("Enter burst time of process P%d: ", i + 1);
        scanf("%d", &proc[i].burst_time);
    }

    // Calculate the times and print the result
    calculateTimes(proc, n);

    return 0;
}
