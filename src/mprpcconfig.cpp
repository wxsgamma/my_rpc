/*
 * @Author: your name
 * @Date: 2023-12-05 09:17:25
 * @LastEditTime: 2023-12-05 23:40:45
 * @LastEditors: nuc-virtual-machine
 * @Description: In User Settings Edit
 * @FilePath: /my_rpc/src/mprpcconfig.cpp
 */
#include"include/mprpcconfig.h"
#include<iostream>
#include<string>
void MprpcConfig::LoadConfigFile(const char *config_file){
    FILE *pf=fopen(config_file,"r");
    if(pf==nullptr){
        std::cout<<config_file<<"not exist"<<std::endl;
    }
    while(!feof(pf)){
        char buf[512]={0};
        fgets(buf,512,pf);
        std::string src_buf(buf);
        int idx=src_buf.find_first_not_of(' ');
        if(idx!=-1){
            src_buf=src_buf.substr(idx,src_buf.size()-idx);
        }
        idx=src_buf.find_last_not_of(' ');
        if(idx!=-1){
            src_buf=src_buf.substr(0,idx+1);
        }
        if(src_buf[0]=='#'||src_buf.empty())continue;
        idx=src_buf.find('=');
        if(idx==-1)continue;
        std::string key;
        std::string value;
        key=src_buf.substr(0,idx);
        value=src_buf.substr(idx+1,src_buf.size()-idx);
        m_configMap.insert({key,value});
    }
    
};
//
std::string MprpcConfig::Load(const std::string &key){
    auto it=m_configMap.find(key);
    if(it==m_configMap.end())return nullptr;
    return it->second;
};
void Trim(std::string &src_buf){
    
};