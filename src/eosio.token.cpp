#include <include/eosio.token.hpp>

namespace eosio{

    void create(const name& issuer, const asset& max_supply)
    {
        require_auth( get_self());
    }
}