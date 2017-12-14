#pragma once

#define PRETTY_FUNCTION_NAME_REMOVE_RETURN(name) std::string(name).substr(  std::string(name).rfind(" ")+1)
#define PRETTY_FUNCTION_NAME_REMOVE_ARGS(  name) std::string(name).substr(0,std::string(name).find ("(")  )

#if _MSC_VER
#define __PRETTY_FUNCTION__ __FUNCSIG__
#endif

#define DSL_FUNCTION_NAME PRETTY_FUNCTION_NAME_REMOVE_RETURN(PRETTY_FUNCTION_NAME_REMOVE_ARGS(__PRETTY_FUNCTION__))
