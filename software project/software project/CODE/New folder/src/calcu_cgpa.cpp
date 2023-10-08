#include <bits/stdc++.h>
#include<windows.h>

using namespace std;

class calculate{
    public:
    
    vector<float>  CGPA(){
           int credit =0, total = 0;
           int n;
            int sms;
        cout<<"ENTER YOUR SEMESTER\n\n\n";
        cin>>sms;
            vector<float> v;
        cout<<"ENTER THE NUMBER OF COURCES"<<endl;
        cin>>n;

        cout<<"ENTER THE NUMBER OF CREDITS AND THE OBTAINED GRADE FOR EACH COURCE\n\n\n";
        while(n--){
            int a;
            char b;
            int c;
            cin>>a>>b;
            switch (b)
            {
            case 's' :
            {
                c =10;
                break;
            }
            case 'a' :
            {
                c =9;
                break;
            }
            case 'b' :
            {
                c =8;
                break;
            }
            case 'c' :
            {
                c =7;
                break;
            }
            case 'd' :
            {
                c =6;
                break;
            }
            case 'e' :
            {
                c =5;
                break;
            }
            case 'f' :
            {
                c =0;
                break;
            }

            default:
            {
                cout<<"INVALID CHARACTER"<<endl;
            }
                break;
            }
            total += c*a;
            credit += a;

        }

        // GPA = (sum 0f credit of each subject*obtained grade in that subject for all cources ) / (sum of credits of all subjects)
    
        float x = (float)total;
        float y = float(credit);
        float gpa = x/y;;
        cout<<"YOUR GPA IS: "<<gpa<<endl;
        v.push_back(gpa);
        int crt =0;
        cout<<"ENTER CREDITS IN EACH SEMESTER\n";

        for(int i = 0; i<sms-1; i++){
            int l;
            cout<<"SEM :"<<i+1<<"\t";
            cin>>l;
            crt += l;
        }
       
        cout<<"ENTER CURRENT CGPA: \t";

        float pre_CGPA;
        cin>>pre_CGPA;
         float sum_credit = (float)crt;
        float curr_cgpa = (pre_CGPA*sum_credit + y*gpa)/(sum_credit + y);
        cout<<"YOUR CGPA IS: "<<curr_cgpa<<endl;
        v.push_back(curr_cgpa);
        Sleep(20000);
        return v;
        
    }
};
