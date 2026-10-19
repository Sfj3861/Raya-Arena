#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <algorithm>

using namespace geode::prelude;

// Small foundation; options not implemented yet are not presented as working.
class $modify(NovaCoreMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto menu = this->getChildByID("bottom-menu");
        if (!menu) {
            log::warn("NovaCore: bottom-menu node was not found.");
            return true;
        }

        auto sprite = ButtonSprite::create(
            "NOVA", 40, true, "goldFont.fnt", "GJ_button_01.png", 25.f, 0.7f
        );
        auto button = CCMenuItemSpriteExtra::create(
            sprite, this, menu_selector(NovaCoreMenuLayer::onNovaCore)
        );
        button->setID("nova-core-button"_spr);
        menu->addChild(button);
        menu->updateLayout();
        return true;
    }

    void onNovaCore(CCObject*) {
        auto enabled = Mod::get()->getSettingValue<bool>("speedhack-enabled");
        auto multiplier = Mod::get()->getSettingValue<float>("speed-multiplier");

        FLAlertLayer::create(
            "NovaCore",
            fmt::format(
                "NovaCore v0.1.0\n\n"
                "Speed multiplier: {}\n"
                "Configured value: {:.2f}x\n\n"
                "Change these values in Geode's mod settings.\n"
                "FPS, practice tools, StartPos, hitboxes and noclip are not implemented yet.",
                enabled ? "ON" : "OFF",
                multiplier
            ),
            "Close"
        )->show();
    }
};

class $modify(NovaCorePlayLayer, PlayLayer) {
    void update(float dt) {
        if (Mod::get()->getSettingValue<bool>("speedhack-enabled")) {
            auto multiplier = Mod::get()->getSettingValue<float>("speed-multiplier");
            multiplier = std::clamp(multiplier, 0.5f, 2.0f);
            PlayLayer::update(static_cast<float>(dt * multiplier));
            return;
        }

        PlayLayer::update(dt);
    }
};
