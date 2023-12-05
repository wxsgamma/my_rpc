/*
 * @Author: your name
 * @Date: 2023-12-04 00:16:48
 * @LastEditTime: 2023-12-05 08:47:35
 * @LastEditors: nuc-virtual-machine
 * @Description: In User Settings Edit
 * @FilePath: /my_rpc/src/mprpcapplication.cpp
 */
#include"include/mprpcapplication.h"
#include<cstdio>
#include<unistd.h>
void ShowArgsHelp(){
    std::cout<<"format:command -i <configfile"<<std::endl;
}

void MprpcApplication::init(int argc,char **argv){
   if(argc<2){
        ShowArgsHelp();
        exit(EXIT_FAILURE);
   } 
   int c=0;
   std::string config_file;
   while((c=getopt(argc,argv,"i:"))!=-1){
    switch(c){
        case 'i':
            config_file=optarg;break;
        case '?':
            std::cout<<"invaild args!"<<std::endl;
            ShowArgsHelp();
            exit(EXIT_FAILURE);
        case ':': 
            std::cout<<"need<configfile>"<<std::endl;
            ShowArgsHelp();
            exit(EXIT_FAILURE);
        default:
            break;                
    }
   }
};

MprpcApplication& MprpcApplication::GetInstance(){
    static MprpcApplication app;
    return app;
}