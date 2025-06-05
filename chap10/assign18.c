/*
 ���ϸ�: Assignment18-c
 ����: ���� ����Ʈ�� �÷��� ����Ʈ ����� �����Ϸ��� �Ѵ�
 �̹� ��ϵ� SONG ����ü �迭�� ���� ��, ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�.
 �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ�. �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.
 �ۼ���: ������
 ��¥: 2025.06.04
 ���� : v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct song {
    char title[100];
    char artist[100];
    char genre[20];
    int playtime;
};

// ��ü �� �迭
struct song songs[] = {
    {"thank u, next", "Ariana Grande", "pop", 208},
    {"Attention", "Charlie Puth", "pop", 209},
    {"�� ���� ����", "�ں���", "ballad", 316},
    {"How Long", "Charlie Puth", "pop", 198},
    {"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
    {"����", "��ź�ҳ��", "hip-hop", 274},
    {"Awake", "��ź�ҳ��", "ballad", 226},
    {"�Ƴ���", "MINO", "hip-hop", 241}
};

#define SONG_COUNT (sizeof(songs)/sizeof(songs[0]))
#define MAX_PLAYLIST 5

void playlist() {
    struct song* playlist[MAX_PLAYLIST] = { NULL };
    int playlist_count = 0;
    int input;
    int total_time = 0;

    while (1) {
        printf("-------------------------------------------------\n");
        printf("��ȣ\t����\t\t��Ƽ��Ʈ\t�帣\t����ð�\n");
        for (int i = 0; i < SONG_COUNT; i++) {
            printf("%d:\t%-15s %-10s %-8s %d��\n", i + 1,
                songs[i].title, songs[i].artist, songs[i].genre, songs[i].playtime);
        }

        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &input);

        if (input < 1 || input > SONG_COUNT) {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }

        if (playlist_count >= MAX_PLAYLIST) {
            printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
            break;
        }

        playlist[playlist_count++] = &songs[input - 1];

        printf("<< �÷��̸���Ʈ >>\n");
        total_time = 0;
        for (int i = 0; i < playlist_count; i++) {
            printf("%s\t%s\t%s\t%d��\n",
                playlist[i]->title,
                playlist[i]->artist,
                playlist[i]->genre,
                playlist[i]->playtime);
            total_time += playlist[i]->playtime;
        }

        printf("�� ����ð� : %d��\n", total_time);
    }
}

int main() {
    playlist();
    return 0;
}
