class MinStack {
public:
    stack<int> s1;
    stack<int> s2;

    void push(int x) {
        s1.push(x);

        if (s2.empty())
            s2.push(x);
        else
            s2.push(min(x, s2.top()));
    }

    void pop() {
        s1.pop();
        s2.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return s2.top();
    }
};