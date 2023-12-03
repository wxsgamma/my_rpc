/*
 * @Author: your name
 * @Date: 2023-12-04 00:16:48
 * @LastEditTime: 2023-12-04 00:19:30
 * @LastEditors: nuc-virtual-machine
 * @Description: In User Settings Edit
 * @FilePath: /my_rpc/src/mprpcapplication.cpp
 */
#include"include/mprpcapplication.h"

void MprpcApplication::init(int argc,char **argv){
    
};

MprpcApplication& MprpcApplication::GetInstance(){
    static MprpcApplication app;
    return app;
}