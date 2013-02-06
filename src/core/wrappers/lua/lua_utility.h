#include <argos3/core/utility/logging/argos_log.h>

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

#include <string>

namespace argos {

   class CLuaUtility {

   public:
      
      static void LoadScript(lua_State* pt_state,
                             const std::string& str_filename);
      
      static void CallFunction(lua_State* pt_state,
                               const std::string& str_function);

      static void PrintGlobals(CARGoSLog& c_log,
                               lua_State* pt_state);
      
      static void PrintStack(CARGoSLog& c_log,
                             lua_State* pt_state);
      
   };

}

