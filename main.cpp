#include "CommonConnectionPool.h"
#include "Connection.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ConnectionPool *cp = ConnectionPool::getConnectionPool();
    char sql[1024] = {0};
    sprintf(sql, "insert into test(name,age,sex) values('%s',%d,'%s')",
            "zhang san", 20, "male");
    shared_ptr<Connection> sp = cp->getConnection();
    sp->update(sql);

    return 0;
}