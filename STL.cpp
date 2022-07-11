
											/* 	------------->STL<-------------*/



/* stdc++.h header file contains all stl headers so instead of writing individually we 
prefer only one file which contains all the stl library headers  */
/* namespace is kind of scope , all c++ functions are defined under namespace std if we dont 
specify "using namespace" then we have to explicitly specify namespace std with double 
semicolon*/

// #include<bits/stdc++.h>
// using namespace std;

// namespace sai{
// 	int age=19;
// }

// using namespace sai;

// int main(int argc, char const *argv[])
// {
// 	cout<<age;
// 	std::cout<<" Explicitly specified the namespace";
// 	return 0;
// }

													/*    CONTAINERS   */

                                      /* <-------------array container---------------> */


         /* note: max size of array or vector that can be defined globally is 10^7 and locally is 10^6 in cpp*/


// #include<bits/stdc++.h>
// using namespace std;
// array<int,5> aglobal;       //{0,0,0,0,0}
// int global[5];              //{0,0,0,0,0}
// int main(int argc, char const *argv[])
// {
// 	array<int,5> a;         //declares an array of size 5 and with garbage values
/* int a[5] is same as array<int,5> a and also they both initialize with garbage values if
not any value is specified*/ 
	// array<int,5> b={1};     //{1,0,0,0,0}      
	// cout<<b[2];             //0          
	// int c[5]={1};           //{1,0,0,0,0}
	// cout<<c[2];             //0
	// cout<<aglobal[3];       //0
	// cout<<global[3];        //0
	// array<int,5> fa;
	// fa.fill(8);             //{8,8,8,8,8}
	// cout<<fa[3];            //8
	// cout<<fa.at(3);			//8
	

	/*note: basic iterators are begin(),end(),rbegin(),rend() which are applicable for allmost 
	every container */ 

	// array<int,5> ia={1,5,6,8,7};
	// auto it=ia.begin();
	// while(it!=ia.end()){
	// 	cout<<*it;
	// 	it++;
	// }                    // 15687
	// auto it1=ia.end()-1;
	// while(it1>=ia.begin()){
	// 	cout<<*it1;
	// 	it1--;
	// }                   //78651
 //    auto it2=ia.rbegin();
	// while(it2!=ia.rend()){
	// 	cout<<*it2;
	// 	it2++;
	// }                 //78651

	// /* for each loop*/
	// for(auto i:ia){
	// 	cout<<i<<" "; 
	// }                //1 5 6 8 7

	// string s="saiKumar";
	// for(auto i:s){
	// 	cout<<i<<" ";
	// }               // s a i k u m a r

	// array<int,5> ias={1,5,6,8,7};
	// cout<<ias.front();      // ias.at(0)
	// cout<<ias.back();       //ias.at(ias.size()-1)
	// return 0; 
// }





              				 /*<---------------------------Vector------------------------->*/

