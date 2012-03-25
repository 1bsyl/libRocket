#pragma once
#include "LuaType.h"
#include "lua.hpp"
#include <Rocket/Core/Element.h>

namespace Rocket {
namespace Core {
namespace Lua {


//methods
int ElementAddEventListener(lua_State* L, Element* obj);
int ElementAppendChild(lua_State* L, Element* obj);
int ElementBlur(lua_State* L, Element* obj);
int ElementClick(lua_State* L, Element* obj);
int ElementDispatchEvent(lua_State* L, Element* obj);
int ElementFocus(lua_State* L, Element* obj);
int ElementGetAttribute(lua_State* L, Element* obj);
int ElementGetElementById(lua_State* L, Element* obj);
int ElementGetElementsByTagName(lua_State* L, Element* obj);
int ElementHasAttribute(lua_State* L, Element* obj);
int ElementHasChildNodes(lua_State* L, Element* obj);
int ElementInsertBefore(lua_State* L, Element* obj);
int ElementIsClassSet(lua_State* L, Element* obj);
int ElementRemoveAttribute(lua_State* L, Element* obj);
int ElementRemoveChild(lua_State* L, Element* obj);
int ElementReplaceChild(lua_State* L, Element* obj);
int ElementScrollIntoView(lua_State* L, Element* obj);
int ElementSetAttribute(lua_State* L, Element* obj);
int ElementSetClass(lua_State* L, Element* obj);

//getters
int ElementGetAttrattributes(lua_State* L);
int ElementGetAttrchild_nodes(lua_State* L);
int ElementGetAttrclass_name(lua_State* L);
int ElementGetAttrclient_left(lua_State* L);
int ElementGetAttrclient_height(lua_State* L);
int ElementGetAttrclient_top(lua_State* L);
int ElementGetAttrclient_width(lua_State* L);
int ElementGetAttrfirst_child(lua_State* L);
int ElementGetAttrid(lua_State* L);
int ElementGetAttrinner_rml(lua_State* L);
int ElementGetAttrlast_child(lua_State* L);
int ElementGetAttrnext_sibling(lua_State* L);
int ElementGetAttroffset_height(lua_State* L);
int ElementGetAttroffset_left(lua_State* L);
int ElementGetAttroffset_parent(lua_State* L);
int ElementGetAttroffset_top(lua_State* L);
int ElementGetAttroffset_width(lua_State* L);
int ElementGetAttrowner_document(lua_State* L);
int ElementGetAttrparent_node(lua_State* L);
int ElementGetAttrprevious_sibling(lua_State* L);
int ElementGetAttrscroll_height(lua_State* L);
int ElementGetAttrscroll_left(lua_State* L);
int ElementGetAttrscroll_top(lua_State* L);
int ElementGetAttrscroll_width(lua_State* L);
int ElementGetAttrstyle(lua_State* L);
int ElementGetAttrtag_name(lua_State* L);

//setters
int ElementSetAttrclass_name(lua_State* L);
int ElementSetAttrid(lua_State* L);
int ElementSetAttrinner_rml(lua_State* L);
int ElementSetAttrscroll_left(lua_State* L);
int ElementSetAttrscroll_top(lua_State* L);



RegType<Element> ElementMethods[];
luaL_reg ElementGetters[];
luaL_reg ElementSetters[];

template<> const char* GetTClassName<Element>();
template<> RegType<Element>* GetMethodTable<Element>();
template<> luaL_reg* GetAttrTable<Element>();
template<> luaL_reg* SetAttrTable<Element>();
}
}
}