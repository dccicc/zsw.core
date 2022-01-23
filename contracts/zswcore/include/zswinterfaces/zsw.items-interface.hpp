/*

This file is not used for the actual zswitems contract.
It can be used as a header file for other contracts to access the zswperms tables
and custom data types.

*/

#include <eosio/eosio.hpp>

using namespace eosio;
#define ZSW_ITEMS_PERMS_AUTHORIZE_CREATE_COLLECTION 1<<0
#define ZSW_ITEMS_PERMS_AUTHORIZE_MODIFY_COLLECTION 1<<1
#define ZSW_ITEMS_PERMS_AUTHORIZE_CREATE_ITEM 1<<2
#define ZSW_ITEMS_PERMS_AUTHORIZE_MODIFY_ITEM 1<<3
#define ZSW_ITEMS_PERMS_AUTHORIZE_MINT_ITEM 1<<4
#define ZSW_ITEMS_PERMS_AUTHORIZE_CREATE_ISSUER 1<<5
#define ZSW_ITEMS_PERMS_AUTHORIZE_MODIFY_ISSUER 1<<6
#define ZSW_ITEMS_PERMS_AUTHORIZE_CREATE_ROYALTY_USER 1<<7
#define ZSW_ITEMS_PERMS_AUTHORIZE_MODIFY_ROYALTY_USER 1<<8
#define ZSW_ITEMS_PERMS_AUTHORIZE_CREATE_SCHEMA 1<<9
#define ZSW_ITEMS_PERMS_AUTHORIZE_MODIFY_SCHEMA 1<<10

namespace zswcore {

}