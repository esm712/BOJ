#include<iostream>
#include<algorithm>
using namespace std;
int n;
void question(int a){
    if(a==0){
        for(int i=0; i<n-a; i++){
            printf("____");
        }
        printf("\"����Լ��� ������?\"\n");
        for(int i=0; i<n-a; i++){
            printf("____");
        }
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
        for(int i=0; i<n-a; i++){
            printf("____");
        }
        printf("��� �亯�Ͽ���.\n");
        return;
    }
    a--;
    for(int i=0; i<n-a-1; i++){
        printf("____");
    }
    printf("\"����Լ��� ������?\"\n");
    for(int i=0; i<n-a-1; i++){
        printf("____");
    }
    printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
    for(int i=0; i<n-a-1; i++){
        printf("____");
    }
    printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
    for(int i=0; i<n-a-1; i++){
        printf("____");
    }
    printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
    question(a);
    for(int i=0; i<n-a-1; i++){
        printf("____");
    }
    printf("��� �亯�Ͽ���.\n");
}

int main(void){
    scanf("%d",&n);
    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    question(n);
}