/*  note: vector maximum size is also 10^7 globally and 10^6 locally*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
	// vector<int> a;           //creates an empty array
	// a.push_back(5);          //{5}
	// a.push_back(6);			 //{5,6.}
	// cout<<a.size()<<endl;    //2
	// a.pop_back();            //{5}
	// cout<<a.size()<<endl;    //1
	// cout<<a[1];                 //6
	/* the reason for printing 6 even after pop_back() is Vector allocates some block of memory to store items.
size of this block is defined by capacity, which says how many items can be stored in vector, without allocating new block of memory
capacity is usually bigger then size of the vector
now when you remove items form vector, capacity and allocated block of memory doesn't change. This is an optimization.
when you remove item from back just destructor is called (for int it does nothing) and size of vector is reduced.
your value is not cleared just marked as out of vector size
so when you use operator[] it doesn't check if you exceed its size. It just returns value at specific address
since pop_back just reduced size you value is still there but at() checks range so with at() we dont get the value instead we might get
error for accessing beyond range*/
	

	// vector<int> v={1,2,3,4,5,6,8};
	// cout<<v.size()<<endl;                //7
	// v.clear();                           //deletes all elements of vector and vector becomes {}
	// cout<<v.size();                      //0


	// vector<int> v(4,3);               //{3,3,3,3}

	// vector<int> v1(v.begin(),v.end());    //copy v elements to v1
	// vector<int> v2(v);                    //copy v elements to v2 same as above but with shorter syntax

	// vector<int> v5={9,8,7,5,1,0};

	// vector<int> v6(v5.begin(),v5.begin()+3);   //copy {9,8,7} to v6
	// vector<int> v7(v5.begin(),v5.end()-3);     //copy {9,8,7} to v7
	// vector<int> v8(v5.begin()+2,v5.end());     //copy {7,5,1,0} to v8;


	// vector<int> v;
	// v.emplace_back(5);               //same as push_back but this takes slightly lesser time than push_back. note:recommended

	// vector<vector<int>> v;
	// vector<int> v1={9,8,7,5,1,0};
	// vector<int> v2={9,8,0};
	// vector<int> v3={1,0};
	// v.emplace_back(v1);
	// v.emplace_back(v2);
	// v.emplace_back(v3);
	//v.emplace_back(vector<int>(5,1));
	// for(auto i:v)                      //using for-each loop
	// 	for(auto j:i)
	// 		cout<<j;

	// for(int i=0;i<v.size();i++){           //using normal traditional way
	// 	for(int j=0;j<v[i].size();j++){
	// 		cout<<v[i][j];
	// 	}
	// }

    /*initializing a rowCountXcolumnCount matrix(2D vector) with 
	every index value as  val*/
	// vector<vector<int>> v(rowCount,vector<int>(columnCount,val)); 


	// vector<int> a[4];        // a is an array of vectors . size of a is fixed i.e 4 but the vector at every index is  dynamic
	// a[0].push_back(5);        //now {5} is the vector at 0th index
	//a[0].push_back(8);        //now {5,8} is the vector at 0th index

	// vector<vector<vector<int>>> v(10,vector<vector<int>>(15,vector<int>(20,1)));  //initializing a 3D vector with size 10x15x20 with all values as 1


	// vector<int> v(10,8);
	// for(auto i:v) cout<<i;        // prints 8 10 times
		// cout<<endl;
	// vector<int> v(10,8);
	// v.resize(15);
	// for(auto i:v) cout<<i;        //prints 8 10 times and then 0 5 times
	// 	cout<<endl;
	// vector<int> v(10,8);
	// v.resize(5);
	// for(auto i:v) cout<<i;        //prints 8 5 times
	// 	cout<<endl;;
	// vector<int> v(10,8);
	// v.resize(15,9);
	// for(auto i:v) cout<<i;        //prints 8 10 times and then 9 5 times

	// vector<int> v(10,8);
	// v.insert(v.begin(),2,7);         //inserts 7 2 times at the beginning ,we can specify any position using iterator
	// for(auto i:v) cout<<i;           //778888888888

	// vector<int> v{1,2,5,4,6,8,78,88};
	// v.erase(v.begin()+3);    //removes 4 from vector and refresh the array
	// cout<<v[3];               // printts 6
	// vector<int> v{1,7,5,4,6,8,78,88};
	// v.erase(v.begin(),v.begin()+2);    //removes from beginiing to the element before the given second iterator position
	// cout<<v.front();                    //prints 5


