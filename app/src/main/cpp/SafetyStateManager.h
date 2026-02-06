#pragma once
#include <mutex>
#include <vector>
#include <string>

struct SafetyEvent {
    std::string state;
    long timestamp;
};

class SafetyStateManager {
public:
    void addEvent(const std::string& state, long timestamp);
    std::vector<SafetyEvent> history() const;

private:
    mutable std::mutex mtx_;
    std::vector<SafetyEvent> events_;
};
