/*
 * @Date: 2023-12-03 21:24:30
 * @LastEditTime: 2023-12-03 21:30:13
 * @FilePath: \my_rpc\example\callee\userservice.cpp
 */
#include<iostream>
#include<string>

class UserService{
    public:
        bool login(std::string name,std::string pwd){
            std::cout<<"lpgin "<<std::endl;
            std::cout<<"name:"<<name<<"pwd"<<pwd<<std::endl;
        }
};

int main(){
    UserService us;
    us.login("xxx","xxx");
    
}