#include<bits/stdc++.h>
using namespace std;

// this function returns the optimal length string for N keystrokes
int findoptimal(int N)
{
	// The optimal string length is N when N is smaller than 7
	if (N <= 6)
		return N;

	// An array to store result of subproblems
	int screen[N];

	int b; // To pick a breakpoint

	// Initializing the optimal lengths array for uptil 6 input
	// strokes.
	int n;
	for (n=1; n<=6; n++)
		screen[n-1] = n;

	// Solve all subproblems in bottom manner
	for (n=7; n<=N; n++)
	{
		// Initialize length of optimal string for n keystrokes
		screen[n-1] = 0;
		for (b=n-3; b>=1; b--)
		{
			// if the breakpoint is at b'th keystroke then
			// the optimal string would have length
			// (n-b-1)*screen[b-1];
			int curr = (n-b-1)*screen[b-1];
			if (curr > screen[n-1])
				screen[n-1] = curr;
		}
	}

	return screen[N-1];
}

// Driver program
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
		cout<<findoptimal(N);
		cout<<endl;
		
	}

	// for the rest of the array we will rely on the previous
	// entries to compute new ones

}

