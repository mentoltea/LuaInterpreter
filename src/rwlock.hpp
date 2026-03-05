#ifndef RWLOCK_H
#define RWLOCK_H

#include <memory>
#include <thread>
#include <shared_mutex>

class RWLock {
    std::shared_mutex lock;
public:
    void read_lock() {
        lock.lock_shared();
    }
    void read_unlock() {
        lock.unlock_shared();
    }

    void write_lock() {
        lock.lock();
    }
    void write_unlock() {
        lock.unlock();
    }
};

#endif // RWLOCK_H