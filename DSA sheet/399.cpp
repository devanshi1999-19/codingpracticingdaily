/*
Constructing a trie from scratch
NPTEL IIT DELHI DR. NAVEEN GARG lecture on Trie
Trie helps us to find and search a pattern in a text in very less time and is directly proportional to the length of the pattern. 
In Knuth Morris Prat Algorithm, we used to search the entire text and find the pattern, but here we will be having an entirely 
different approach which will help us to solve the provlem in O(W) space and O(k*S) time where k is the alphabet size and S is the length 
of the string.
*/

#include <bits/stdc++.h>
using namespace std;
const int alpha_size = 26;
struct Trie
{
    struct Trie *children[alpha_size];
    bool isEOW; // true if node is the end of the word.
};

/*
We have created a structure of structure of alphabets, each node can have atmost 26 children
and each node is having a bool which is false for all nodes, except for the leaf nodes of the word.
*/
struct Trie *getNode(void)
{
    struct Trie *p = new Trie;
    p->isEOW = false;
    for (int i = 0; i < alpha_size; i++)
        p->children[i] = NULL;

    return p;
}
/*
This is a method which will initialise the Trie i.e. by setting the bool false for all and initialising each node with NULL 
Creating a new Node of similar structure and then returning the root.
*/
void insert(struct Trie *root, string key)
{
    struct Trie *p = root;
    int x = key.length();
    for (int i = 0; i < x; i++)
    {
        int index = key[i] - 'a'; //position of the alphabet in the abcde...z order
        if (!p->children[index])
            p->children[index] = getNode();
        p = p->children[index];
    }
    p->isEOW = true;
}
/*
This is the insert function which will help to insert the words of the text word by word character by character into the Trie
after inserting a particular word into the trie, we will initialise the isEOW bool variable as true, as that would be the end of the word.

*/
/*
This method is used to search for the pattern inside our trie if it exists
If the pattern exists into the trie, then we will return true at the end, but if at any place we see that the pattern is not there,
then we will immediately return false.
*/
bool search(struct Trie *root, string key)
{
    struct Trie *p = root;
    int x = key.length();
    for (int i = 0; i < x; i++)
    {
        int index = key[i] - 'a';
        if (!p->children[index])
            return false;

        p = p->children[index];
    }
    return (p != NULL && p->isEOW);
}

/*
This is the driver function which will be having all the strings, these strings can also be input from the user, but for ease, we have used initialiser list 
So we will initialise the root of the Trie and by calling the function getNode, we will initialise it to the root of Trie type
Then for each word present in the keys we for each key we will insert that particular key into the trie.
At the end, we will call the search function and check, if the desired word is present in the trie or not*/
int main()
{
    string keys[] = { "my", "name", "is", "shashank"};
    int n = sizeof(keys) / sizeof(keys[0]);
    struct Trie *root = getNode();

    for (int i = 0; i < n; i++)
    {
        insert(root, keys[i]);
    }
    search(root, "shashank") ? cout << "Yes\n" : cout << "No\n";
    search(root, "these") ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
