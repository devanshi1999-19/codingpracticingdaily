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
struct Trie *getNode(void)
{
    struct Trie *p = new Trie;
    p->isEOW = false;
    for (int i = 0; i < alpha_size; i++)
        p->children[i] = NULL;

    return p;
}
void insert(struct Trie *root, string key)
{
    struct Trie *p = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!p->children[index])
            p->children[index] = getNode();
        p = p->children[index];
    }
    p->isEOW = true;
}

bool search(struct Trie *root, string key)
{
    struct Trie *p = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!p->children[index])
            return false;

        p = p->children[index];
    }
    return (p != NULL && p->isEOW);
}

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
