//============================================================================
// Name        : TesteLuaScript.cpp
// Author      : henrique
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "lua-5.4.2_Linux515_64_lib/include/lua.hpp"
int main() {
    lua_State *L = luaL_newstate(); // Cria o estado Lua
    luaL_openlibs(L); // Carrega as bibliotecas padrão do Lua

    // Execute código Lua aqui usando as funções lua_*

    lua_close(L); // Feche o estado Lua quando terminar

    return 0;
}
