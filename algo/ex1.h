#pragma once
#include <iostream>
#include<algorithm>
#include<string>
#include<list>
#include<deque>
#include<stack>
#include<ctype.h>
#include<queue>
using namespace std;

void remp_deq(deque<string>& deq, int nb) {
    string mot;
    for (int i = 0; i < nb; i++) {
        cout << "denner le mot" << endl;
        cin >> mot;
        deq.push_back(mot);
    }
}
void tri_cop(deque<string>& deq, list<string>& ls) {
    for (auto d : deq) {
        ls.push_back(d);
    }
    ls.sort();
    for (auto l : ls) {
        cout << l << endl;
    }
}
void affichage_pile(stack<char> st) {
    char var;
    int nb = st.size();
    for (int i = 0; i < nb; i++) {
        var = st.top();
        cout << var ;
        st.pop();
    }
    cout << endl;
}
void remp_stack(stack<char>& st) {
    char mot;
        cout << "entrer la phrase" << endl;
            while ((mot = getchar() )!= '\n') {
                if(isalpha(mot))
                    st.push(mot);
                
                
            }
            affichage_pile(st);
       
}

stack<char>* inverser_stack(stack<char>st) {
    stack<char>* tmp=new stack<char>();
    int nb = st.size();
    for (int i = 0; i < nb; i++) {
        (*tmp).push(st.top());
        st.pop();
    }
    return tmp;
}

void is_palindrome(stack<char>st) {
    stack<char>*tmp=inverser_stack(st);
    int test = 1;
    affichage_pile(*tmp);
    int nb = st.size();
    for (int i = 0; i < nb; i++) {
        if ((*tmp).top() != st.top()) {
            test =  0;
            break;
        }
        (*tmp).pop();
        st.pop();
    }
    if(test==1)
    cout << "la phrase est un palindrome" << endl;
    else cout << "la phrase n'est pas un palindrome" << endl;
}

void affichage_qu(priority_queue<string, vector<string>, greater<string>>pq) {
    int nb = pq.size();

    string val;
    for (int i = 0; i < nb; i++) {
        val = pq.top();
        cout << val << "\t";
        pq.pop();
    }
}

void remp_queue(priority_queue<string,  vector<string>, greater<string>>&pq) {
    string mot;
    char  car;
    mot = "";
    cout << "entrer la phrase" << endl;  
   car = getchar();
    while (car!='\n') {
        if (!isalpha(car)) {
            car = getchar();
           
        }
        else {
            
            while (isalpha(car)) {
                mot = mot + car;
                car = getchar();
               
            }
                pq.push(mot);
                mot = "";
                
            
        }
          
    } 

    affichage_qu(pq);
}


