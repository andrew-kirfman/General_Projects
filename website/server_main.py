#!/usr/bin/env python

import tornado.ioloop
import tornado.web
import tornado.websocket
import os
from tornado.options import define, options, parse_command_line


# Initialize command line arguments
define("port", default=10001, help="Run on the given port", type=int)


class ProgramFileHandler(tornado.web.StaticFileHandler):
    def initialize(self, path):
        self.dirname, self.filename = os.path.split(path)
        super(ProgramFileHandler, self).initialize(self.dirname)

    def get(self, path=None, include_body=True):
        program_file = str(self.dirname) + '/' + str(self.filename) + '/' + str(path)
        super(ProgramFileHandler, self).get(program_file, include_body)


class MainScreenHandler(tornado.web.RequestHandler):
    @tornado.web.asynchronous
    def get(self):
        self.render("./static/html/main_screen.html")


settings = {}
handlers = [
    (r'/', MainScreenHandler),
    (r'/static/(.*)', ProgramFileHandler, {'path' : './static'})
    ]

app = tornado.web.Application(handlers, **settings)


if __name__ == "__main__":
    parse_command_line()
    app.listen(options.port)
    tornado.ioloop.IOLoop.instance().start()