// }



                               /* <---------------------------Set---------------------->*/
					/* all operations on set takes log n complexity where n is size of set*/
					/* duplicate elements are not stored in set and elements are stored in sorted order*/
					/* implemented using BST and RedBlack tree and AVL tree*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
	// set<int> s;
	// s.insert(5);
	// s.insert(8);
	// s.insert(5);
	// cout<<s.size();      //prints 2
	//cout<<s.count(5);     //printts 1

	// set<int> s={9,8,6,7,5,4,5};         //stored as {4,5,6,7,8,9}
	// s.erase(7);                  //erases key 7 in set directly
	// s.erase(s.begin()+2);        //erases 6               o(log n)
	// s.erase(s.begin()+1,s.begin()+4);   // erases 5,6,7    so s becomes {4,8,9}                     o(n)

	//s.clear();                        //delete everything thus set size becomes 0

	// set<int> s={9,8,6,7,5,4,5};
	// set<int> s1(s);           //copy s elements into s1
	// set<int> s2(s.begin(),s.end());    //same as above 

	
	// int v[4]={8,9,7,6};
    // set<int> s(v,v+2);     //creates set from array s={8,9}
	
	// set<int> s{9,8,7,4,2,3,1};
	// auto it = s.find(7);         //returns an iterator pointing to 7 in set if it is present else return s.end()...log n complexity

	// s.emplace(8);           //same as insert but little faster


// }


                       /*  <-------------------------------------unordered_set---------------------------->    */

						/*  same operations as set but here the average complexity is o(1) and worst case is linear time*/
						/*here also only the unique elements are stored. The order of elements stored is not defined like we 
						can't say in which order they stored they can get stored
						in any order even the order of inserting doesn't matter */
// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	unordered_set<int> s;
// 	s.emplace(5);
// 	s.emplace(5);
// 	cout<<s.size();                 //prints 1
// }



								/* <------------------------ multiset-------------------------->*/
								/*  same as set but here duplicate values are also stored and stored in sorted order*/
								/*   all operations take o(logn) complexity*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
	// multiset<int> s;
	// s.emplace(5);
	// s.emplace(5);
	// s.emplace(5);
	// s.emplace(5);
	// cout<<s.count(5);               //prints 4
// 	cout<<s.size();                 //prints 4
// 	auto it = s.find(5);            //return an iterator pointing to first occurrence
// 	s.erase(5);                     //erases all occurrences of 5
//s.erase(s.find(5));               //removes the first occurrence of 5
// }


							/* <------------------Map--------------------> */

						/*   stores keys in sorted order if keys are strings they get stored in lexographic order */
					/*  all operations are logn complexity and map store unique keys*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
	// map<string,int> m;
	// m["sai"]=34;
	// m.insert({"san",23});
	// m.emplace("nan",23);
	// // cout<<m.size();                   //prints 3
	// m["sai"]=66;                      //overrides already present key value to 66  so {"sai",34} becomes {"sai",66}
	// pair<string,int> p;
	// p.first="chin";
	// p.second=34;
	// m.insert(p);                        // we can insert pair like this also
	// p.first="chon";
	// p.second=98;
	// m.insert(p);                                      
	// m.erase("sai");                   //erases the given key and its value from map
	/* same functions applicable here as of set   */ 
	// cout<<m.empty();                  //if map is empty returns true else false
	// cout<<m.count("sai");              //returns no of occurences of given key
	// for(auto it:m){                        //it is treated as kind of pair    and we can access pair values using . operator
	// 	cout<<it.first<<" "<<it.second;
	// }

	// for(auto it=m.begin();it!=m.end();it++){    
	// 	cout<<(*it).first<<" "<<it->second;        //it is a pointer pointing to each pair  so we can use arrow operator to access them or we can use . operator with * 
	// }
	// return 0;
// }



							/* <-------------------unordered_map-------------------------->*/
							/* same as map but keys are not stored in sorted order ,they can be stored in any order and
							average comlplexity is o(1) and here also only unique keys are stored*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	unordered_map<int,int> m;
// 	m.emplace(5,4);
// 	m.emplace(16,5);
// 	m.emplace(9,2);
// 	for(auto it:m){
// 		cout<<it.first<<" "<<it.second;       
// 	}                   //here it printed {9,2},{16,5},{5,4} but this can be any order

// 	return 0;
// }



					/* <-------------------------------multimap-------------------------->*/
					/* same as map but here duplicate keys also stored and in sorted order*/

