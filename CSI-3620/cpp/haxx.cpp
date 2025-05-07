// "haxx". A nonsense hacking generator.
// Gives you a bollywood experience right into your terminal, with
// * More than 1000 ips simulated!
// * An INFINITE amount of simulated names!
// * Over 100 different types of glitches!
// * An overly dramatic hack, just like seen in the movies!
// * And more (If you -REALLY- have a lot of time to spend staring at this command.)
// Compile this with "gcc haxx.c -o haxx -static (-Bstatic if you are on MacOS) -O3 -Wall"
// And if you really hate yourself, just send it to its appropriate directory with "sudo mv haxx /usr/local/bin/."
// And then run it by typing haxx.
// And grab the popcorn.
// Screenshot: https://i.imgur.com/W30hsmW.png

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void clear_screen() {
    printf("\033[2J\033[H");
}

void print_random_ip(int glitch, int surprise_glitch) {
    char ip[16];
    snprintf(ip, sizeof(ip), "%d.%d.%d.%d", rand() % 256, rand() % 256, rand() % 256, rand() % 256);
    if (surprise_glitch) {
        int effect = rand() % 3;
        for (int i = 0; ip[i] != '\0'; i++) {
            if (effect == 0 && rand() % 2 == 0) {
                char emojis[] = "😈🔥💾";
                printf("\033[5;31m%c\033[0m", emojis[rand() % 3]);
            } else if (effect == 1 && rand() % 3 == 0) {
                printf("\033[90m%c\033[0m", ip[i]);
            } else if (effect == 2 && rand() % 4 == 0) {
                printf("\033[1;31m-\033[0m");
            } else {
                printf("\033[1;35m%c\033[0m", ip[i]);
            }
        }
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    } else if (glitch) {
        int effect = rand() % 3;
        for (int i = 0; ip[i] != '\0'; i++) {
            if (effect == 0 && rand() % 3 == 0) {
                char emojis[] = "⚡💻🛡️";
                printf("\033[1;31m%c\033[0m", emojis[rand() % 3]);
            } else if (effect == 1 && rand() % 2 == 0) {
                printf("\033[90m%c\033[0m", ip[i]);
            } else if (effect == 2 && rand() % 3 == 0) {
                printf("\033[1;31m~\033[0m");
            } else {
                printf("\033[1;33m%c\033[0m", ip[i]);
            }
        }
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    }
    printf("%s", ip);
}

void print_random_name(int glitch, int surprise_glitch) {
    char name[12];
    int length = 6 + rand() % 6;
    for (int i = 0; i < length; i++) {
        if (rand() % 3 == 0 && i > 0) {
            name[i] = rand() % 2 ? '0' + (rand() % 10) : '_';
        } else {
            name[i] = 'A' + (rand() % 26);
        }
    }
    name[length] = '\0';
    if (surprise_glitch) {
        int effect = rand() % 3;
        for (int i = 0; i < length; i++) {
            if (effect == 0 && rand() % 2 == 0) {
                char emojis[] = "😈🔥💾";
                printf("\033[5;31m%c\033[0m", emojis[rand() % 3]);
            } else if (effect == 1 && rand() % 3 == 0) {
                printf("\033[90m%c\033[0m", name[i]);
            } else if (effect == 2 && rand() % 4 == 0) {
                printf("\033[1;31m-\033[0m");
            } else {
                printf("\033[1;35m%c\033[0m", name[i]);
            }
        }
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    } else if (glitch) {
        int effect = rand() % 3;
        for (int i = 0; i < length; i++) {
            if (effect == 0 && rand() % 3 == 0) {
                char emojis[] = "⚡💻🛡️";
                printf("\033[1;31m%c\033[0m", emojis[rand() % 3]);
            } else if (effect == 1 && rand() % 2 == 0) {
                printf("\033[90m%c\033[0m", name[i]);
            } else if (effect == 2 && rand() % 3 == 0) {
                printf("\033[1;31m~\033[0m");
            } else {
                printf("\033[1;33m%c\033[0m", name[i]);
            }
        }
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    }
    printf("%s", name);
}

