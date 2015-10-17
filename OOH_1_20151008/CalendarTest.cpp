#include <iostream>
using namespace std;

int year=-1;
int month=-1;

int dayNum=-1;
int day=-1;

bool isBigYear(int year){
	bool bigYear=false;
	if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
		bigYear=true;
	}
	return bigYear;
}

int getDayNum(int year, int month){
	int dayNum=-1;
	if(month!=2){
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
			dayNum=31;
		}else{
			dayNum=30;
		}
	}else{
		//�ж�����
		if(isBigYear(year)){
			dayNum=29;
		}else{
			dayNum=28;
		}
	}
	return dayNum;
}

int getDay(int year, int month){
	int day=-1;

	int pastDayNum = 0;

	int i=0;
	for(; i<year; i++){
		//�ж�����
		if(isBigYear(i)){
			pastDayNum=pastDayNum+366;
		}else{
			pastDayNum=pastDayNum+365;
		}
	}
	
	for(i=1; i<month; i++){
		pastDayNum=pastDayNum+getDayNum(year, i);
	}

	day=(5+pastDayNum)%7;
	
	return day;
}

void doInput(){
	bool illegal = true;
	while(illegal){
		cout<<"Please input the year and month:"<<endl;
		cin>>year>>month;
		if(year>=0 && month>=1){
			illegal = false;
		}else{
			cout<<"Input illegally!"<<endl;
		}
	}
}

void makeCalendar(){
	//������µ�����
	dayNum=getDayNum(year, month);
	//������µĵ�һ�����ܼ�
	day=getDay(year, month);
}

void doOutput(){
	cout<<"\tһ\t��\t��\t��\t��\t��\t��"<<endl;

	int i=0;
	for(; i<day; i++){
		cout<<"\t";
	}

	int curDay = day-1;
	for(i=1; i<=dayNum; i++){
		cout<<"\t"<<i;
		curDay=(curDay+1)%7;
		if(curDay==6){
			cout<<endl;
		}
	}

	if(curDay!=6){
		cout<<endl;
	}
}

void main(){
	//��������
	doInput();
	//��������
	makeCalendar();
	//�������
	doOutput();
}