//  #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	multimap<int,int> m;
// 	m.emplace(5,4);
// 	m.emplace(5,4);
// 	cout<<m.size();                 //prints 2
// 	for(auto i:m)
// 		cout<<i.first<< ""<<i.second<<endl;             prints {5,4},{5,4}


// }



						/* <-----------------------------Pair ---------------------->*/
						/* a pair stores only one pair ,we can think of it like a user defined datatype rather than a container*/
						
//  #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 		pair<int,int> p={1,25};
// 		cout<<p.first<<p.second;         //prints 1 25
// 		p.first=54;
// 		p.second=96;
// 		cout<<p.first<<p.second;         //prints 54 96

// 		pair<pair<int,int>,int> np={{5,4},3};              //nested pair
// 		cout<<np.first.first;               //prints 5
		/* note: we can have vector of pair ,set of pair,map of pair but we cant have unordered_map of pair and unordered set of pair*/
// 		map<pair<int,int>,int> s;
// }




							/* <---------------------------Stack--------------------------->*/
									/* No iterator concepts in stack and queue*/
												/* LIFO principle*/
												/* o(1)*/
//  #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	stack<int> s;
// 	s.push(8);
// 	s.emplace(9);
// 	s.emplace(1);
// 	s.emplace(2);
// 	s.emplace(6);
// 	cout<<s.size();               //prints 5
// 	cout<<s.top();                //prints 6
// 	s.pop();
// 	cout<<s.top();               //prints 2

// 	while(!s.empty()){           //there is no fuction to delete entire stack so we have to do like this if we want to delete entire stack
// 		s.pop();           
// 	}
// }



								/* <-------------------Queue----------------------------->*/
												/* FIFO   and   O(1)*/
//  #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	queue<int> q;
// 	q.push(3);
// 	q.emplace(9);
// 	q.emplace(2);
// 	q.emplace(6);
// 	q.emplace(7);
// 	cout<<q.front();                        //prints  3
// 	q.pop();
// 	cout<<q.front();                        //prints 9

// 	while(!q.empty()){ 
// 		q.pop();
// 	}                                     //deletes entire queue
// 	cout<<q.size();                         //prints 0
// }

				

							/*  <--------------------Priority Queue--------------------->*/
										/* Uses Heap Sort and priority queue always stores max element at the top*/
								/* Stores keys in descending order,actually not in decreasing order but kind of,
								the max heap is generated and we know the top of max heap
								is always the maximum element so we get keys in decreasing order
								,the delete operation will delete the max element of the max heap so the next maximum element will 
								be the top of priority queue.
								By default, C++ creates a max-heap for priority queue.*/
//  #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
	// priority_queue<int> q;
	// q.push(9);
	// q.push(2);
	// q.push(3);
	// q.push(6);
	// q.emplace(8);
	// q.push(7);
	// while(!q.empty())
	// {
	// 	cout<<q.top();
	// 	q.pop();
	// }                                   //prints 987632


	// priority_queue<pair<int,int>> p;
	// p.push({8,9});
	// p.push({1,9});
	// p.push({8,5});
	// p.push({6,9});
	// p.push({8,3});

	//the max is 8,9 then 8,5 then 8,3 then 6,9 then 1,9


											/*   Min priority Queue*/
	                             /* We can create a min heap using priority queue only*/
						/* before storing that negate that value and while retrieving the value again negate it */
	//lets store 1 2 3 4 5 in min priority queue
	// priority_queue<int> p;
	// p.push(-1);
	// p.push(-2);
	// p.push(-3);
	// p.push(-4);
	// p.push(-5);

	// cout<<-1 * p.top();               //prints 1
	// p.pop();
	// cout<<-1 * p.top();                   //prints 2


						/* Or we can use direct syntax of min priority queue*/

	// priority_queue<int,vector<int>,greater<int>> p;                       //this will create a min heap
	// p.push(1);
	// p.push(2);
	// p.push(3);
	// p.push(0);

	// cout<<p.top();                  //prints 0


	                                       /* Min priority queue with datatype as pair*/

	// priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;    //creates a min priority queue of pairs

