#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(const pair<int,float> &a , const pair<int,float> &b ) 
{ 
    return (a.second > b.second); 
}
int main(){

    int n;
    cout<<"no of objects :";
    cin>>n;
    int profits[n];
    int weights[n];
    vector< pair<int ,float> > pw;
    int m;
    cout<<"weight of the bag :";
    cin>>m;

    for (int i = 0; i < n; i++)
    {   
        cout<<"Enter weight  :";cin>>weights[i];
        cout<<"Enter profits :";cin>>profits[i];
        pw.push_back(make_pair(i,(float)profits[i]/weights[i]));

    }
    
    sort(pw.begin() , pw.end(),cmp);
    // for (vector<pair<int ,float>>::iterator i = pw.begin(); i!=pw.end(); i++)
    // {
    //     cout<<i->first <<"  : "<<i->second<<endl;
    // }
    int m1 =m;
    float profit = 0;
    for (vector<pair<int ,float>>::iterator i = pw.begin(); i!=pw.end(); i++)
    {
        if(m1 == 0){
            break;
        }else if (m1 < weights[i-> first])
        {
            profit += m1 * i->second;
            
            cout<<i->first <<"  "<<m1<<"/"<<weights[i-> first]<<"  : "<<i->second<<endl;
            m1=0;
            break;
        }
        
        m1 =m1-weights[i-> first];
        profit += weights[i-> first] * i->second ;
        cout<<i->first <<"   1   : "<<i->second<<endl;
    }
    
    cout<<endl<<"profit  : "<<profit;
    return 0;
}