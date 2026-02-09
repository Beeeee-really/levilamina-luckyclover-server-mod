#include "mod/LCServerMod.h"

#include "ll/api/mod/RegisterHelper.h"

namespace lc_server_mod {

LCServerMod& LCServerMod::getInstance() {
    static LCServerMod instance;
    return instance;
}

bool LCServerMod::load() {
    getSelf().getLogger().debug("Loading...");
    // Code for loading the mod goes here.
    return true;
}

bool LCServerMod::enable() {
    getSelf().getLogger().debug("Enabling...");
    // Code for enabling the mod goes here.
    return true;
}

bool LCServerMod::disable() {
    getSelf().getLogger().debug("Disabling...");
    // Code for disabling the mod goes here.
    return true;
}

} // namespace lc_server_mod

LL_REGISTER_MOD(lc_server_mod::LCServerMod, lc_server_mod::LCServerMod::getInstance());
