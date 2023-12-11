#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Node {
    string key;
    Node* prev;
};

class Iterator {
private:
    Node* current;
    friend class Stack;
public:
    Iterator() {};
    Iterator(Node* node) {
        current = node;
    };
    void operator -- () {
        current = current->prev;
    }
    Node* operator *() const {
        return current;
    }
};

class Stack {
private:
    Node* lastNd, * current, * tail, * lastNd2, * current2, * tail2;
    int n = 0;
    Iterator end;
public:
    Stack() {};
    Stack(int);
    ~Stack();
    Stack& operator = (Stack&);
    int operator () ();
    friend ostream& operator << (ostream&, Stack&);
    friend istream& operator >> (istream&, Stack&);
    Iterator last();
    void operator << (string);
    void AIS() {//AddIntoStack
        int l;
        cout << "������� ����� ��������: ";
        cin >> l;
        lastNd2 = tail;
        tail = tail->prev;
        lastNd2->prev = NULL;
        for (int i = 1; i < n - l + 1; i++) {//���������� ��� �������� �� ���� 2 �� ������� ������ ������������
            current2 = tail;
            tail = tail->prev;
            current2->prev = lastNd2;
            lastNd2 = current2;
        }
        tail2 = lastNd2;
        cout << "������� ���������� ���������: ";
        cin >> l;
        n += l;
        lastNd = tail;
        for (int i = 0; i < l; i++) {//������ ����� K ��������� � ���� 1
            current = new Node;
            cout << "������� " << i + 1 << " �������: ";
            cin >> current->key;
            current->prev = lastNd;
            lastNd = current;
        }
        tail = lastNd;
        while (tail2 != NULL) {//���������� ������� ��������� ��������
            current = tail2;
            tail2 = tail2->prev;
            current->prev = lastNd;
            lastNd = current;
        }
        tail = lastNd;
    }
    void DFS() {//DeleteFromStack
        string l;
        cout << "������� ���� ��������: ";
        cin >> l;
        current = NULL;
        lastNd = tail;
        bool replace = false;
        if (lastNd->key == l) {//���� ������ ������� �������� ���������, �� ������ ������� ��� �� �����
            tail = lastNd->prev;
            delete lastNd;
            replace = true;
            n--;
        }
        else {
            lastNd2 = lastNd;
            lastNd = lastNd->prev;
            lastNd2->prev = NULL;
            while (lastNd != NULL) {//����������� ��� �������� �� ����� 1 � ���� 2, ����� ����������
                current2 = lastNd;
                lastNd = lastNd->prev;
                if (current2->key != l) {
                    current2->prev = lastNd2;
                    lastNd2 = current2;
                }
                else {
                    delete current2;
                    n--;
                }
            }
            tail = lastNd2;//������ ����� 1 ������ 2, ������ ���� 1 ��������� � �� �������� � ���� �������� � �������� ������

            lastNd2 = NULL;
            while (tail != NULL) {//������������ ��� �������� �� ����� 1 � ���� 2, ����� ������� ��������� �������� ����
                current2 = tail;
                tail = tail->prev;
                current2->prev = lastNd2;
                lastNd2 = current2;
            }
            tail = lastNd2;//������ ����� 1 ������ 2
        }
    }
    void WF() {//WriteFile
        ofstream F("F.txt");
        F << ' ' << n;
        lastNd2 = tail;
        tail = tail->prev;
        lastNd2->prev = NULL;
        while (tail != NULL) {//������������ ��� �������� �� ����� 1 � ���� 2, ����� ������� ������������� �������� ����
            current2 = tail;
            tail = tail->prev;
            current2->prev = lastNd2;
            lastNd2 = current2;
        }
        tail = lastNd2;//������ ����� 1 ������ 2

        lastNd2 = NULL;
        while (tail != NULL) {//���������� �������� � ���� � ��������������� �������� ���� � ���� 2
            F << ' ' << tail->key;
            current2 = tail;
            tail = tail->prev;
            current2->prev = lastNd2;
            lastNd2 = current2;
        }
        tail = lastNd2;//�������� ���� 1 �� ���� 2
        F.close();
    }
    void RF() {//ReadFile
        ifstream F("F.txt");
        F >> n;
        lastNd = NULL;
        while (F.get() && !F.eof()) {
            current = new Node;
            F >> current->key;
            current->prev = lastNd;
            lastNd = current;
        }
        tail = lastNd;
        F.close();
    }
    void RS() {//RemoveStack
        lastNd = tail;
        while (lastNd != NULL) {
            current = lastNd->prev;
            delete lastNd;
            lastNd = current;
        }
        n = 0;
    }
};