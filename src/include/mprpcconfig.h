/*
 * @Author: your name
 * @Date: 2023-12-05 08:55:39
 * @LastEditTime: 2023-12-05 23:28:23
 * @LastEditors: nuc-virtual-machine
 * @Description: In User Settings Edit
 * @FilePath: /my_rpc/src/include/mprpcconfig.h
 */
#ifndef MPRPCCONFIG_H
#define MPRPCCONFIG_H
#include<string>
#include<unordered_map>
//rpcserverip rpcserverport zookeeperip zookeeperport
class MprpcConfig{
public:
    //
    void LoadConfigFile(const char *config_file);
    //
    std::string Load(const std::string &key);
private:
    std::unordered_map<std::string,std::string>m_configMap;
    void Trim(std::string &src_buf);
};

#endif // MPRPCCONFIG_H