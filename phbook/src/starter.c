/*
 *
Phonebook server

Copyright by: iegs.org, 11 2016
 
 */

#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_
#include "phonebook.h"
#endif

// HTTP request structure
static struct mg_serve_http_opts s_http_server_opts;

// event handler definition
static void ev_handler(struct mg_connection *nc, int ev, void *pmessg) {
  
    if (ev == MG_EV_HTTP_REQUEST) {
       mg_serve_http(nc, (struct http_message *) pmessg, s_http_server_opts);
    }
    
}

int main(int argc, char *argv[]) {
 
    const char *port = "9191";
    
    // HTTP event manager initialization
    mg_mgr_init(&mgr, NULL);
    
    // Bind the event manager and the port of this server
    conn = mg_bind(&mgr, port, ev_handler);
    if (conn == NULL) {
        printf("Failed to create listener\n");
        return 1;
    }
    // Activate the listening protocol (HTTP + WebSockets)
    mg_set_protocol_http_websocket(conn);
    s_http_server_opts.document_root = "./public_html";  // Serve current directory
    s_http_server_opts.enable_directory_listing = "no";

    
    // Tell us that the server is started
    printf("Start server on the port %s\n", port);
    
    // Start the event handler
    run(&mgr, 1000);
    mg_mgr_free(&mgr);
    
    return 0;
}