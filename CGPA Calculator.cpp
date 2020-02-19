#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch;
	cout<<"                     CGPA CALCULATOR                                  "<<endl<<endl<<endl;
	cout<<" ________________"<<"_____"<<"____________"<<"_____"<<"_______________"<<endl;
	cout<<"|AVAILABLE GRADES"<<"  |  "<<"GRADE POINTS"<<"  |  "<<"PERFORMANCE    |"<<endl;
	cout<<"|________________"<<"__|__"<<"____________"<<"__|__"<<"_______________|"<<endl;
	cout<<"|         O      "<<"  |  "<<"     10     "<<"  |  "<<"Outstanding    |"<<endl;
	cout<<"|         A+     "<<"  |  "<<"      9     "<<"  |  "<<"Excellent      |"<<endl;
	cout<<"|         A      "<<"  |  "<<"      8     "<<"  |  "<<"Very Good      |"<<endl;
	cout<<"|         B+     "<<"  |  "<<"      7     "<<"  |  "<<"Good           |"<<endl;
	cout<<"|         B      "<<"  |  "<<"      6     "<<"  |  "<<"Above Average  |"<<endl;
	cout<<"|         C+     "<<"  |  "<<"      5     "<<"  |  "<<"Average        |"<<endl;
	cout<<"|         C      "<<"  |  "<<"      4     "<<"  |  "<<"Pass           |"<<endl;
	cout<<"|         U      "<<"  |  "<<"      0     "<<"  |  "<<"Reappear/Absent|"<<endl;
	cout<<"|________________"<<"__|__"<<"____________"<<"__|__"<<"_______________|"<<endl;
	do
	{
		int n;
		cout<<"Enter no. of Subjects: ";
		cin>>n;
		int credit;
		float cgpa,total_credit=0,total_score=0;
		string grade;
		int score[n];
		for(int i=0;i<n;i++)
		{
			cout<<"Enter credit and grade subject "<<i+1<<": ";
			cin>>credit>>grade;
			if(grade=="O"||grade=="o")
			{
				score[i]=credit*10;
				total_credit=total_credit+credit;
				total_score=total_score+score[i];
			}
			else if(grade=="A+"||grade=="a+")
			{
				score[i]=credit*9;
				total_credit=total_credit+credit;
				total_score=total_score+score[i];
			}
			else if(grade=="A"||grade=="a")
			{
				score[i]=credit*8;
				total_credit=total_credit+credit;
				total_score=total_score+score[i];
			}
			else if(grade=="B+"||grade=="b+")
			{
				score[i]=credit*7;
				total_credit=total_credit+credit;
				total_score=total_score+score[i];
			}
			else if(grade=="B"||grade=="b")
			{
				score[i]=credit*6;
				total_credit=total_credit+credit;
				total_score=total_score+score[i];
			}
			else if(grade=="C+"||grade=="c+")
			{
				score[i]=credit*5;
				total_credit=total_credit+credit;
				total_score=total_score+score[i];
			}
			else if(grade=="C"||grade=="c")
			{
				score[i]=credit*4;
				total_credit=total_credit+credit;
				total_score=total_score+score[i];
			}
			else if(grade=="U"||grade=="u")
			{
				cout<<"CGPA: 0.00";
				return 0;;
			}
			else
			{
				cout<<"INVALID GRADE ENTERED."<<endl;
				return 0;		
			}
		}	
		cgpa=total_score/total_credit;
		cout<<"CGPA: "<<fixed<<setprecision(2)<<cgpa<<endl;
		cout<<"want to continue? Y/N: ";
		cin>>ch;
	}
	while(ch!='N'||ch!='n');
	return 0;
		
}

