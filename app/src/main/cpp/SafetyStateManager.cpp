#include "SafetyStateManager.h"

void SafetyStateManager::addEvent(const std::string& state, long timestamp) {
    std::lock_guard<std::mutex> lock(mtx_);
    events_.push_back({state, timestamp});
}

std::vector<SafetyEvent> SafetyStateManager::history() const {
    std::lock_guard<std::mutex> lock(mtx_);
    return events_;
}
