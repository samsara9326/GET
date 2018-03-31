#include <stdio.h>
#include "IApplication.hpp"
/* 应用程序抽象
 * 通过IApplication接口提供的方法调用即可*/

using namespace My;

namespace My{
    extern IApplication* g_pApp; // 定义一个Application实例
}

int main(int argc, char** argv){
    int ret;
    
    if ((ret = g_pApp->Initialize())!=0){
        printf("App Initialize failed, will exit now.\n");
        return ret;
    }
    
    while (!g_pApp->IsQuit()){
        g_pApp->Tick();
    }

    g_pApp->Finalize();

    return 0;
}
