//WAp to implement DFA that accepts the string having the substring as 001 over an alphabet {0,1};
#include<stdio.h>
#include<string.h>
enum states{q0,q1,q2,qf};
enum states transition(enum states,char);
int main( )
{
    char input[20];
    int i=0;
    printf("Enter the binary string: ");
    gets(input);
    enum states curr_state=q0;
    char ch;
    ch=input[i];
    while (ch!='\0')
    {
        curr_state=transition(curr_state,ch);
        ch=input[++i];
    }
    if(curr_state==qf)
        printf("The given string %s is accepted",input);
    else
        printf("The given string %s is not accepted",input);
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
                curr_state=q0;
        break;
        case q1:
            if(ch=='0')
                curr_state =q2;
            else
                curr_state=q0;
            break;
        case q2:
            if(ch=='0')
                curr_state=q2;
            else
                curr_state=qf;
        break;
        case qf:
            if(ch=='0')
                curr_state=qf;
            else
                curr_state=qf;
        break;
    }
    return curr_state;
}