// }




									/* <------------------------------deque----------------------->*/
												    	/* kind of doubly queue*/
								/* push_front ,pop_front,push_back,pop_back,begin,end,rbegin,rend,size,clear,empty,at*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	deque<int> d;
// 	d.push_front(8);
// 	d.push_front(1);
// 	d.push_front(3);
// 	d.push_front(6);
// 	d.push_back(7);
// 	d.push_back(4);
// 	cout<<d.at(1);               //prints 3
// 	auto it=d.begin();
// 	cout<<*it;                    //prints 6
// 	auto it1=d.begin()+2; 
// 	cout<<*it1;                    //prints 1
	// cout<<d.front();           //prints 6
	// cout<<d.back();            //prints 4
	// d.pop_front();
	// cout<<d.front();             //prints 3
	// d.pop_back();
	// cout<<d.back();             //prints 7
	// d.clear();                   //deletes all elements 

// }






						       /* <-------------------------list-------------------------->*/
			  /* same as deque and here at() is not there and one extra function remove is there that removes given element in O(1)*/

		    	/* push_front ,pop_front,push_back,pop_back,begin,end,rbegin,rend,size,clear,empty,and also remove*/


//  #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 		list<int> l;
// 		l.push_front(8);
// 		l.push_front(1);
// 		l.push_front(3);
// 		l.push_front(6);
// 		l.push_back(7);
// 		l.push_back(4);
// 		cout<<l.front();                  //prints 6
// 		l.remove(6);                      //O(1)
// 		cout<<l.front();                  //prints 3
// } 





											/* <------------------------bitset------------------->*/

												/* can only store 1 and 0*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
		// bitset<5> b("10111");              //creates an array of bits
		// cout<<b;                           //prints 10111

	    // bitset<7> b("10111");                 //if the specified size is greter and provide bits are lesser than it automatically fills them with zeroes from the begin
	    // cout<<b;                            //prints 0010111

		// bitset<5> b("11111");
		// cout<<b.all();                         prints 1     //returns true if all the bits are set.    note:basically set means 1 and reset means 0

		// bitset<5> b("00000");
		// cout<<b.any();                        //prints 0   //return true if any one bit is set else false

		// bitset<5> b("10111");
		// cout<<b.count();                        //prints 4 //returns no of bits set 

		// bitset<5> b("10111");
		// b.flip();   						//flips all the bits
		// cout<<b;                           //prints 01000   
		// bitset<5> b("10111");
		// b.flip(1);                               //flips the specified index bit from the end
		// cout<<b;                          //prints 10101


		// bitset<5> b("10111");
		// cout<<b.none();                             //prints 0    //returns true if no bit is set else false

		// bitset<5> b("10111");
		// b.set();                               //sets all the bits
		// cout<<b;                               //prints 11111
		// bitset<5> b("10101");
		// b.set(1);                                   //sets the 1st bit from last  note:based on 0 indexing
		// cout<<b;                                   //prints 10111

		// bitset<5> b("10111");
		// b.set(1,0);                          //sets the 1st bit from last to 0     note:based on 0 indexing
		// cout<<b;                              //prints 10101

		// bitset<5> b("10111");
		// b.reset();                                 //resets all bits
		// cout<<b;                               //prints 00000

		// bitset<5> b("10111");
		// b.reset(1);									//resets specified index from the end
		// cout<<b;                                          //prints 10101
 

 		// bitset<5> b("10111");
 		// cout<<b.size();                                 //prints 5

		// bitset<5> b("10111");
		// cout<<b.test(1);                          //prints 1    //checks if the 1st bit from end is set or not if it is returns true else false
		// cout<<b.test(3);                             //prints 0

// }
































													/* ALGORITHMS */

					/* <-------------------------------------Sort------------------------------->*/
								/* internally uses mix of mergesort,quicksort,introsort and Time complexity
								is O(nlog n) and space complexity depends on implementation if it uses mergesort
								then O(n) ,or if it uses quicksort then O(logn) or if it uses introsort  then O(1)*/

					/* basically all algorithms work on arrays and vectors by taking two iterators (startIterator,endIterator) with startIterator inclusive 
					but not endIterator i.e [)    and all complexities are general implementation complexities only
					.There is no optimization in complexities .Its just that we dont need to implement ourselves we can use it directly 
					*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {

	/* note: you can sort any specific portion using iterators*/
	// int a[n];
	// sort(a,a+n);                //sorts the entire array             note:[)
	// sort(a+l,a+n-r);            //sorts only the specified range    note:[)

	// int a[5]={9,8,7,6,5};
	// sort(a,a+5);                   //the array becomes {5,6,7,8,9}
	// sort(a+1,a+4);                    //the array becomes {9,6,7,8,5}


	// vector<int> v;
	// sort(v.begin(),v.end());            //sorts the entire array           note:[)
	// sort(v.begin()+l,v.begin()-r);      //sort only speified range          note:[)

	// vector<int> v{9,8,7,6,5,4};
	// sort(v.begin()+2,v.begin()+5);          //the vector becomes {9,8,5,6,7,4}      

