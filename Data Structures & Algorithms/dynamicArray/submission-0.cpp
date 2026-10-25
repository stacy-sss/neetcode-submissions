class DynamicArray {
public:

    DynamicArray(int capacity) {
        capacity_ = capacity;
        size_ = 0;
        v_.reserve(capacity_); 
    }

    int get(int i) {
        return v_[i];
    }

    void set(int i, int n) {
        v_[i] = n;
    }

    void pushback(int n) {
        if (size_ == capacity_) {
            resize();
        }
        if (size_ < (int)v_.size()) {
            v_[size_] = n;
        } else {
            v_.push_back(n);
        }
        size_++;
    }

    int popback() {
        size_--;
        return v_[size_];
    }

    void resize() {
        capacity_ *= 2;
        v_.reserve(capacity_); 
    }

    int getSize() {
        return size_;
    }

    int getCapacity() {
        return capacity_;
    }
    private:
    int capacity_;
    size_t size_;
    std::vector<int> v_; 
};
