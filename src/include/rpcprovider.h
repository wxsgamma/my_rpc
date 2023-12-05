/*
 * @Date: 2023-12-03 22:31:38
 * @LastEditTime: 2023-12-05 23:47:40
 * @FilePath: \my_rpc\src\include\rpcprovider.h
 */
#ifndef RPCPROVIDE_H
#define RPCPROVIDE_H
#include"google/protobuf/service.h"
#include<memory>
#include<muduo/net/TcpServer.h>
//负责rpc框架的网络服务
class RpcProvide{
public:
    //框架提供给外部使用的接口，提供基类
    void NotifyService(google::protobuf::Service *service);
    //启动rpc服务节点，开始提供rpc远程网络调用服务
    void Run();
};








#endif