/*
 * @Author: your name
 * @Date: 2023-12-05 08:55:39
 * @LastEditTime: 2023-12-05 09:17:11
 * @LastEditors: nuc-virtual-machine
 * @Description: In User Settings Edit
 * @FilePath: /my_rpc/src/include/mprpcconfig.h
 */
#ifndef MPRPCCONFIG_H
#define MPRPCCONFIG_H
#include<string>
#include<unordered_map>

class MprpcConfig{
public:
    //
    void LoadConfigFile(const char *config_file);
    //
    std::string Load(const std::string &key);
private:
    std::unordered_map<std::string,std::string>m_configMap;
};

#endif // MPRPCCONFIG_H