// }




						/* <----------------------reverse---------------------------->*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {

 	/* same as sort we can reverse any specific portion with the given iterators  on arrays as well as vectors   note:[) */

// 	// vector<int> v{9,1,3,8,5,4};
// 	// reverse(v.begin()+2,v.begin()+5);          //the vector becomes {9,1,5,8,3,4} 
// }



							/* <----------------------max and min---------------------------->*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
	/*same as sort and reverse ,we can get max and min of any specific portion on arrays as well as vectors using iterators  note:[) */
	/* here it returns an iterator pointing to max element or min element*/
	// vector<int> v{9,1,3,8,5,4};
	// auto it=max_element(v.begin()+2,v.begin()+5);           //return iterator pointing to  8
	// auto it=min_element(v.begin()+2,v.begin()+5);           //return iterator pointing to  3
	// cout<<*it;
// }



								/* <--------------------------accumulate-------------------------------> */

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	/* syntax: accumulate(startIterator,endIterator,initialSum)*/        //sums up the values in the specified portion to the initialsum 
// 	vector<int> v{9,1,3,8,5,4};
// 	int sum=accumulate(v.begin()+2,v.begin()+5,0);
// 	cout<<sum;                          //prints 16

// }






								/* <--------------------------count-------------------------------> */

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// // 	/* syntax: count(startIterator,endIterator,value)*/        //counts no of times value occuurred in specified portion 
// 	vector<int> v{9,1,3,8,3,3};
// 	int countt=count(v.begin()+2,v.begin()+5,3);
// 	cout<<countt;                          //prints 2