void print_hack_message(int message_index, int glitch, int surprise_glitch) {
    char verbs[][15] = {"HACKING", "BREACHING", "INFILTRATING", "CRACKING", "BYPASSING", 
                       "OVERRIDING", "STEALING", "DEPLOYING", "ACCESSING", "DOWNLOADING"};
    char targets[][12] = {"MAINFRAME", "FIREWALL", "DATABASE", "ENCRYPTION", "SATELLITE", 
                         "SECURITY", "CREDENTIALS", "PROTOCOLS", "NETWORK", "SERVERS"};
    char message[30];
    snprintf(message, sizeof(message), "%s %s...", verbs[message_index % 10], targets[message_index % 10]);
    if (surprise_glitch) {
        int effect = rand() % 3;
        for (int i = 0; message[i] != '\0'; i++) {
            if (effect == 0 && rand() % 2 == 0) {
                char emojis[] = "😈🔥💾";
                printf("\033[5;31m%c\033[0m", emojis[rand() % 3]);
            } else if (effect == 1 && rand() % 3 == 0) {
                printf("\033[90m%c\033[0m", message[i]);
            } else if (effect == 2 && rand() % 4 == 0) {
                printf("\033[1;31m-\033[0m");
            } else {
                printf("\033[1;35m%c\033[0m", message[i]);
            }
        }
        printf("\n");
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    } else if (glitch) {
        int effect = rand() % 3;
        for (int i = 0; message[i] != '\0'; i++) {
            if (effect == 0 && rand() % 3 == 0) {
                char emojis[] = "⚡💻🛡️";
                printf("\033[1;31m%c\033[0m", emojis[rand() % 3]);
            } else if (effect == 1 && rand() % 2 == 0) {
                printf("\033[90m%c\033[0m", message[i]);
            } else if (effect == 2 && rand() % 3 == 0) {
                printf("\033[1;31m~\033[0m");
            } else {
                printf("\033[1;33m%c\033[0m", message[i]);
            }
        }
        printf("\n");
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    }
    printf("\033[1;31m%s\n\033[0m", message);
}

void print_progress_bar(int percent, int glitch, int surprise_glitch) {
    printf("\033[1;32m[");
    for (int i = 0; i < 50; i++) {
        if (i < percent / 2) {
            printf("=");
        } else {
            printf(" ");
        }
    }
    printf("] %d%%\033[0m", percent);
    if (surprise_glitch) {
        int effect = rand() % 3;
        printf("\r\033[1;32m[");
        for (int i = 0; i < 50; i++) {
            if (i < percent / 2 && effect == 0 && rand() % 2 == 0) {
                char emojis[] = "😈🔥💾";
                printf("\033[5;31m%c\033[0m", emojis[rand() % 3]);
            } else if (i < percent / 2 && effect == 1 && rand() % 3 == 0) {
                printf("\033[90m=\033[0m");
            } else if (i < percent / 2 && effect == 2 && rand() % 4 == 0) {
                printf("\033[1;31m-\033[0m");
            } else if (i < percent / 2) {
                printf("\033[1;35m=\033[0m");
            } else {
                printf(" ");
            }
        }
        printf("] %d%%\033[0m", percent);
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    } else if (glitch) {
        int effect = rand() % 3;
        printf("\r\033[1;32m[");
        for (int i = 0; i < 50; i++) {
            if (i < percent / 2 && effect == 0 && rand() % 3 == 0) {
                char emojis[] = "⚡💻🛡️";
                printf("\033[1;31m%c\033[0m", emojis[rand() % 3]);
            } else if (i < percent / 2 && effect == 1 && rand() % 2 == 0) {
                printf("\033[90m=\033[0m");
            } else if (i < percent / 2 && effect == 2 && rand() % 3 == 0) {
                printf("\033[1;31m~\033[0m");
            } else if (i < percent / 2) {
                printf("\033[1;33m=\033[0m");
            } else {
                printf(" ");
            }
        }
        printf("] %d%%\033[0m", percent);
        fflush(stdout);
        usleep(250000 + (rand() % 250001));
        printf("\r\033[K");
    }
}

