// #include<bits/stdc++.h>
// using namespace std;
// class StudentTable
// {
//     private:
//         vector<vector<string>>names;
//         vector<int>avg;
//         vector<int>count;
//     public:
//         StudentTable(vector<string>name,int a,int c)
//         {
//             names.push_back(name);
//             avg.push_back(a);
//             count.push_back(c);
//         }
//         void display()
//         {
//             for(int i=0;i<names.size();i++)
//             {
//                 for(auto it:names[i])
//                 {
//                     cout<<it<<" ";
//                 }
//                 cout<<avg[i]<<" "<<count[i];
//                 cout<<"\n";
//             }
//         }
// };
// int main()
// {
//     vector<StudentTable>t={
//         {{"Prajjal","Abhay","Rohit"},18,20},
//         {{"Kajal","Sapna","Kriti"},20,23}
//     };
//     for(auto it:t)
//     {
//         it.display();
//     }
// }
#include<bits/stdc++.h>
using namespace std;
class DiseaseTable
{
    private:
    vector<vector<string>>symptoms;
    vector<int>Fees;
    vector<int>Waiting;

    public:
    DiseaseTable(vector<string>symptom,int a,int b){
        symptoms.push_back(symptom);
        Fees.push_back(a);
        Waiting.push_back(b);

    };

   void display()
   {
    for (int i = 0; i <symptoms.size(); i++)
    {
     for(auto it:symptoms[i])
     {
        cout<<it<<" ";
     }
     cout<<Fees[i]<<" "<<Waiting[i]<<"\n";

      
    }
    
   }

};

int main()
{
    vector<DiseaseTable>t={
        {{"fever","cough"},50,20},
        {{"headache","nausea"},60,15}
    };
    for(auto it:t)
    {
        it.display();
    }
}