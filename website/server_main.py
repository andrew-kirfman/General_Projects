#!/user/bin/env python

import tornado.ioloop
import tornado.web
import tornado.websocket
from tornado.options import define, options, parse_command_line


# Initialize command line arguments
define("port", default=10001, help="Run on the given port", type=int)


settings = {}
handlers = [
    (r'/', MainScreenHandler)
    ]

app = tornado.web.Application(handlers, **settings)


if __name__ == "__main__":
    parse_command_line()
    app.listen(options.port)
    tornado.ioloop.IOLoop.instance().start()
