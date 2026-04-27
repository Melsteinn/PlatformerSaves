#if !defined(GEODE_IS_IOS)
#include <Geode/Geode.hpp>
#include <sabe.persistenceapi/include/PersistenceAPI.hpp>

using namespace geode::prelude;
using namespace persistenceAPI;

$on_mod(Loaded) {
    // Keybinds are now handled natively by Geode 5.x
    // The save-game keybind is registered in PlayLayer::setupKeybinds()
}
#endif
