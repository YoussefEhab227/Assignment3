#include <iostream>
#include <vector>
#include <set>
using namespace std;


//int countSubsetSumWays(vector<int> & set, int target);
int countSubsetSumWays(set<int> & set1, int target);
int main()
{
//    int arr[]={1,2,3,4,5};
//    vector<int> sampleSet;
//    for(int i=0;i<5;i++)
//    {
//        sampleSet.push_back(arr[i]);
//    }
set<int>sampleSet;
for(int i=0;i<5;i++)
    sampleSet.insert(5-i);

    cout<<countSubsetSumWays(sampleSet,5)<<endl;
    cout<<endl;
    cout<<countSubsetSumWays(sampleSet,11)<<endl;
    cout<<endl;
    cout<<countSubsetSumWays(sampleSet,0);
    cout<<endl;



}


int countSubsetSumWays(set<int> & set1, int target)

{


    if(target==0){return 1;}


    else if(target < 0 || set1.empty()){return 0;}

    else

    {


set<int>result;
set<int>::iterator element;
for(set<int>::iterator it = set1.begin(); it!=set1.end();it++)
{
    element=set1.begin();
	if (*element + *it==target)
	{
		result.insert(*element);
		result.insert(*it);
		break;
	}

}
for(set<int>::iterator it = result.begin(); it!=result.end();it++)
{
    cout<<*it<<" ";

}
cout<<endl;
/*for(int i=1;i<set1.size();i++)
{
    int j=0;
    if((set1[j]+set1[i])==target)
    {
        result.push_back(set1[j]);
        result.push_back(set1[i]);
        break;
    }
}*/

//int s=result.size();

if(result.size()==0)return 0;

set<int> rest;
set1.erase(element);
rest = set1;
return countSubsetSumWays(rest,target);


}

}

/*int countSubsetSumWays(vector<int> & set, int target)

{


    if(target==0){return 1;}


    else if(target < 0 || set.empty()){return 0;}

    else

    {


vector<int>result;


for(int i=1;i<set.size();i++)
{
    int j=0;
    if((set[j]+set[i])==target)
    {
        result.push_back(set[j]);
        result.push_back(set[i]);
        break;
    }
}



if(result.size()==0)return 0;
else{for(int i=0;i<result.size();i++){cout<<result[i]<<endl;}}

vector<int>rest;



for(int i=1;i<set.size();i++){
    int s=set[i];
    rest.push_back(s);
}


return countSubsetSumWays(rest,target);
}

}*/
