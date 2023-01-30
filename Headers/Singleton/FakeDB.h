#ifndef FAKEDB_H
#define FAKEDB_H

class FakeDB {
    public:
        static FakeDB* getInstance();
        ~FakeDB();
    private:
        FakeDB();
        static FakeDB* instance;
};
#endif