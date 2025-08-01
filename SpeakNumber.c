#include<stdio.h>
#include<windows.h>
#include<MMsystem.h>
#pragma comment(lib, "winmm.lib") // Optional in some compilers
char basePath[] = "C:\\Users\\HP\\Desktop\\SpeakNumber\\";

// Function to play any .wav file by sub-path
void PlayMusic(const char *subPath) {
    char fullPath[256];
    sprintf(fullPath, "%s%s", basePath, subPath);  // Combine basePath + subPath
    PlaySound(TEXT(fullPath), NULL, SND_SYNC);     // Play the sound
}
void play();
void word(int j);
void word1(int i, int j);


int main(){
	int i=0;
	PlayMusic("other\\welcome.wav");
	while(i!=1){
		printf("0.continue 1.exit\n");
		scanf("%d",&i);
		switch(i){
			case 0:
				play();
			break;
			case 1:
				printf("\n email-bhavyagodhaniya2004@gmail.com");
				PlayMusic("other\\last.wav");
			default:
				printf("enter valid input\n");
		}
	}
	return 0;
}
void play()
{
  unsigned long  number;
  int a,b,c,x,y,d,h,i,j,k,m,n;
  PlayMusic("other\\askToNumber.wav");
  scanf("%lu",&number);
  //if number =123456789
  b = ((((number%10000000)%100000)%1000)%100)%10;// b = 9
  a = ((((number%10000000)%100000)%1000)%100)/10; //a = 8
  c = (((number%10000000)%100000)%1000)/100; //c = 7
  d = ((number%10000000)%100000)/1000; // d =56
  i = (number%10000000)/100000;//i = 34
  h = number/10000000; //h = 12
  x = d/10;// x = 5
  y = d%10;// y = 6
  j = h/10;// j = 1
  k = h%10;// h = 2
  m = i/10;// m = 3
  n = i%10;// n = 4
  if(number>999999999)
  {
	PlayMusic("other\\THIRD.wav");
  }
  else if(number==0)
  {
  	PlayMusic("0_to_10\\0.wav");
  }
  else
  {
  	word1(j,k);
   if(j!=0||k!=0)
   {
       PlayMusic("other\\crore.wav");
   }
   word1(m,n);
   if(m!=0||n!=0)
   {
       PlayMusic("other\\lacks.wav");
   }
	word1(x,y);
   if(x!=0||y!=0)
   {
       PlayMusic("other\\thousand.wav");
   }

  switch(c)   //hundreds
  {
  case 1:
      PlayMusic("0_to_10\\1.wav");
  break;
  case 2:
  PlayMusic("0_to_10\\2.wav");
  break;
  case 3:
  PlayMusic("0_to_10\\3.wav");
  break;
  case 4:
  PlayMusic("0_to_10\\4.wav");
  break;
  case 5:
  PlayMusic("0_to_10\\5.wav");
  break;
  case 6:
  PlayMusic("0_to_10\\6.wav");
  break;
  case 7:
  PlayMusic("0_to_10\\7.wav");
  break;
  case 8:
  PlayMusic("0_to_10\\8.wav");
  break;
  case 9:
  PlayMusic("0_to_10\\9.wav");
  break;
  }
  if(c!=0)
  {
    PlayMusic("other\\hundred.wav");
  }
  word1(a,b);
  }
}
void word(int j){
	switch(j)
      {
       case 1:
       PlayMusic("0_to_10\\1.wav");
      break;
      case 2:
      PlayMusic("0_to_10\\2.wav");
      break;
      case 3:
      PlayMusic("0_to_10\\3.wav");
      break;
      case 4:
      PlayMusic("0_to_10\\4.wav");
      break;
      case 5:
      PlayMusic("0_to_10\\5.wav");
      break;
      case 6:
      PlayMusic("0_to_10\\6.wav");
      break;
      case 7:
      PlayMusic("0_to_10\\7.wav");
      break;
      case 8:
      PlayMusic("0_to_10\\8.wav");
      break;
      case 9:
      PlayMusic("0_to_10\\9.wav");
      break;
      }
}
void word1(int i,int j){
	switch(i) 
  {
      case 0:
    	word(j);
    	break;
      case 1:
      switch(j)
      {
       case 0:
       PlayMusic("0_to_10\\10.wav");
       break;
       case 1:
       PlayMusic("11_to_19\\11.wav");
      break;
      case 2:
      PlayMusic("11_to_19\\12.wav");
      break;
      case 3:
      PlayMusic("11_to_19\\13.wav");
      break;
      case 4:
      PlayMusic("11_to_19\\14.wav");
      break;
      case 5:
      PlayMusic("11_to_19\\15.wav");
      break;
      case 6:
      PlayMusic("11_to_19\\16.wav");
      break;
      case 7:
      PlayMusic("11_to_19\\17.wav");
      break;
      case 8:
      PlayMusic("11_to_19\\18.wav");
      break;
      case 9:
      PlayMusic("11_to_19\\19.wav");
      break;
      }
      break;
      case 2:
    	PlayMusic("20_to_90\\20.wav");
      word(j);
      break;
      case 3:
      PlayMusic("20_to_90\\30.wav");
      word(j);
      break;
      case 4:
      PlayMusic("20_to_90\\40.wav");
      word(j);
      break;
      case 5:
      PlayMusic("20_to_90\\50.wav");
      word(j);
      break;
      case 6:
      PlayMusic("20_to_90\\60.wav");
      word(j);
      break;
      case 7:
      PlayMusic("20_to_90\\70.wav");
      word(j);
      break;
      case 8:
      PlayMusic("20_to_90\\80.wav");
      word(j);
      break;
      case 9:
      PlayMusic("20_to_90\\90.wav");
      word(j);
	  break;		
	}
}
