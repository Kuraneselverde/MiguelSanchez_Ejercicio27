#include <fstream>
#include <iostream>
#include <random>
#include <cmath>
#include <string.h>
#include <stdlib.h>


using namespace std; 

int main(void)
{ 
  int e=0;
  float matrizo[101][101];
  float matrizn[101][101];
  for (int i=0;i<101;i++)
  {
      for (int j=0;i<101;i++)
      {
          matrizo[i][j]=0;
          matrizn[i][j]=0;
      }
  }
  for (int i=20;i<81;i++)
  {
      matrizo[40][i]=-100;
      matrizo[60][i]=100;
      matrizn[40][i]=-100;
      matrizn[60][i]=100;
  }
  while(e==0)
  {
      for(int i=1;i<100;i++)
      {
          for(int j=1;j<100;j++)
          {
              float mn=matrizn[i][j];
              float mv=matrizo[i][j];
              if(i<20 && i>60 && j!=20 && j!=40)
              {
                  matrizn[i][j]=((matrizo[i+1][j]/0.25)+(matrizo[i-1][j]/0.25)+(matrizo[i][j+1]/0.25)+(matrizo[i][j-1]/0.25));   
              }
              if((mn-mv)<0.0001)
              {
                  e=1;
              }
              else()
              {
                  e=0;
              }
          }
      }
    
  }
  return 0;
}