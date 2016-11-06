#ifndef _MONGOOSE_H_
#define _MONGOOSE_H_

#include <sqlite3.h>
#include "mongoose.h"

/* Here are main structures */

// Event manager
struct mg_mgr mgr;
struct mg_connection *conn;

// Functions
void run(struct mg_mgr*, int);

// Local CGI functions
void create_employee();
#endif /* _MONGOOSE_H_ */
