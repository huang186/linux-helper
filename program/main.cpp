#include<iostream>
#include<string>
#include<fstream>
#include<map>
#include<unistd.h>
std::string linux_add="\\";
int main(){
    std::cout<<"欢迎进入linux系统中文辅助器\n";
    std::string input;
    std::string temp;
    std::cout<<"\\";
    std::map<std::string,std::string>cmd_map;
    std::ifstream file("config");
    if(!file.is_open()){
        std::cout<<"配置文件不存在";
    }
    while(std::getline(file,temp)){
        if(temp.empty()){
            file.close();
            std::cout<<"配置文件为空,请使用set命令添加指令\n";
            break;
        }
        int add=0;
        for(int i=0;i<temp.length();i++){
            if(temp[i]==' '){
                add=i;
                break;
            }
        }
        std::string string_temp1=temp.substr(0,add);
        std::string string_temp2=temp.substr(add+1);
        cmd_map[string_temp1]=string_temp2;

    }
    while(1){
        std::getline(std::cin,input);
        if(input=="exit"){
            std::cout<<"感谢使用linux系统中文辅助器\n";
            return 0;
        }
        if(input=="help"){
            std::ifstream file3("config");
            while(std::getline(file3,temp)){
                std::cout<<temp<<"\n";
            }
            continue;
        }
        if(input=="set"){
            std::ofstream file("config",std::ios::app);
            file<<"\n";
            std::cout<<"请输入新增命令:";
            std::string cmd;
            std::getline(std::cin,cmd);
            if(cmd_map.find(cmd)!=cmd_map.end()){
                std::cout<<"命令已存在";
                continue;
            }
            file<<cmd;
            file<<" ";
            std::cout<<"请输入命令对应的linux指令:";
            std::getline(std::cin,cmd);
            file<<cmd;
            file.close();
        }
        /*if(input.substr(0,2)=="cd"){
            if(input.length()==2){
                chdir("~");
            }
        }
        if(input=="回主目录"){
            chdir("~");
        }
        if(input.substr(0,12)=="返回上级"){
            chdir("..");
        }
        if(input.substr(0,12)=="切换目录"){
            chdir(input.substr(13).c_str());
        }
        if(input.substr(0,2)=="cd" && input.length()>2){
            chdir(input.substr(13).c_str());
        }
        if(input.substr(0,2)=="cd" && input.length()>2){
            chdir(input.substr(3).c_str());
        }*/
        std::string str;
        int space_pos=-1;
        for(int i=0;i<input.length();i++){
            if(input[i]==' '){
                space_pos=i;
                break;
            }
        }
        if(space_pos==-1){
            space_pos=input.length();
        }
        std::string base_command=input.substr(0, space_pos);
        std::string extra_args=input.substr(space_pos);
        auto it=cmd_map.find(base_command);
        if(it!=cmd_map.end()){
            str=cmd_map[base_command]+extra_args;
            std::system(str.c_str());
        }
        else{
            std::system(input.c_str());
        }
    }
    return 0;
}