#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[100];
    printf("Enter txt file name:\n");
    scanf("%s", fname);
    FILE* read = fopen(fname, "r");


    if (read == NULL) {
        printf("File not found.");
    }

    char win_lose_draw[999]; //teams win lose draws
    int points[999]={0}; //teams points
    int id;
    int ids[999];
    int num_of_teams = 0;

    while (fscanf(read, "%d %s", &id, win_lose_draw) !=EOF) {
            ++num_of_teams;
            int point = 0;
            for (int i = 0; win_lose_draw[i] != '\0'; i++) {

                if (win_lose_draw[i] == 'W') {
                point+=3;
                } else if (win_lose_draw[i] == 'D') {
                    point+=1;
                }

            }
            points[num_of_teams] = point;
            ids[num_of_teams]= id;


    }
    fclose(read);

    printf("There are %d teams in total.\n",num_of_teams);

    for(int a = 1 ;a<=num_of_teams;++a){
        if(points[a]>=0){
            printf("Team %d: %d\n", ids[a], points[a]);
        }
    }



    }







