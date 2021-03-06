#include"Elections.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

#include<vector>
using std::vector;

int main() 
{
	vector<Candidate> cand(5); //Initializing 5 candidates!
	int total_votes(0);
	Candidate* win = &cand[1];
	int winner(0);

	for (int i = 0; i < 5; i++) 
	{
		cand[i].EnterCandidate();
		total_votes += cand[i].NumberVotes;
		if (cand[i].NumberVotes > winner)
		{
			win = &cand[i];
		}
	}

	cout << "Candidate" << "\t" << "Number of Votes" << "\t" << "Percentage" << endl;

	for (int i = 0; i < 5; i++) {
		cand[i].PercVotes = ((float)(cand[i].NumberVotes) / total_votes)*100;
		cout << cand[i].CandidateName << "\t\t\t";
		cout <<  cand[i].NumberVotes << "\t\t";
		cout <<  cand[i].PercVotes << "%" << endl;
	}
	cout << "-------------------" << endl;
	cout << "THE WINNER IS ... \n" << endl ;

	cout << "Candidate" << "\t" << "Number of Votes" << "\t" << "Percentage" << endl;
	cout << (*win).CandidateName << "\t\t\t";
	cout << (*win).NumberVotes << "\t\t";
	cout << (*win).PercVotes << "%" << endl;


	return 0;
}