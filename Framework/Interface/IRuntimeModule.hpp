#pragma once

#include "Interface.hpp"

namespace My{
    Interface IRuntimeModule{
        public:
            virtual ~IRuntimeModule(){};
            virtual int Initialize()=0; //用来初始化模块
            virtual void Finalize()=0;  //模块结束后清理
            virtual void Tick()=0;      //让驱动模块来驱动此模块执行，每调用一次，模块进行一个单位的处理
    };
}
