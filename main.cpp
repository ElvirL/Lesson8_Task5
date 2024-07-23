/*
������� 5. ��������� �����
��� ����� �������
������� ������� � �����, � ����� �� ������� ������, �� ����� ������� ������� ����������������� ������. 
�� ����� ���������� �� �������� �� ���� ���������� ���� ���� �� ������ ��������� � ������� ������� �������� ����� � ��������� ��������. 
����� ���������� �� ����� �� ������ ���� ������� ���� ����, �� �� ����� ����� �������: � ����� ����, �������� ����� ��������, 
������ �� ����� � �����. �������� �������.
�������� ��������� ��� ������� �������� ����� ����. ���� ���������� � �������� �� �������� � �������� ���������� �������, 
������� ����� �������� �� ����������� ������ ���������. ��������� ������ �������� �� ���� ���������� ����������, �������� �� ����������, 
� ���� � �������� �� ������ �� ���� ����������. �� ������ ��������� ������� �� ����� ������� ���� � ������� � �������� �� ��� ����������. 
���������� �������� �����.

������ ����������
����:

������, ���! ������� ���������� �� ������� ��������? 6
����� � ���� ��� ���� �� ��������� 1? 305
����� � ���� ��� ���� �� ��������� 2? 291
����� � ���� ��� ���� �� ��������� 3? 343
����� � ���� ��� ���� �� ��������� 4? 255
����� � ���� ��� ���� �� ��������� 5? 279
����� � ���� ��� ���� �� ��������� 6? 312

�����:
���� ������� ���� �� ����������: 4 ������ 58 ������.

������������ �� ����������
����� �������� ���������� ����������, ���������� ��������������� �������� ����������.

��� �����������
�����, ����� ����� �������� ����� ���� �������� � ������� ������� � ��������, ��� � �������.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int distance, pace, total_pace=0;

    cout << "������, ���! ������� ���������� �� ������� ��������? ";
    cin >> distance;

    for (int i=1; i<=distance; ++i){
        cout << "����� � ���� ��� ���� �� ��������� " << i << " ? ";
        cin >> pace;
        total_pace+=pace;
    }

    float average_pace = (float)total_pace / distance;
    int minutes = average_pace/60;
    int seconds = round(average_pace - (minutes*60));

    cout << "���� ������� ���� �� ����������: " << minutes << " ������ " << seconds << " ������." << endl;

}