int main() {
    srand(time(NULL));
    int progress = 0;
    int message_index = 0;
    int delay_us = 20000;
    time_t start_time = time(NULL);
    int next_glitch_time = 15 + (rand() % 16);
    int next_surprise_time = 1 + (rand() % 30);
    int surprise_in_minute = 0;
    int last_minute = 0;

    while (1) {
        clear_screen();
        int elapsed = (int)(time(NULL) - start_time);
        int glitch = elapsed >= next_glitch_time;
        int surprise = elapsed >= next_surprise_time && surprise_in_minute < 2;
        int glitch_type = rand() % 100;
        int glitch_section = rand() % 4;

        int ip_glitch = glitch_type < 70 && glitch_section == 0;
        int name_glitch = glitch_type < 70 && glitch_section == 1 || glitch_type >= 70 && glitch_type < 90 && (glitch_section == 1 || glitch_section == 2);
        int message_glitch = glitch_type < 70 && glitch_section == 2 || glitch_type >= 70 && glitch_type < 90 && (glitch_section == 1 || glitch_section == 2) || glitch_type >= 90 && glitch_type < 97 && (glitch_section == 1 || glitch_section == 2 || glitch_section == 3);
        int bar_glitch = glitch_type < 70 && glitch_section == 3 || glitch_type >= 70 && glitch_type < 90 && (glitch_section == 1 || glitch_section == 2) || glitch_type >= 90 && glitch_type < 97 && (glitch_section == 1 || glitch_section == 2 || glitch_section == 3) || glitch_type >= 97;

        printf("\033[1;36m===== HACKTRON 3000 - GLOBAL DOMINATION PROTOCOL =====\033[0m\n\n");
        printf("\033[5;33mTARGET ACQUIRED: ");
        print_random_ip(glitch && ip_glitch, surprise && ip_glitch);
        printf("\033[0m\n");
        printf("OPERATIVE: ");
        print_random_name(glitch && name_glitch, surprise && name_glitch);
        printf("\n\n");
        print_hack_message(message_index, glitch && message_glitch, surprise && message_glitch);
        print_progress_bar(progress, glitch && bar_glitch, surprise && bar_glitch);
        printf("\n\033[1;35mSYSTEM STATUS: COMPROMISED\033[0m\n");
        printf("DATA BREACH: \033[1;31m%d TERABYTES\033[0m\n", rand() % 1000);
        printf("SECURITY LEVEL: \033[5;31mCRITICAL\033[0m\n");
        printf("\n\033[1;36m>>> EXECUTING EXPLOIT: ");
        print_random_name(glitch && name_glitch, surprise && name_glitch);
        printf("_V%d.%d <<<\033[0m\n", rand() % 9 + 1, rand() % 99);
        printf("\n\033[1;33mWARNING: TRACE DETECTED FROM ");
        print_random_ip(glitch && ip_glitch, surprise && ip_glitch);
        printf("\033[0m\n");

        int steps = 100;
        int duration = 2000000 + (rand() % 10000001);
        delay_us = duration / steps;

        progress += 1;
        if (progress > 100) {
            progress = 0;
            message_index++;
        }

        if (elapsed >= next_glitch_time) {
            next_glitch_time = elapsed + 15 + (rand() % 16);
        }
        if (elapsed >= next_surprise_time && surprise_in_minute < 2) {
            surprise_in_minute++;
            next_surprise_time = elapsed + 1 + (rand() % 30);
        }
        int current_minute = elapsed / 60;
        if (current_minute > last_minute) {
            surprise_in_minute = 0;
            next_surprise_time = elapsed + 1 + (rand() % 30);
            last_minute = current_minute;
        }

        usleep(delay_us);
    }
    return 0;
}