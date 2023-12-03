/*
 * @Date: 2023-12-03 22:31:19
 * @LastEditTime: 2023-12-04 00:18:56
 * @FilePath: \my_rpc\src\include\mprpcapplication.h
 */
#ifndef MPRPCAPPLICATION_H
#define MPRPCAPPLICATION_H
//mprpc框架基础类，负责框架的一些初始化操作
class MprpcApplication{
public:
    static void init(int argc,char **argv);
    static MprpcApplication& GetInstance();
private:
    MprpcApplication(){};
    MprpcApplication(const MprpcApplication&)=delete;
    MprpcApplication(MprpcApplication&&)=delete;
};





#endif