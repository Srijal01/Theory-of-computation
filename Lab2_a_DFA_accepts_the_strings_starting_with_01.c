//WAP to implement DFA that accepts the strings starting with 01.
#include<stdio.h>
enum states{q0,q1,qf,qd};
enum states transition(enum states,char);
int main( )
{
    char str[20];
    enum states curr_state=q0;
    int i=0;
    printf("Enter a binary string");
    gets(str);
    char ch=str[i];
    while(ch!='\0')
    {
        curr_state=transition(curr_state,ch);
        ch=str[++i];
    }
    if (curr_state==qf)
        printf("\nThe given binary string %s is accepted",str);
    else
        printf("\nThe given binary string %s is not accepted",str);
    return 0;
}
enum states transition(enum states s,char ch)
{
    enum states curr_state;
    switch(s)
    {
        case q0:
            if(ch=='0')
                curr_state=q1;
            else
                curr_state=qd;
            break;
        case q1:
            if(ch=='1')
                curr_state=qf;
            else
                curr_state=qd;
            break;
        case qf:
            if(ch=='0')
                curr_state=qf;
            else
                curr_state=qf;
            break;
        case qd:
            if(ch=='0')
                curr_state=qd;
            else
                curr_state=qd;
            break;
    }
    return curr_state;
};