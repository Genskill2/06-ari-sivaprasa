#include<stdio.h>
#include <math.h>
#include <ctype.h>
#include <cs50.h> 
string ari(string s){
int characters = 0;
int words = 0;
int sentences = 0;
for(int i=0;s[i]!= '\0'; i++){ 
if(isalnum(s[i])) 
characters++;
 if(s[i] == ' ')
 words++; 
if(s[i]=='.' || s[i]=='?' || s[i]=='!') sentences++;

}
float score; 
score = (4.71*characters/words) + (0.5* words/sentences) - 21.43; 
int x = ceil(score);
if(x==1)
return "Kindergarten";
 if(x==2)
return "First/Second Grade"; 
if(x==3)
return "Third Grade"; 
if(x==4)
return "Fourth Grade"; 
if(x==5)
return "Fifth Grade"; 
if(x==6)
return "Sixth Grade"; 
if(x==7)
return "Seventh Grade"; 
if(x==8)
return "Eighth Grade"; 
if(x==9)
return "Ninth Grade"; 
if(x==10)
return "Tenth Grade"; 
if(x==11)
return "Eleventh Grade"; 
if(x==12)
return "Twelfth Grade"; 
if(x==13)
return "College student"; 
if(x>=14)
return "Professor";
 }
