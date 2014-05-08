//
//  main.c
//  Daniel Rocket
//
//  Created by Jon Lowrey on 2/5/14.
//  Copyright (c) 2014 Jon Lowrey. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{ double velocity[24],a,b,c;  //makes an array to store velocity values
    FILE *rocket;       //declare pointer for file
    rocket=fopen("rocket2.txt","r");  //assign pointer to actual file
    if (rocket==NULL){ //make sure file can be opened
        printf("Could Not Open Data File");
        return 1;}
    int i;
    for (i = 0; i<24;i++){
        fscanf(rocket, "%lf %lf %lf %lf",&a,&b,&velocity[i],&c);
    }
    int k;
    for (k=0;k<24;k++){
        printf("%lf \n",velocity[k]);
    }
    double holder;
    int stages=0;
    holder=velocity[0];
    for(int j=0;j<24;j++){
        if (velocity[j]>holder && velocity[j]>velocity[j+1]){
            stages++;
            
        }
        holder=velocity[j];
        
        
        
    }
    
    printf("There Are: %d Stages \n",stages);
    
    
}

