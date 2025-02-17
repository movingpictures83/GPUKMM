#ifndef GPUKMMPLUGIN_H
#define GPUKMMPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class GPUKMMPlugin : public Plugin 
{
  public:    
  void input(std::string file);
  void run();
  void output(std::string file);

  private:
     int order;
     std::string pathToModels;
     std::string inputName;
};


#endif
