#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 5
#define QUESTION_LIMIT 3
#define PRIZE_PER_QUESTION 100000
#define TARGET_PRIZE 1000000

struct Player {
    char name[50];
    int score;
};

void displayLeaderboard(struct Player leaderboard[MAX_PLAYERS], int numPlayers) {
    printf("\nLeaderboard:\n");
    printf("Rank\tName\tScore\n");
    for (int i = 0; i < numPlayers; ++i) {
        printf("%d.\t%s\t%d\n", i + 1, leaderboard[i].name, leaderboard[i].score);
    }
}

int askQuestion(char *question, char *options, char correctOption) {
    printf("%s\n", question);
    printf("%s\n", options);

    char userAnswer;
    printf("Your answer: ");
    scanf(" %c", &userAnswer);

    if (userAnswer == correctOption) {
        printf("Correct!\n");
        return 1;
    } else {
        printf("Incorrect! The correct answer is %c.\n", correctOption);
        return 0;
    }
}

int warmUpRound(struct Player *player) {
    printf("\nWarm-up Round:\n");

    int correctAnswers = 0;

    // Question 1
    correctAnswers += askQuestion("What is the capital of Canada?", "A. Ottawa\nB. Toronto\nC. Vancouver\nD. Montreal\n", 'A');

    // Question 2
    correctAnswers += askQuestion("Which planet is known as the Red Planet?", "A. Mars\nB. Venus\nC. Jupiter\nD. Saturn\n", 'A');

    // Question 3
    correctAnswers += askQuestion("What is the largest mammal in the world?", "A. Elephant\nB. Blue Whale\nC. Giraffe\nD. Gorilla\n", 'B');

    printf("You answered %d out of %d questions correctly.\n", correctAnswers, QUESTION_LIMIT);

    return (correctAnswers >= 2);
}

void challengeRound(struct Player *player) {
    printf("\nChallenge Round:\n");
    printf("Answer each question to win $100,000. Reach $1,000,000 to win the game!\n");

    int prize = 0;
    int questionNumber = 1;

    while (prize < TARGET_PRIZE) {
        char question[100];
        char options[200];
        char correctOption;

        // Generate a sample question (replace this with your own set of questions)
        printf(question, "Question %d: What is the capital of France?", questionNumber);
        printf(options, "A. Berlin\nB. Paris\nC. Rome\nD. Madrid\n");

        printf(question, "Question %d: What is the capital of INDIA?", questionNumber);
        printf(options, "A. DELHI\nB. Paris\nC. Rome\nD. Madrid\n");

        correctOption = 'B';
   while (prize < TARGET_PRIZE) {
        if (askQuestion(question, options, correctOption)) {
            prize += PRIZE_PER_QUESTION;
            printf("Congratulations! You won $%d.\n", PRIZE_PER_QUESTION);
            printf("Your total prize money: $%d\n", prize);
        } else {
            printf("Sorry, you didn't answer correctly. Try again!\n");
        }

        questionNumber++;
                                }

    printf("Congratulations! You won $1,000,000!\n");
    player->score += prize;
                                   }
}

int main() {
    struct Player players[MAX_PLAYERS];
    int numPlayers = 0;

    // Get player names
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    if (numPlayers > MAX_PLAYERS) {
        printf("Error: Maximum number of players exceeded.\n");
        return 1;
    }

    for (int i = 0; i < numPlayers; ++i) {
        printf("Enter name for Player %d: ", i + 1);
        scanf("%s", players[i].name);
        players[i].score = 0; // Initialize the score to zero
    }

    // Warm-up Round
    for (int i = 0; i < numPlayers; ++i) {
        if (!warmUpRound(&players[i])) {
            printf("Sorry, %s! You couldn't pass the warm-up round. Better luck next time!\n", players[i].name);
            continue; // Skip to the next player if warm-up round is not passed
        }

        // Challenge Round
        challengeRound(&players[i]);

        // Display total score after both rounds
        printf("%s, your total score: $%d\n", players[i].name, players[i].score);
    }

    // Display leaderboard
    displayLeaderboard(players, numPlayers);

    return 0;
}