// }




							/* <--------------------------find-------------------------------> */

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {

//  // 	/* syntax: find(startIterator,endIterator,value)*/        //returns an iterator pointing to the first occurrence of value ,if it is not present then returns iterator pointing to end()
// 	vector<int> v{9,1,3,8,3,3};
// 	auto it=find(v.begin()+2,v.begin()+5,3);

										// 	/* we can get index from iterator by subracting begin() from the iterator*/
										// 	int index=it-v.begin();
										// 	cout<<index;                          //prints 2
	
// int a[6]={9,1,3,8,3,3};
// auto it=find(a,a+5,3);
// 	int index=it-a;
//     cout<<index;                        //prints 2

// }





								/* <--------------------------binary_search-------------------------------> */

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {

 // 	/* syntax: binary_search(startIterator,endIterator,value)*/        //uses binarysearch to search for given value if it is found it retrns true else false

     /* vector or array must be sorted */

// 	vector<int> v{9,1,3,8,3,3};
// binary_search(v.begin()+2,v.begin()+5,3);
                 

// }




							/* <--------------------------lower_bound and upper_bound-------------------------------> */
							/* Works only on sorted array and  internally uses binary search*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {

 	/* syntax: lower_bound(startIterator,endIterator,value)*/        //returns an iterator pointing to the first element that is >= value else end()
	/* syntax: upper_bound(startIterator,endIterator,value)*/        //returns an iterator pointing to the first element that is > value else end()
// 	vector<int> v{1,2,3,8,9,9,10};
// 	auto it=lower_bound(v.begin()+2,v.begin()+5,3);
// 	/* we can get index from iterator by subracting begin() from the iterator*/
// 	int index=it-v.begin();
// 	cout<<index;                          //prints 2
			
			/* note: v.end()-v.begin() gives the index of element next to last element which is actually out of bounds so its better to
			check index before accessing it or elsse it might give runtime error*/

// 	vector<int> v{1,2,3,8,9,9,10};
// 	auto it=upper_bound(v.begin()+2,v.begin()+5,3);
// 	/* we can get index from iterator by subracting begin() from the iterator*/
// 	int index=it-v.begin();
// 	cout<<index;                       //prints 3
	

// }




								/* <--------------------------next_permutation and previous_permutation-------------------------------> */
					/* if next permutation is there then it changes that string to that next permutation and returns true else if there
					is no next permutaion possible then string changes to first permutation of that string and return false*/
              /* same with previous permutation also*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
	
   /* syntax: next_permutation(startIterator,endIterator)*/ 
   /* syntax: prev_permutation(startIterator,endIterator)*/           

	// string s="bca";
	// bool there=next_permutation(s.begin(),s.end());
	// cout<<there;                      //prints 1 i.e true
	// cout<<s;                          //prints cab
          
    // string s="cba";
	// bool there=next_permutation(s.begin(),s.end());
	// cout<<there;                      //prints 0 i.e false
	// cout<<s;                          //prints abc      


	// string s="cab";
	// bool there=prev_permutation(s.begin(),s.end());
	// cout<<there;                      //prints 1 i.e true
	// cout<<s;                          //prints bca 


	// string s="abc";
	// bool there=prev_permutation(s.begin(),s.end());
	// cout<<there;                      //prints 0 i.e false
	// cout<<s;                          //prints cba 

// }






								/* <--------------------------COMPARATOR-------------------------------> */

// #include<bits/stdc++.h>
// using namespace std;

// bool comp(int ele1,int ele2){
// 	if(ele1<=ele2){
// 		return false;
// 	}else{
// 		return true;
// 	}
// }

// bool comp(pair<int,int> p1,pair<int,int> p2){
// 	if(p1.first<p2.first){
// 		return false;
// 	}
// 	if(p1.first==p2.second){
// 		if(p1.second<=p2.second)
// 			return false;
// 	}
// 	return true;
// }

// int main(int argc, char const *argv[])
// {

       // vector<int>v{1,9,7,4,2,5,2};
       // sort(v.begin(),v.end(),comp);    //comp for sorting in decreasing order
       // for(auto i:v) 
       // cout<<i;       

		   /* in C++ there is an inbuilt comparator to sort in descending order*/

		   // vector<int>v{1,9,7,4,2,5,2};
	       //    sort(v.begin(),v.end(), greater<int>);    //comp for sorting in decreasing order
	       //    for(auto i:v) 
	       //    cout<<i;  

		// vector<pair<int,int>> v={{1,4},{5,2},{5,9}};
		// sort(v.begin(),v.end(),comp);                 //comp sorts in descending order the first elements and if the first elements are equal then it sorts based on second value in decreasing order
		// for(auto i:v)
		//    cout<<i.first<<" "<<i.second<<endl;    //output is  5 9
		// 													   // 5 2
		// 											   	       // 1 4              

// }
